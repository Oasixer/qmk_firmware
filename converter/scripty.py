import argparse
import os
import pathlib
import re
from glob import glob


def get_latest_keymap(path):
    # list_of_files = glob(os.path.join(path, 'keymap.c'))
    # return max(list_of_files, key=os.path.getctime)
    return "./generated_keymap.c"

def extract_section(file_content, section_start, section_end):
    start = file_content.find(section_start)
    if start == -1:
        return ""
    end = file_content.find(section_end, start) + len(section_end)
    return file_content[start:end]

def replace_section(master_content, new_section, section_start, section_end):
    old_section = extract_section(master_content, section_start, section_end)
    return master_content.replace(old_section, new_section, 1)

def update_macros(master_content, new_content, fkey_range):
    # Extract macros from new_content
    new_macros = re.findall(r'(case [A-Z_]+:.*?break;)', new_content, re.DOTALL)
    if not new_macros:
        return master_content

    # Prepare the macro placeholders
    fkeys = [f"f{key}" for key in range(fkey_range[0], fkey_range[1] + 1)]
    placeholders = [f"case ST_MACRO_{i}:\n    if (record->event.pressed) {{\n      SEND_STRING({possible_keys[key]});\n    }}\n    break;" for i, key in enumerate(fkeys)]

    # Replace in master_content
    for placeholder in placeholders:
        master_content = re.sub(r'(case [A-Z_]+:.*?break;)', lambda m, p=placeholder: m.group(0) + "\n" + p, master_content, count=1)

    return master_content

def main(master_path, download_path, fkey_range):
    # Read master keymap.c
    with open(master_path, 'r') as file:
        master_content = file.read()

    # Get latest keymap.c from downloads
    new_keymap_path = get_latest_keymap(download_path)
    with open(new_keymap_path, 'r') as file:
        new_content = file.read()

    # Update sections
    master_content = replace_section(master_content, extract_section(new_content, "enum custom_keycodes {", "};"), "enum custom_keycodes {", "};")
    master_content = replace_section(master_content, extract_section(new_content, "const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {", "};"), "const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {", "};")
    master_content = replace_section(master_content, extract_section(new_content, "const uint16_t PROGMEM combo", "};"), "const uint16_t PROGMEM combo", "};")
    master_content = update_macros(master_content, new_content, fkey_range)

    # Write updated master keymap.c
    with open(master_path, 'w') as file:
        file.write(master_content)

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Update keymap.c with the latest changes from Downloads.')
    parser.add_argument('--master_path', help='Path to the master keymap.c file.', default="./master_keymap1.c")
    parser.add_argument('--fkeys', help='Range of function keys for macros (e.g., "10-12" for F10 to F12).', default="f10-f10")
    args = parser.parse_args()

    if args.fkeys == "":
        fkey_range = []
    else:
        # Parse fkey range
        fkey_range = [int(x[1:]) for x in args.fkeys.split('-')]

    main(args.master_path, '~/Downloads', fkey_range)
