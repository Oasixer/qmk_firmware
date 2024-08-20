#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
  ST_MACRO_30,
  ST_MACRO_31,
  ST_MACRO_32,
  ST_MACRO_33,
  ST_MACRO_34,
  ST_MACRO_35,
  ST_MACRO_36,
  ST_MACRO_37,
  ST_MACRO_38,
  ST_MACRO_39,
  ST_MACRO_40,
  ST_MACRO_41,
  ST_MACRO_42,
  ST_MACRO_43,
  ST_MACRO_44,
  ST_MACRO_45,
  ST_MACRO_46,
  ST_MACRO_47,
  ST_MACRO_48,
  ST_MACRO_49,
};

#define TSPT KC_TRANSPARENT
// #define KC_RSHIFT KC_RIGHT_SHIFT
// #define KC_LSHIFT KC_RIGHT_SHIFT
// #define KC_LCTRL KC_LEFT_CTRL
// #define KC_RCTRL KC_RIGHT_CTRL
#define KC_LWIN KC_LEFT_GUI
#define KC_RWIN KC_RIGHT_GUI
#define KC_PGUP KC_PAGE_UP
#define KC_PGDN KC_PAGE_DOWN
#define sALT(KC) LALT(LSFT(KC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// Template: all unused
////,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.        ,-------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.
//   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,      TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
////| ESCAPE |  | Abv.Q  |  | Abv.W  |  | Abv.E  |  | Abv.R  |  | Abv.T  |  | Abv.   |       | Ab.PgUp|  | Abv.Y  |  | Abv.U  |  | Abv.I  |  | Abv.O  |  | Abv.P  |  | Abv.Qt |
////|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
////|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
//   MO(7),      TSPT,       TSPT,       TSPT,       TSPT,        TSPT,       TSPT,  /*     */TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
////| LP2    |  | Q      |  | W      |  | E      |  | R      |  | T      |  | jeff   |       |   PgUp |  | Y      |  | U      |  | I      |  | O      |  | P      |  | '''''  |
////| (FKEYS)|  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
////|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
//   MO(2),      TSPT,       TSPT,       TSPT,       TSPT,       TSPT,      /*-------|       |_______*/   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       KC_RSHIFT,
////| LP1    |  | A      |  | S      |  | D      |  | F      |  | G      |  |        |       |        |  | H      |  | J      |  | K      |  | L      |  | ;;;;;  |  | RSHFT  |
////| (CAPS) |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
////|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
//   KC_LSHIFT,  TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,      TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
////| LSHFT  |  | Z      |  | X      |  | C      |  | V      |  | B      |  |        |       |   PgDn |  | N      |  | M      |  |,,,,,   |  | .....  |  | /////  |  | LCTRL  |
////|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
////|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |________|  |--------|  |--------|  |--------|  |--------|  |--------|
//   TSPT,       TSPT,       MO(6),      MO(5),      MO(3),                                                           MO(4),      KC_LCTRL,   TSPT,       TSPT,       TSPT,
////| GAMING |  |        |  | LT3    |  | LT2[B] |  | LT1    |                                                       | RT1(nums  | LCTRL  |  | f16    |  |        |  |        |
////| TG(1)  |  |        |  |(macros)|  |(harpoon|  | (syms) |                                                       | (&LT2M))  |        |  |        |  |        |  |        |
////|--------|  |--------|  |--------|  |--------|  |--------|                                                       |--------|  |--------|  |------- |  |--------|  |--------|
////                                                            ,--------.  ,---------.       ,--------.  ,--------.
//                                                               TSPT,       TSPT,   /*      */TSPT,       TSPT,
////                                                            | UNUSED |  | UNUSED  |       | UNUSED |  | UNUSED |
////                                                ,--------.  |--------|  |---------|       |--------|  |--------|  ,---------.
///*                                                |        |  |        | */TSPT,   /*      */TSPT,  //  |        |  |         |
////                                                |        |  |        |  | UNUSED  |       | UNUSED |  | UNUSED |  |         |
////                                                |        |  |        |  |--------/|       |--------|  |        |  |         |
//                                                   KC_LCTRL,   KC_LALT,    KC_LWIN, /*     */TSPT,       KC_LWIN,    KC_SPACE
////                                                | LCTRL  |  | LALT   |  | LWIN    |       |        |  | LWIN   |  | SPACE   |
////                                                |--------|  |--------|  |---------|       |--------|  |--------|  |---------|

//                                                           (block + rstrip + botstrip + pad) * 2
[0] = LAYOUT_ergodox_pretty( // Layer 0: DEFAULT             (6*4 + 3 + 5 + 6)*2
//,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.        ,-------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.
  KC_ESCAPE,   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//|        |  | Abv.Q  |  | Abv.W  |  | Abv.E  |  | Abv.R  |  | Abv.T  |  | Abv.   |       | Ab.PgUp|  | Abv.Y  |  | Abv.U  |  | Abv.I  |  | Abv.O  |  | Abv.P  |  | Abv.Qt |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(7),      KC_Q,       KC_W,       KC_E,        KC_R,       KC_T,        TSPT,  /*     */KC_PGUP,    KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_QUOTE,
//| LP2    |  | Q      |  | W      |  | E      |  | R      |  | T      |  | jeff   |       |   PgUp |  | Y      |  | U      |  | I      |  | O      |  | P      |  | '''''  |
//| (FKEYS)|  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(2),      KC_A,       KC_S,       KC_D,       KC_F,       KC_G,      /*-------|       |_______*/   KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_RSHIFT,
//| LP1    |  | A      |  | S      |  | D      |  | F      |  | G      |  |        |       |        |  | H      |  | J      |  | K      |  | L      |  | ;;;;;  |  | RSHFT  |
//| (CAPS) |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_LSHIFT,  KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       TSPT,   /*     */KC_PGDN,    KC_N,       KC_M,       KC_COMMA,   KC_DOT,     KC_SLASH,   KC_LCTRL,
//| LSHFT  |  | Z      |  | X      |  | C      |  | V      |  | B      |  |        |       |   PgDn |  | N      |  | M      |  |,,,,,   |  | .....  |  | /////  |  | LCTRL '
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |________|  |--------|  |--------|  |--------|  |--------|  |--------|
   TSPT,      TSPT,       MO(6),      MO(5),      MO(3),                                                           MO(4),      KC_LCTRL,   KC_F16,     KC_RABK,    TSPT,
//|        |  |        |  | LT3    |  | LT2[B] |  | LT1    |                                                       | RT1(nums  | LCTRL  |  | f16    |  |        |  |        |
//|        |  |        |  |(macros)|  |(harpoon|  |        |                                                       | (&LT2M))  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |/TST)---|  |--------|                                                       |--------|  |--------|  |------- |  |--------|  |--------|
//                                                            ,--------.  ,---------.       ,--------.  ,--------.
                                                               TSPT,       TSPT,   /*      */TSPT,       TSPT,
//                                                            | UNUSED |  | UNUSED  |       | UNUSED |  | UNUSED |
//                                                ,--------.  |--------|  |---------|       |--------|  |--------|  ,---------.
/*                                                |        |  |        | */TSPT,   /*      */TSPT,  //  |        |  |         |
//                                                |        |  |        |  | UNUSED  |       | UNUSED |  | UNUSED |  |         |
//                                                |        |  |        |  |--------/|       |--------|  |        |  |         |
                                                   KC_LCTRL,   KC_LALT,    KC_LWIN, /*     */TSPT,       KC_LWIN,    KC_SPACE
//                                                | LCTRL  |  | LALT   |  | LWIN    |       |        |  | LWIN   |  | SPACE   |
//                                                |--------|  |--------|  |---------|       |--------|  |--------|  |---------|
  ),
  [1] = LAYOUT_ergodox_pretty( // Layer 1: GAMING MODE game mode
//,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.        ,-------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.
   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TG(1),
//| ESCAPE |  | Abv.Q  |  | Abv.W  |  | Abv.E  |  | Abv.R  |  | Abv.T  |  | Abv.   |       | Ab.PgUp|  | Abv.Y  |  | Abv.U  |  | Abv.I  |  | Abv.O  |  | Abv.P  |  | Abv.Qt |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(7),      TSPT,       TSPT,       TSPT,       TSPT,        TSPT,       TSPT,  /*     */KC_PGUP,    TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| LP2    |  | Q      |  | W      |  | E      |  | R      |  | T      |  | jeff   |       |   PgUp |  | Y      |  | U      |  | I      |  | O      |  | P      |  | '''''  |
//| (FKEYS)|  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_LCTRL,   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,      /*-------|       |_______*/   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       KC_RSHIFT,
//| Fkey.bt|  | A      |  | S      |  | D      |  | F      |  | G      |  |        |       |        |  | H      |  | J      |  | K      |  | L      |  | ;;;;;  |  | RSHFT  |
//|        |  |        |  |        |  |        |  |        |  |        |  |  BRUH DO WE    |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |  REALLY USE    |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_LSHIFT,  TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       MO(11),  /*     */KC_PGDN,    TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| LSHFT  |  | Z      |  | X      |  | C      |  | V      |  | B      |  |  Nums  |       |   PgDn |  | N      |  | M      |  |,,,,,   |  | .....  |  | /////  |  | LCTRL '
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |________|  |--------|  |--------|  |--------|  |--------|  |--------|
   TSPT,       TSPT,       MO(6),      MO(5),      MO(3),                                                           MO(4),      KC_LCTRL,   TSPT,       TSPT,       TSPT,
//|        |  |        |  | LT3    |  | LT2[B] |  | LT1    |                                                       | RT1(nums  | LCTRL  |  | f16    |  |        |  |        |
//|        |  |        |  |(macros)|  |(harpoon|  | (syms) |                                                       | (&LT2M))  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|                                                       |--------|  |--------|  |------- |  |--------|  |--------|
//                                                            ,--------.  ,---------.       ,--------.  ,--------.
                                                               TSPT,       TSPT,   /*      */TSPT,       TSPT,
//                                                            | UNUSED |  | UNUSED  |       | UNUSED |  | UNUSED |
//                                                ,--------.  |--------|  |---------|       |--------|  |--------|  ,---------.
/*                                                |        |  |        | */TSPT,   /*      */TSPT,  //  |        |  |         |
//                                                | =space |  | =NUMS  |  | UNUSED  |       | UNUSED |  | UNUSED |  |         |
//                                                |        |  |GAME NUMS  |--------/|       |--------|  |        |  |        *|
                                                   KC_SPACE,   MO(11),     KC_LALT, /*     */TSPT,       KC_LWIN,    KC_SPACE//
//                                                | LCTRL  |  | LALT   |  | LWIN    |       |        |  | LWIN   |  | SPACE   |
//                                                |--------|  |--------|  |---------|       |--------|  |--------|  |---------|
  ),
  [2] = LAYOUT_ergodox_pretty( // Layer 2: LP1 (CAPS)
//,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.        ,-------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.
   TG(1),       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       QK_BOOT,
//| ESCAPE |  | Abv.Q  |  | Abv.W  |  | Abv.E  |  | Abv.R  |  | Abv.T  |  | Abv.   |       | Ab.PgUp|  | Abv.Y  |  | Abv.U  |  | Abv.I  |  | Abv.O  |  | Abv.P  |  | Abv.Qt |
//| (GAME MODE)        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |(RESET KB!!!!!!!!)
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(7),      TSPT,       TSPT,       ST_MACRO_2, TSPT,       ST_MACRO_3,  TSPT,  /*     */KC_PGUP,    TSPT,       TSPT,       KC_LPRN,    KC_RPRN,    ST_MACRO_1, KC_DQUO,
//| LP2    |  | Q      |  | W         | E python  | R      |  | T      |  | jeff   |       |   PgUp |  | Y      |  | U      |  | I      |  | O      |  | P      |  | '''''
//| (FKEYS)|  |        |  |           (enumerate<NOT SURE IF I HIT     |  |        |       |        |  |        |  |        |  | (((((  |  | )))))  |  (add print) |  """   (DOUBLE QUOTES)
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   TSPT,       ST_MACRO_0, KC_BSPC,   KC_DELETE,TSPT/*ST_MACRO_1*/, KC_HOME,/*-----|       |_______*/   KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   KC_END,     KC_RSHIFT,
//| LP1    |  | A python! | S=BACK |  | D=DEL  |  | F BAD***  | G      |  |        |       |        |  | H      |  | J      |  | K      |  | L      |  | ;;;;;  |  | RSHFT  |
//| (CAPS) |  | (add arg) | SPACE  |  |        |  |=2ez2hit!!!| =HOME  |  |        |       |        |  |=Left<< |  |=DnVVVV |  |=Up^^^^ |  |=Rgt>>> |  | End/DownRight      |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |----(grapple)-------|
   KC_LSHIFT,  TSPT,       ST_MACRO_4, ST_MACRO_5, ST_MACRO_6, ST_MACRO_7, TSPT,   /*     */KC_PGDN,    TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| LSHFT  |  | Z      |  | X      |  | C      |  | V      |  | B(alt+G)  |        |       |   PgDn |  | N      |  | M      |  |,,,,,   |  | .....  |  | /////  |  | LCTRL  |
//|        |  |        |  |        |  |        |  |        |  |(grapple)  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |________|  |--------|  |--------|  |--------|  |--------|  |--------|
   TSPT,       TSPT,       MO(6),      MO(5),      MO(3),                                                           MO(4),      KC_LCTRL,   TSPT,       TSPT,       TSPT,
//| GAMING |  |        |  | LT3    |  | LT2[B] |  | LT1    |     ^^^^^____ doesn't need to be a macro,             | RT1(nums  | LCTRL  |  | f16    |  |        |  |        |
//|        |  |        |  |(macros)|  |(harpoon|  | (syms) |                                                       | (&LT2M))  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|                                                       |--------|  |--------|  |------- |  |--------|  |--------|
//                                                            .--------.  ,---------.       ,--------.  ,--------.
                                                               TSPT,       TSPT,   /*      */TSPT,       TSPT,
//                                                            | UNUSED |  | UNUSED  |       | UNUSED |  | UNUSED |                 NOTES about CAPS:
//                                                ,--------.  |--------|  |---------|       |--------|  |--------|  ,---------.      - caps+f right next to DEL and HOME is way too easy to hit to use it for python fstring...
/*                                                |        |  |        | */TSPT,   /*      */TSPT,  //  |        |  |         |      - i think its a useful slot but it should be reserved for a symbol or something...
//                                                | [space]|  | [nums] |  | UNUSED  |       | UNUSED |  | UNUSED |  |         |
//                                                |        |  |        |  |--------/|       |--------|  |        |  |         |
                                                   KC_LCTRL,   KC_LALT,    KC_LWIN, /*     */TSPT,       KC_LWIN,    KC_SPACE//
//                                                | LCTRL  |  | LALT   |  | LWIN    |       |        |  | LWIN   |  | SPACE   |
//                                                |        |  |        |  |         |       |        |  |        |  |         |
//                                                |--------|  |--------|  |---------|       |--------|  |--------|  |---------|


    // TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, QK_BOOT,
    // TSPT, TSPT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     TSPT,                                 TSPT, TSPT, TSPT, KC_LPRN,        KC_RPRN,        TSPT, KC_DQUO,
    // TSPT, TSPT, KC_BSPC,        KC_DELETE,      LCTL(KC_BSPC),  KC_HOME,                                                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_END,         TSPT,
    // TSPT, TSPT, ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     TSPT,                                 TSPT, KC_HOME,        TSPT, TSPT, KC_HOME,        TSPT, TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT,                                                                                                 MO(4),          TSPT, TSPT, TSPT, TSPT,
    //                                                                                                 TSPT, TSPT, TSPT, TSPT,
    //                                                                                                                 TSPT, TSPT,
    //                                                                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT
  ),
  [3] = LAYOUT_ergodox_pretty( // LAYER 3: LT1_syms
//,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.        ,-------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.
   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| ESCAPE |  | Abv.Q  |  | Abv.W  |  | Abv.E  |  | Abv.R  |  | Abv.T  |  | Abv.   |       | Ab.PgUp|  | Abv.Y  |  | Abv.U  |  | Abv.I  |  | Abv.O  |  | Abv.P  |  | Abv.Qt |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(7),      ST_MACRO_8, TSPT,       TSPT,       TSPT,       TSPT,       TSPT,  /*      */TSPT,       TSPT,       KC_UNDS,    KC_LBRC,    KC_RBRC,    KC_PERC,    KC_GRAVE,
//| LP2    |  | Q      |  | W      |  | E      |  | R      |  | T      |  | jeff   |       |   PgUp |  | Y      |  | U (___)|  | I      |  | O      |  | P      |  | '      |
//| (FKEYS)| (Restart nvim)        |  |        |  |        |  |        |  |        |       |        |  |        |  |(UNDERSC)  |([[[[[) |  | (]]]]])|  | (%%%%) |  |``````  |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |(backtick)
   MO(2),    ST_MACRO_9,LCTL(KC_SPACE),LSFT(KC_TAB),KC_TAB,    TSPT,      /*-------|       |_______*/   KC_NO,      KC_MINUS,   KC_PLUS,    KC_EQUAL,   KC_NO,      KC_RSHIFT,
//| LP1    |  | A      |  | S      |  | D      |  | F      |  | G      |  |        |       |        |  | H      |  | J      |  | K      |  | L      |  | ;      |  | RSHFT  |
//| (CAPS) |  (Save all)  (C-Space)|  | (S-TAB)|  |(TAB)   |  |        |  |        |       |        |  |(DISABLED) | ------ |  | (+++++)|  | ====== |  |(DISABLED) |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_LSHIFT,  ST_MACRO_1, TSPT,       KC_CAPS,    TSPT,     ST_MACRO_10,  TSPT,   /*     */TSPT,       TSPT,       KC_AMPR,    KC_LCBR,    KC_RCBR,    TSPT,       TSPT,
//| LSHFT  |  | Z      |  | X      |  | C      |  | V      |  | B      |  |        |       |   PgDn |  | N      |  | M      |  |,       |  | .....  |  | /////  |  | LCTRL  |
//|        |  |        |  |        |  |(CAPS LOCK)|        |  |(MACRO 10) |        |       |        |  |        |  | &&&&&& |  |({{{{{) |  |(}}}}} )|  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  (bndx)---|  |--------|       |--------|  |________|  |--------|  |--------|  |--------|  |--------|  |--------|
   TSPT,       TSPT,       MO(6),      MO(5),      MO(3),                                                           MO(4),      KC_LCTRL,   TSPT,       TSPT,       TSPT,
//| GAMING |  |        |  | LT3    |  | LT2[B] |  | LT1    |                                                       | RT1(nums  | LCTRL  |  | f16    |  |        |  |        |
//| TG(1)  |  |        |  |(macros)|  |(harpoon|  | (syms) |                                                       | (&LT2M))  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|                                                       |--------|  |--------|  |------- |  |--------|  |--------|
//                                                            ,--------.  ,---------.       ,--------.  ,--------.
                                                               TSPT,       TSPT,   /*      */TSPT,       TSPT,
//                                                            | UNUSED |  | UNUSED  |       | UNUSED |  | UNUSED |
//                                                ,--------.  |--------|  |---------|       |--------|  |--------|  ,---------.
/*                                                |        |  |        | */TSPT,   /*      */TSPT,  //  |        |  |         |
//                                                |        |  |        |  | UNUSED  |       | UNUSED |  | UNUSED |  |         |
//                                                |        |  |        |  |--------/|       |--------|  |        |  |         |
                                                   KC_LCTRL,   KC_LALT,    KC_LWIN, /*     */TSPT,       KC_LWIN,    KC_SPACE
//                                                | LCTRL  |  | LALT   |  | LWIN    |       |        |  | LWIN   |  | SPACE   |
//                                                |--------|  |--------|  |---------|       |--------|  |--------|  |---------|
    // TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, ST_MACRO_8,     TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, KC_UNDS,        KC_LBRC,        KC_RBRC,        KC_PERC,        KC_GRAVE,
    // TSPT, ST_MACRO_9,     LCTL(KC_SPACE), LSFT(KC_TAB),   KC_TAB,         TSPT,                                                                 KC_NO,          KC_MINUS,       KC_PLUS,        KC_EQUAL,       KC_NO,          KC_RIGHT_SHIFT,
    // TSPT, TSPT, TSPT, KC_CAPS,        TSPT, ST_MACRO_10,    TSPT,                                 TSPT, TSPT, KC_AMPR,        KC_LCBR,        KC_RCBR,        TSPT, TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT,                                                                                                 TSPT, TSPT, TSPT, TSPT, TSPT,
    //                                                                                                 TSPT, TSPT, TSPT, TSPT,
    //                                                                                                                 TSPT, TSPT,
    //                                                                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT
  ),
  [4] = LAYOUT_ergodox_pretty( // LAYER 4: nums
                               //
                               //
                               //
                               //
                               // TODO: I wanna have - + / = on the same layer as numbers for obvious reasons
                               // (well, slash already IS, just do )
//,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.        ,-------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.
   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,      TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| ESCAPE |  | Abv.Q  |  | Abv.W  |  | Abv.E  |  | Abv.R  |  | Abv.T  |  | Abv.   |       | Ab.PgUp|  | Abv.Y  |  | Abv.U  |  | Abv.I  |  | Abv.O  |  | Abv.P  |  | Abv.Qt |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(7),      TSPT,       TSPT,       TSPT,       TSPT,        TSPT,       TSPT,  /*     */TSPT,     ST_MACRO_12, KC_7,       KC_8,       KC_9,       ST_MACRO_13, ST_MACRO_14,
//| LP2    |  | Q      |  | W      |  | E      |  | R      |  | T      |  | jeff   |       |   PgUp |  | Y      |  | U      |  | I      |  | O      |  | P      |  | '''''  |
//| (FKEYS)|  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |(77777) |  | (88888)|  |(999999)|  (ReplacePut) (Force Put)
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(2),      KC_1,       KC_2,       KC_3,       KC_4,       KC_5,      /*-------|       |_______*/   KC_6,       KC_MINUS,  KC_PLUS,   KC_EQUAL,    KC_0,       KC_RSHIFT,
//| LP1    |  | A      |  | S      |  | D      |  | F      |  | G      |  |        |       |        |  | H      |  | J      |  | K      |  | L      |  | ;;;;;  |  | RSHFT  |
//| (CAPS) |  | (1111) |  | (22222)|  | (33333)|  |(44444) |  |(55555) |  |        |       |        |  |        |  DSIABLING DEEZNUTS FOR NOW WE HAVE 789 789   |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_LSHIFT,  TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,      TSPT,       MO(9),       TSPT,       KC_DOT,     KC_SLASH,  TSPT,
//| LSHFT  |  | Z      |  | X      |  | C      |  | V      |  | B      |  |        |       |   PgDn |  | N      |  | M      |  |,,,,,   |  | .....  |  | /////  |  | LCTRL  |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |(TERMINAL)|         |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |________|  |--------|  |--------|  |--------|  |--------|  |--------|
   TSPT,       TSPT,       MO(6),      MO(5),      MO(3),                                                           MO(4),      KC_LCTRL,   TSPT,       TSPT,       TSPT,
//| GAMING |  |        |  | LT3    |  | LT2[B] |  | LT1    |                                                       | RT1(nums  | LCTRL  |  | f16    |  |        |  |        |
//| TG(1)  |  |        |  |(macros)|  |(harpoon|  | (syms) |                                                       | (&LT2M))  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|                                                       |--------|  |--------|  |------- |  |--------|  |--------|
//                                                            ,--------.  ,---------.       ,--------.  ,--------.
                                                               TSPT,       TSPT,   /*      */TSPT,       TSPT,
//                                                            | UNUSED |  | UNUSED  |       | UNUSED |  | UNUSED |
//                                                ,--------.  |--------|  |---------|       |--------|  |--------|  ,---------.
/*                                                |        |  |        | */TSPT,   /*      */TSPT,  //  |        |  |         |
//                                                |        |  |        |  | UNUSED  |       | UNUSED |  | UNUSED |  |         |
//                                                |        |  |        |  |--------/|       |--------|  |        |  |         |
                                                   KC_LCTRL,   KC_LALT,    KC_LWIN, /*     */TSPT,       KC_LWIN,    KC_SPACE
//                                                | LCTRL  |  | LALT   |  | LWIN    |       |        |  | LWIN   |  | SPACE   |
//                                                |--------|  |--------|  |---------|       |--------|  |--------|  |---------|
    // TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, ST_MACRO_12,    KC_7,           KC_8,           KC_9,           ST_MACRO_13,    ST_MACRO_14,
    // TSPT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT, ST_MACRO_11,    TSPT,                                 TSPT, TSPT, MO(9),          TSPT, KC_DOT,         KC_SLASH,       TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT,                                                                                                 TSPT, TSPT, TSPT, TSPT, TSPT,
    //                                                                                                 TSPT, TSPT, TSPT, TSPT,
    //                                                                                                                 TSPT, TSPT,
    //                                                                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT
  ),
  [5] = LAYOUT_ergodox_pretty( // Layer 5: LT2: harpoon, TST, Ctrl Tab, etc.
//,--------.  ,--------.  ,-------------.  ,-----------.  ,--------.  ,--------.  ,--------.        ,-------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.
   TSPT,       TSPT,       TSPT,            TSPT,          TSPT,       TSPT,       TSPT,   /*     */ TSPT,      TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| ESCAPE |  | Abv.Q  |  | Abv.W       |  | Abv.E     |  | Abv.R  |  | Abv.T  |  | Abv.   |       | Ab.PgUp|  | Abv.Y  |  | Abv.U  |  | Abv.I  |  | Abv.O  |  | Abv.P  |  | Abv.Qt |
//|        |  |        |  |             |  |           |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |-------------|  |-----------|  |--------|  |--------|  |--------|       |--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_NO,    LALT(KC_9),    sALT(KC_W),     sALT(KC_E),   sALT(KC_R), TSPT,       TSPT,  /*      */ TSPT,       TSPT,       TSPT,      sALT(KC_7), sALT(KC_8),  TSPT,       TSPT,
//| LP2    |  | Q      |  | W           |  | E         |  | R      |  | T      |  | jeff   |       |   PgUp |  | Y      |  | U      |  | I      |  | O      |  | P      |  | '''''  |
//| (FKEYS)|  |        |  |             |  |           |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |-------------|  |-----------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_NO,    sALT(KC_A),  sALT(KC_S), LCTL(LSFT(KC_TAB)), LCTL(KC_TAB),sALT(KC_G),/*-------|       |_______*/   LALT(KC_1),LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5), KC_RSHIFT,
//| LP1    |  | A      |  | S           |  | D         |  | F      |  | G      |  |        |       |        |  | H      |  | J      |  | K      |  | L      |  | ;;;;;  |  | RSHFT  |
//| (CAPS) |  |        |  |             |  |           |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |-------------|  |-----------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_LSHIFT, sALT(KC_Z), sALT(KC_X),      sALT(KC_C),    sALT(KC_V),  TSPT,       TSPT,   /*     */TSPT,      sALT(KC_N), sALT(KC_M),  TSPT,       TSPT,       TSPT,       TSPT,
//| LSHFT  |  | Z      |  | X           |  | C         |  | V      |  | B      |  |        |       |   PgDn |  | N      |  | M      |  |,,,,,   |  | .....  |  | /////  |  | LCTRL  |
//|        |  |        |  |             |  |           |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |-------------|  |-----------|  |--------|  |--------|  |--------|       |--------|  |________|  |--------|  |--------|  |--------|  |--------|  |--------|
   TSPT,       TSPT,       MO(6),           MO(5),         MO(3),                                                           MO(10),      KC_LCTRL,   TSPT,       TSPT,       TSPT,
//| GAMING |  |        |  | LT3         |  | LT2[B]    |  | LT1    |                                                       | nums      | LCTRL  |  | f16    |  |        |  |        |
//| TG(1)  |  |        |  |(macros)     |  |(harpoon)  |  | (syms) |                                                       | (&LT2M))  |        |  |        |  |        |  |        |
//|--------|  |--------|  |-------------|  |-------   -|  |--------|                                                       |--------|  |--------|  |------- |  |--------|  |--------|
//                                                                   ,--------.  ,---------.       ,--------.  ,--------.
                                                                      TSPT,       TSPT,   /*      */TSPT,       TSPT,
//                                                                   | UNUSED |  | UNUSED  |       | UNUSED |  | UNUSED |
//                                                       ,--------.  |--------|  |---------|       |--------|  |--------|  ,---------.
/*                                                       |        |  |        | */TSPT,   /*      */TSPT,  //  |        |  |         |
//                                                       |        |  |        |  | UNUSED  |       | UNUSED |  | UNUSED |  |         |
//                                                       |        |  |        |  |--------/|       |--------|  |        |  |         |
                                                          KC_LCTRL,   KC_LALT,    KC_LWIN, /*     */TSPT,       KC_LWIN,    KC_SPACE
//                                                       | LCTRL  |  | LALT   |  | LWIN    |       |        |  | LWIN   |  | SPACE   |
//                                                       |--------|  |--------|  |---------|       |--------|  |--------|  |---------|
    // TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, LALT(KC_9),     LALT(LSFT(KC_W)),LALT(LSFT(KC_E)),LALT(LSFT(KC_R)),TSPT, TSPT,                                 TSPT, TSPT, TSPT, LALT(KC_7),     LALT(KC_8),     TSPT, TSPT,
    // KC_LEFT_SHIFT,  LALT(LSFT(KC_A)),LALT(LSFT(KC_S)),LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   LALT(LSFT(KC_G)),                                                                LALT(KC_1),     LALT(KC_2),     LALT(KC_3),     LALT(KC_4),     LALT(KC_5),     TSPT,
    // TSPT, LALT(LSFT(KC_Z)),LALT(LSFT(KC_X)),LALT(LSFT(KC_C)),LALT(LSFT(KC_V)),TSPT, TSPT,                                 TSPT, LALT(LSFT(KC_N)),LALT(LSFT(KC_M)),TSPT, TSPT, TSPT, TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT,                                                                                                 MO(10),         TSPT, TSPT, TSPT, TSPT,
    //                                                                                                 TSPT, TSPT, TSPT, TSPT,
    //                                                                                                                 TSPT, TSPT,
    //                                                                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT
  ),
  [6] = LAYOUT_ergodox_pretty( // LT3: Macros
//,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.        ,-------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.
   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| ESCAPE |  | Abv.Q  |  | Abv.W  |  | Abv.E  |  | Abv.R  |  | Abv.T  |  | Abv.   |       | Ab.PgUp|  | Abv.Y  |  | Abv.U  |  | Abv.I  |  | Abv.O  |  | Abv.P  |  | Abv.Qt |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(7),      TSPT,     ST_MACRO_15,ST_MACRO_16,ST_MACRO_17,  TSPT,       TSPT,  /*      */TSPT,       TSPT,       TSPT,      ST_MACRO_25, TSPT,     ST_MACRO_26, ST_MACRO_27,
//| LP2    |  | Q      |  | W      |  | E      |  | R      |  | T      |  | jeff   |       |   PgUp |  | Y      |  | U      |  | I      |  | O      |  | P      |  | '''''  |
//| (FKEYS)|  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(2),      ST_MACRO_18,ST_MACRO_19, TSPT,    ST_MACRO_20,  ST_MACRO_21,/*-------|      |_______*/   TSPT,       TSPT,       TSPT,     ST_MACRO_28, TSPT,       KC_RSHIFT,
//| LP1    |  | A      |  | S      |  | D      |  | F      |  | G      |  |        |       |        |  | H      |  | J      |  | K      |  | L      |  | ;;;;;  |  | RSHFT  |
//| (CAPS) |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_LSHIFT,  ST_MACRO_22,ST_MACRO_23,ST_MACRO_24,TSPT,       TSPT,       TSPT,   /*     */TSPT,      ST_MACRO_29,TSPT,       TSPT,       TSPT,       ST_MACRO_30,TSPT,
//| LSHFT  |  | Z      |  | X      |  | C      |  | V      |  | B      |  |        |       |   PgDn |  | N      |  | M      |  |,,,,,   |  | .....  |  | /////  |  | LCTRL  |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |________|  |--------|  |--------|  |--------|  |--------|  |--------|
   TSPT,       TSPT,       MO(6),      MO(5),      MO(3),                                                           MO(4),      KC_LCTRL,   TSPT,       TSPT,       TSPT,
//| GAMING |  |        |  | LT3    |  | LT2[B] |  | LT1    |                                                       | RT1(nums  | LCTRL  |  | f16    |  |        |  |        |
//| TG(1)  |  |        |  |(macros)|  |(harpoon|  | (syms) |                                                       | (&LT2M))  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|                                                       |--------|  |--------|  |------- |  |--------|  |--------|
//                                                            ,--------.  ,---------.       ,--------.  ,--------.
                                                               TSPT,       TSPT,   /*      */TSPT,       TSPT,
//                                                            | UNUSED |  | UNUSED  |       | UNUSED |  | UNUSED |
//                                                ,--------.  |--------|  |---------|       |--------|  |--------|  ,---------.
/*                                                |        |  |        | */TSPT,   /*      */TSPT,  //  |        |  |         |
//                                                |        |  |        |  | UNUSED  |       | UNUSED |  | UNUSED |  |         |
//                                                |        |  |        |  |--------/|       |--------|  |        |  |         |
                                                   KC_LCTRL,   KC_LALT,    KC_LWIN, /*     */TSPT,       KC_LWIN,    KC_SPACE
//                                                | LCTRL  |  | LALT   |  | LWIN    |       |        |  | LWIN   |  | SPACE   |
//                                                |--------|  |--------|  |---------|       |--------|  |--------|  |---------|
    // TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, TSPT, ST_MACRO_15,    ST_MACRO_16,    ST_MACRO_17,    TSPT, TSPT,                                 TSPT, TSPT, TSPT, ST_MACRO_25,    TSPT, ST_MACRO_26,    ST_MACRO_27,
    // TSPT, ST_MACRO_18,    ST_MACRO_19,    TSPT, ST_MACRO_20,    ST_MACRO_21,                                                                    TSPT, TSPT, TSPT, ST_MACRO_28,    TSPT, TSPT,
    // TSPT, ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,    TSPT, TSPT, TSPT,                                 TSPT, ST_MACRO_29,    TSPT, TSPT, TSPT, ST_MACRO_30,    TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT,                                                                                                 TSPT, TSPT, TSPT, TSPT, TSPT,
    //                                                                                                 TSPT, TSPT, TSPT, TSPT,
    //                                                                                                                 TSPT, TSPT,
    //                                                                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT
  ),
  [7] = LAYOUT_ergodox_pretty( // LAYER 7: LP2, FKEYS
//,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.        ,-------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.
   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */ TSPT,      TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| ESCAPE |  | Abv.Q  |  | Abv.W  |  | Abv.E  |  | Abv.R  |  | Abv.T  |  | Abv.   |       | Ab.PgUp|  | Abv.Y  |  | Abv.U  |  | Abv.I  |  | Abv.O  |  | Abv.P  |  | Abv.Qt |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(7),      TSPT,       MO(8),       TSPT,       TSPT,       TSPT,       TSPT,   /*     */ TSPT,     KC_F7,      KC_F8,      KC_F9,      TSPT,       TSPT,       TSPT,
//| LP2    |  | Q      |  | W      |  | E      |  | R      |  | T      |  | jeff   |       |   PgUp |  | Y      |  | U      |  | I      |  | O      |  | P      |  | '''''  |
//| (FKEYS)|  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(2),      TSPT,       TSPT,       TSPT,       KC_TAB,      KC_F5,    /*-------|       |_______*/   TSPT,       KC_F4,      KC_F5,      KC_F6,      KC_F10,     KC_RSHIFT,
//| LP1    |  | A      |  | S      |  | D      |  | F      |  | G      |  |        |       |        |  | H      |  | J      |  | K      |  | L      |  | ;;;;;  |  | RSHFT  |
//| (CAPS) |  |        |  |        |  |        |  |    \   |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |----\---|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_LSHIFT,  TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */ TSPT,       TSPT,       KC_F1,      KC_F2,      KC_F3,      TSPT,       TSPT,
//| LSHFT  |  | Z      |  | X      |  | C      |  | V   \  |  | B      |  |        |       |   PgDn |  | N      |  | M      |  |,,,,,   |  | .....  |  | /////  |  | LCTRL  |
//|        |  |        |  |        |  |        |  |      \ |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |-------\|  |--------|  |--------|       |--------|  |________|  |--------|  |--------|  |--------|  |--------|  |--------|
   TSPT,       TSPT,       MO(6),      MO(5),      MO(3),                                                           MO(4),      KC_LCTRL,   TSPT,       TSPT,       TSPT,
//| GAMING |  |        |  | LT3    |  | LT2[B] |  | LT1    |\____TAB FOR ALT+TAB                                   | RT1(nums  | LCTRL  |  | f16    |  |        |  |        |
//| TG(1)  |  |        |  |(macros)|  |(harpoon|  | (syms) |                                                       | (&LT2M))  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|                                                       |--------|  |--------|  |------- |  |--------|  |--------|
//                                                            ,--------.  ,---------.       ,--------.  ,--------.
                                                               TSPT,       TSPT,   /*      */TSPT,       TSPT,
//                                                            | UNUSED |  | UNUSED  |       | UNUSED |  | UNUSED |
//                                                ,--------.  |--------|  |---------|       |--------|  |--------|  ,---------.
/*                                                |        |  |        | */TSPT,   /*      */TSPT,  //  |        |  |         |
//                                                |        |  |        |  | UNUSED  |       | UNUSED |  | UNUSED |  |         |
//                                                |        |  |        |  |--------/|       |--------|  |        |  |         |
                                                   KC_LCTRL,   KC_LALT,    KC_LWIN, /*     */TSPT,       KC_LWIN,    KC_SPACE
//                                                | LCTRL  |  | LALT   |  | LWIN    |       |        |  | LWIN   |  | SPACE   |
//                                                |--------|  |--------|  |---------|       |--------|  |--------|  |---------|
    // TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, TSPT, MO(8),          TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, KC_F7,          KC_F8,          KC_F9,          TSPT, TSPT,
    // TSPT, TSPT, TSPT, TSPT, KC_TAB,         TSPT,                                                                 TSPT, KC_F4,          KC_F5,          KC_F6,          KC_F10,         TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, KC_F1,          KC_F2,          KC_F3,          TSPT, TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT,                                                                                                 TSPT, TSPT, TSPT, TSPT, TSPT,
    //                                                                                                 TSPT, TSPT, TSPT, TSPT,
    //                                                                                                                 TSPT, TSPT,
    //                                                                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT
  ),
  [8] = LAYOUT_ergodox_pretty(
    TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                             TSPT, KC_F14,TSPT, TSPT, TSPT, TSPT,
    TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, KC_F11, KC_F12, KC_F13, TSPT, TSPT,
    TSPT, TSPT, TSPT, TSPT, TSPT,                                                         TSPT, TSPT, TSPT, TSPT, TSPT,
                                                TSPT, TSPT, TSPT, TSPT,
                                                      TSPT, TSPT,
                                             TSPT, TSPT, TSPT, TSPT, TSPT, TSPT
  ),
  [9] = LAYOUT_ergodox_pretty( // Layer 9: RT1M - Wezterm stuff
//,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.        ,-------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.
   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,      TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| ESCAPE |  | Abv.Q  |  | Abv.W  |  | Abv.E  |  | Abv.R  |  | Abv.T  |  | Abv.   |       | Ab.PgUp|  | Abv.Y  |  | Abv.U  |  | Abv.I  |  | Abv.O  |  | Abv.P  |  | Abv.Qt |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(7),      TSPT,       TSPT,       TSPT,       TSPT,      ST_MACRO_31, TSPT,  /*     */TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| LP2    |  | Q      |  | W      |  | E      |  | R      |  | T      |  | jeff   |       |   PgUp |  | Y      |  | U      |  | I      |  | O      |  | P      |  | '''''  |
//| (FKEYS)|  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(2),      TSPT,       TSPT,       ST_MACRO_32,ST_MACRO_33,TSPT,      /*-------|       |_______*/   TSPT,       ST_MACRO_35,ST_MACRO_36,TSPT,       TSPT,       KC_RSHIFT,
//| LP1    |  | A      |  | S      |  | D      |  | F      |  | G      |  |        |       |        |  | H      |  | J      |  | K      |  | L      |  | ;;;;;  |  | RSHFT  |
//| (CAPS) |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |font size -/ +      |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_LSHIFT,  TSPT,       TSPT,       TSPT,       ST_MACRO_34,TSPT,       TSPT,   /*     */TSPT,      TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| LSHFT  |  | Z      |  | X      |  | C      |  | V      |  | B      |  |        |       |   PgDn |  | N      |  | M      |  |,,,,,   |  | .....  |  | /////  |  | LCTRL  |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |________|  |--------|  |--------|  |--------|  |--------|  |--------|
   TSPT,       TSPT,       MO(6),      MO(5),      MO(3),                                                           MO(4),      KC_LCTRL,   TSPT,       TSPT,       TSPT,
//| GAMING |  |        |  | LT3    |  | LT2[B] |  | LT1    |                                                       | RT1(nums  | LCTRL  |  | f16    |  |        |  |        |
//| TG(1)  |  |        |  |(macros)|  |(harpoon|  | (syms) |                                                       | (&LT2M))  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|                                                       |--------|  |--------|  |------- |  |--------|  |--------|
//                                                            ,--------.  ,---------.       ,--------.  ,--------.
                                                               TSPT,       TSPT,   /*      */TSPT,       TSPT,
//                                                            | UNUSED |  | UNUSED  |       | UNUSED |  | UNUSED |
//                                                ,--------.  |--------|  |---------|       |--------|  |--------|  ,---------.
/*                                                |        |  |        | */TSPT,   /*      */TSPT,  //  |        |  |         |
//                                                |        |  |        |  | UNUSED  |       | UNUSED |  | UNUSED |  |         |
//                                                |        |  |        |  |--------/|       |--------|  |        |  |         |
                                                   KC_LCTRL,   KC_LALT,    KC_LWIN, /*     */TSPT,       KC_LWIN,    KC_SPACE
//                                                | LCTRL  |  | LALT   |  | LWIN    |       |        |  | LWIN   |  | SPACE   |
//                                                |--------|  |--------|  |---------|       |--------|  |--------|  |---------|
    // TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT, ST_MACRO_31,    TSPT,                           TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, TSPT, TSPT, ST_MACRO_32,  ST_MACRO_33,  TSPT,                       TSPT, ST_MACRO_35,  ST_MACRO_36,    TSPT, TSPT, TSPT,
    // TSPT, TSPT, TSPT, ST_MACRO_34, TSPT, TSPT, TSPT,                                   TSPT, LGUI(KC_T), TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT,                                                                 TSPT, TSPT, TSPT, TSPT, TSPT,
                                                   //      TSPT, TSPT, TSPT, TSPT,
                                                   //           TSPT, TSPT,
                                                   // TSPT, TSPT, TSPT, TSPT, TSPT, TSPT
  ),
  [10] = LAYOUT_ergodox_pretty( // Layer 10: linkedin shit
//,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.        ,-------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.
   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,      TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| ESCAPE |  | Abv.Q  |  | Abv.W  |  | Abv.E  |  | Abv.R  |  | Abv.T  |  | Abv.   |       | Ab.PgUp|  | Abv.Y  |  | Abv.U  |  | Abv.I  |  | Abv.O  |  | Abv.P  |  | Abv.Qt |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(7),      TSPT,       TSPT,       TSPT,       TSPT,       ST_MACRO_37,TSPT,  /*     */TSPT,       TSPT,       ST_MACRO_44,TSPT,       TSPT,       ST_MACRO_45,TSPT,
//| LP2    |  | Q      |  | W      |  | E      |  | R      |  | T      |  | jeff   |       |   PgUp |  | Y      |  | U      |  | I      |  | O      |  | P      |  | '''''  |
//| (FKEYS)|  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   MO(2),      ST_MACRO_38,ST_MACRO_39,ST_MACRO_40,ST_MACRO_41,TSPT,      /*-------|       |_______*/   ST_MACRO_46,ST_MACRO_47,ST_MACRO_48,ST_MACRO_49,TSPT,       KC_RSHIFT,
//| LP1    |  | A      |  | S      |  | D      |  | F      |  | G      |  |        |       |        |  | H      |  | J      |  | K      |  | L      |  | ;;;;;  |  | RSHFT  |
//| (CAPS) |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_LSHIFT,  TSPT,       TSPT,       ST_MACRO_42,TSPT,       ST_MACRO_43,TSPT,   /*     */TSPT,      TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| LSHFT  |  | Z      |  | X      |  | C      |  | V      |  | B      |  |        |       |   PgDn |  | N      |  | M      |  |,,,,,   |  | .....  |  | /////  |  | LCTRL  |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |________|  |--------|  |--------|  |--------|  |--------|  |--------|
   TSPT,       TSPT,       MO(6),      MO(5),      MO(3),                                                           MO(4),      KC_LCTRL,   TSPT,       TSPT,       TSPT,
//| GAMING |  |        |  | LT3    |  | LT2[B] |  | LT1    |                                                       | RT1(nums  | LCTRL  |  | f16    |  |        |  |        |
//| TG(1)  |  |        |  |(macros)|  |(harpoon|  | (syms) |                                                       | (&LT2M))  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|                                                       |--------|  |--------|  |------- |  |--------|  |--------|
//                                                            ,--------.  ,---------.       ,--------.  ,--------.
                                                               TSPT,       TSPT,   /*      */TSPT,       TSPT,
//                                                            | UNUSED |  | UNUSED  |       | UNUSED |  | UNUSED |
//                                                ,--------.  |--------|  |---------|       |--------|  |--------|  ,---------.
/*                                                |        |  |        | */TSPT,   /*      */TSPT,  //  |        |  |         |
//                                                |        |  |        |  | UNUSED  |       | UNUSED |  | UNUSED |  |         |
//                                                |        |  |        |  |--------/|       |--------|  |        |  |         |
                                                   KC_LCTRL,   KC_LALT,    KC_LWIN, /*     */TSPT,       KC_LWIN,    KC_SPACE
//                                                | LCTRL  |  | LALT   |  | LWIN    |       |        |  | LWIN   |  | SPACE   |
//                                                |--------|  |--------|  |---------|       |--------|  |--------|  |---------|
    // TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                                  TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT, ST_MACRO_37,    TSPT,                                      TSPT, TSPT, ST_MACRO_44,    TSPT, TSPT, ST_MACRO_45,    TSPT,
    // TSPT, ST_MACRO_38,    ST_MACRO_39, ST_MACRO_40, ST_MACRO_41, TSPT,                  ST_MACRO_46,    ST_MACRO_47,    ST_MACRO_48,    ST_MACRO_49,    TSPT, TSPT,
    // TSPT, TSPT, TSPT, ST_MACRO_42, TSPT, ST_MACRO_43,  TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT,                              TSPT, TSPT, TSPT, TSPT, TSPT,
    //                                                           TSPT, TSPT, TSPT, TSPT,
    //                                                                TSPT, TSPT,
    //                                                        TSPT, TSPT, TSPT, TSPT, TSPT, TSPT
  ),
  [11] = LAYOUT_ergodox_pretty( // Layer 11: game nums gamenums
//,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.        ,-------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.  ,--------.
   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,      TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| ESCAPE |  | Abv.Q  |  | Abv.W  |  | Abv.E  |  | Abv.R  |  | Abv.T  |  | Abv.   |       | Ab.PgUp|  | Abv.Y  |  | Abv.U  |  | Abv.I  |  | Abv.O  |  | Abv.P  |  | Abv.Qt |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_NO,      KC_0,       KC_6,       KC_7,       KC_8,        KC_9,       TSPT,  /*     */TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| LP2    |  | Q      |  | W      |  | E      |  | R      |  | T      |  | jeff   |       |   PgUp |  | Y      |  | U      |  | I      |  | O      |  | P      |  | '''''  |
//| (FKEYS)|  |        |  (PICKAXE)|  |        |  |        |  |(TORCH) |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_NO,      KC_1,       KC_2,       KC_3,       KC_4,       KC_5,      /*-------|       |_______*/   TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       KC_RSHIFT,
//| LP1    |  | A      |  | S      |  | D      |  | F      |  | G      |  |        |       |        |  | H      |  | J      |  | K      |  | L      |  | ;;;;;  |  | RSHFT  |
//| (CAPS) |  | (AXE)  |  | (SHOVEL)  | (idk)  |  |(FOOD)  |  |(Blocks)|  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |        |       |        |  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|
   KC_LSHIFT,  TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,   /*     */TSPT,      TSPT,       TSPT,       TSPT,       TSPT,       TSPT,       TSPT,
//| LSHFT  |  | Z      |  | X      |  | C      |  | V      |  | B      |  |        |       |   PgDn |  | N      |  | M      |  |,,,,,   |  | .....  |  | /////  |  | LCTRL  |
//|        |  |        |  |        |  |        |  |        |  |        |  |        |       |        |  |        |  |        |  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|  |--------|  |--------|       |--------|  |________|  |--------|  |--------|  |--------|  |--------|  |--------|
   TSPT,       TSPT,       MO(6),      MO(5),      MO(3),                                                           MO(4),      KC_LCTRL,   TSPT,       TSPT,       TSPT,
//| GAMING |  |        |  | LT3    |  | LT2[B] |  | LT1    |                                                       | RT1(nums  | LCTRL  |  | f16    |  |        |  |        |
//| TG(1)  |  |        |  |(macros)|  |(harpoon|  | (syms) |                                                       | (&LT2M))  |        |  |        |  |        |  |        |
//|--------|  |--------|  |--------|  |--------|  |--------|                                                       |--------|  |--------|  |------- |  |--------|  |--------|
//                                                            ,--------.  ,---------.       ,--------.  ,--------.
                                                               TSPT,       TSPT,   /*      */TSPT,       TSPT,
//                                                            | UNUSED |  | UNUSED  |       | UNUSED |  | UNUSED |
//                                                ,--------.  |--------|  |---------|       |--------|  |--------|  ,---------.
/*                                                |        |  |        | */TSPT,   /*      */TSPT,  //  |        |  |         |
//                                                |        |  |        |  | UNUSED  |       | UNUSED |  | UNUSED |  |         |
//                                                |        |  |        |  |--------/|       |--------|  |        |  |         |
                                                   KC_LCTRL,   KC_LALT,    KC_LWIN, /*     */TSPT,       KC_LWIN,    KC_SPACE
//                                                | LCTRL  |  | LALT   |  | LWIN    |       |        |  | LWIN   |  | SPACE   |
//                                                |--------|  |--------|  |---------|       |--------|  |--------|  |---------|
    // TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, KC_6,KC_7,KC_8,KC_9,KC_0,TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, KC_1,KC_2,KC_3,KC_4,KC_5,                                                                           TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, KC_7,           KC_8,           KC_9,           TSPT, TSPT, TSPT,                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT, TSPT,
    // TSPT, TSPT, TSPT, TSPT, TSPT,                                                                                                 TSPT, TSPT, TSPT, TSPT, TSPT,
    //                                                                                                 TSPT, TSPT, TSPT, TSPT,
    //                                                                                                                 TSPT, TSPT,
    //                                                                                 TSPT, TSPT, TSPT, TSPT, TSPT, TSPT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_SCLN, KC_W, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_M, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_SCLN, KC_V, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_F, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_A, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_D, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_S, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_E, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_Z, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_X, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_C, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_B, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_Q, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo14[] = { KC_R, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_Y, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo16[] = { KC_H, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo17[] = { KC_A, KC_RABK, COMBO_END};
const uint16_t PROGMEM combo18[] = { KC_S, KC_RABK, COMBO_END};
const uint16_t PROGMEM combo19[] = { KC_D, KC_RABK, COMBO_END};
const uint16_t PROGMEM combo20[] = { KC_F, KC_RABK, COMBO_END};
const uint16_t PROGMEM combo21[] = { KC_G, KC_RABK, COMBO_END};
const uint16_t PROGMEM combo22[] = { KC_H, KC_RABK, COMBO_END};
const uint16_t PROGMEM combo23[] = { KC_J, KC_RABK, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ENTER),
    COMBO(combo1, KC_PIPE),
    COMBO(combo2, KC_AMPR),
    COMBO(combo3, KC_GRAVE),
    COMBO(combo4, KC_TILD),
    COMBO(combo5, KC_ASTR),
    COMBO(combo6, KC_DLR),
    COMBO(combo7, KC_COLN),
    COMBO(combo8, KC_ESCAPE),
    COMBO(combo9, KC_AT),
    COMBO(combo10, KC_GRAVE),
    COMBO(combo11, KC_CIRC),
    COMBO(combo12, KC_GRAVE),
    COMBO(combo13, KC_DQUO),
    COMBO(combo14, KC_EXLM),
    COMBO(combo15, KC_BSLS),
    COMBO(combo16, KC_HASH),
    COMBO(combo17, KC_1),
    COMBO(combo18, KC_2),
    COMBO(combo19, KC_3),
    COMBO(combo20, KC_4),
    COMBO(combo21, KC_5),
    COMBO(combo22, KC_6),
    COMBO(combo23, KC_7),
};

#define LSQRBR SS_TAP(X_LBRC)
#define RSQRBR SS_TAP(X_RBRC)
#define LPAREN SS_LSFT(SS_TAP(X_9))
#define RPAREN SS_LSFT(SS_TAP(X_0))
#define LCURLY SS_LSFT(SS_TAP(X_LBRC))
#define RCURLY SS_LSFT(SS_TAP(X_RBRC))
#define ESC SS_TAP(X_ESCAPE)
#define ESC_30 SS_DELAY(30) SS_TAP(X_ESCAPE) SS_DELAY(30)
#define D10 SS_DELAY(10)
#define D20 SS_DELAY(20)
#define D30 SS_DELAY(30)
#define D50 SS_DELAY(50)
#define D100 SS_DELAY(100)
#define D1000 SS_DELAY(1000)
#define CR SS_TAP(X_ENTER)
#define CR_30 SS_DELAY(30) SS_TAP(X_ENTER) SS_DELAY(30)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0: // Caps + a -> add variable to print()
    if (record->event.pressed) {
        // C VERSION:
        // go from LOG_DBG(" some_func(some_var)|") to LOG_DBG(" some_func(some_var): %d, |", some_func(some_var))
        // and from LOG_DBG(" blah: %d, func(a)|", blah) to LOG_DBG(" blah: %d, func(a): %d, |", blah, func(a))
        // SEND_STRING(
            // ESC D30 "a: %d, " ESC_30 "F:hyT $a;" ESC_30 "F)i, " ESC_30 "p:s/;;/;/e" CR_30
            // ESC D30 "a: %d, " ESC_30 "F:hvT " D100 "y$a;" ESC_30 "F)i, " ESC_30 "p:s/;;/;/e" CR_30 "F F\""
// aLOG_DBG("blah: %d, ");;
        // );
        // Python version:
        //// go from print(f' some_var') or
        //// go from print(f' some_func(some_var)|')
        ////                                     ^cursor
        //// to print(f' some_func(some_var): {some_func(some_var)),')
        //// via `:<Esc>hvF<Space>lyf:a<Space>{}<Esc>hpf}a,`           ^Cursor
        SEND_STRING( // :<Esc>
           SS_TAP(X_ESCAPE) SS_DELAY(30) SS_TAP(X_A) SS_DELAY(20) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(20) SS_TAP(X_ESCAPE) SS_DELAY(50)
           //                 hvF<Space>
           SS_TAP(X_H) SS_DELAY(20) SS_TAP(X_V) SS_DELAY(5) SS_LSFT(SS_TAP(X_F)) SS_DELAY(15) SS_TAP(X_SPACE) SS_DELAY(100)
           //                           lyf:
           SS_TAP(X_L) SS_DELAY(30) SS_TAP(X_Y) SS_DELAY(300) "f:"/*SS_TAP(X_F) SS_DELAY(15) SS_LSFT(SS_TAP(X_SCOLON))*/ SS_DELAY(10)
           //                               a<Space>{}
           SS_TAP(X_A) SS_DELAY(150) SS_TAP(X_SPACE) SS_DELAY(10) LCURLY SS_DELAY(10) RCURLY SS_DELAY(10)
           //                                         <Esc>hpf}a,
           SS_TAP(X_ESCAPE) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(40)
           SS_DELAY(200) "f}"/* SS_TAP(X_F) SS_DELAY(40) RCURLY */ SS_DELAY(80) SS_TAP(X_A) SS_DELAY(40) SS_TAP(X_COMMA)
        );
        // DEPRECATED OLD DEF:
        // caps + w pressed -> triple BS
        // SEND_STRING(SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE));
    }
    break;
    case ST_MACRO_1: // Caps + p: python print(f' ')
    if (record->event.pressed) {
    // sorry idk what it is but this shit is way too easy to hit by accident... this binding should be reserved for
    // like symbols or something...
      // C VERSION:
      // SEND_STRING("aLOG_DBG(\" \")" ESC_30 ":s/aLOG/LOG/e" CR_30 "hi");

      // Python VERSION:
      //// aprint(f' ')<Esc>hhi
      //SEND_STRING( // aprint
      //  SS_TAP(X_ESCAPE) SS_DELAY(20) SS_TAP(X_A) SS_DELAY(20) SS_TAP(X_P) SS_DELAY(20) SS_TAP(X_R) SS_DELAY(20) SS_TAP(X_I) SS_DELAY(20) SS_TAP(X_N) SS_DELAY(20) SS_TAP(X_T) SS_DELAY(20)
      //  // (f' ')
      //  LPAREN SS_DELAY(20) SS_TAP(X_F) SS_DELAY(20) SS_TAP(X_QUOTE) SS_DELAY(20) SS_TAP(X_SPACE) SS_DELAY(20) SS_TAP(X_QUOTE) SS_DELAY(20) RPAREN SS_DELAY(20)
      //  // <Esc>hhi
      //  SS_TAP(X_ESCAPE) SS_DELAY(20) SS_TAP(X_H) SS_DELAY(20) SS_TAP(X_I)
      //);
      //
      //
      // NOw im moving this to LT1=syms + Z kinda like A-z
      //
      // its normally gonna just be A-z, ctrl+c, up, enter
      //
      // but for now im also adding in a Win+shift+L to move the spawned window!
      SEND_STRING( // aprint
          SS_LALT(SS_TAP(X_Z)) SS_DELAY(400) SS_LCTL(SS_TAP(X_C)) SS_DELAY(100) SS_TAP(X_UP) SS_DELAY(100) SS_TAP(X_ENTER) SS_DELAY(1000) /*SS_LWIN(SS_LSFT(SS_TAP(X_L))) SS_DELAY(500)*/ SS_LWIN(SS_TAP(X_H))
      );

    }
    break;
    case ST_MACRO_2:
    // if (record->event.pressed) {// caps + e pressed -> enumerate
    if (record->event.pressed) {// caps + e
    // go from `for idx, cur in iterable_with_maybe_parens():` to `for idx, cur in enumerate(iterable_with_maybe_parens()):`
    // via `?for<Enter>wiidx,<Space><Esc>/<Space>in<Space><Enter>wwienumerate(<Esc>f:i)<Esc>f)`
    //starting with:
    // ?for<Enter>wiidx,<Space><Esc>
    SEND_STRING(
        // Searching for the nearest "for" backwards and confirming with Enter
        SS_LSFT(SS_TAP(X_SLASH)) "for" SS_TAP(X_ENTER)
        // Move to the next word, then insert "idx, "
        "wiidx, " SS_TAP(X_ESCAPE)
        // Search forward for " in " and confirm with Enter
        "/ in " SS_TAP(X_ENTER)
        // Move forward two words, enter insert mode, and type "enumerate("
        "wwienumerate()" SS_TAP(X_ESCAPE)
        // Find next colon, go to insert mode right after it, type ")", and go to the first non-blank character
        // then lastly delete the extra ) usually generated by autoclose()
        "xf:" SS_TAP(X_I) ")" SS_TAP(X_ESCAPE) "^"
    );

    // (FORMERLY) caps+r pressed -> edit bullet point
    //   SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(3) SS_LSFT(SS_TAP(X_I)) SS_DELAY(3) SS_TAP(X_ESCAPE) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_I));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) { // caps + t pressed -> std:: for cpp
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10) SS_LSFT(SS_TAP(X_SCOLON))  SS_DELAY(10) SS_LSFT(SS_TAP(X_SCOLON)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) { // caps + x pressed -> 8x BSPACE
      SEND_STRING(SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) { // caps + c pressed -> 8x DEL
      SEND_STRING(SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) { // caps + v pressed: select to EOL ???
      SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(30) SS_LSFT(SS_TAP(X_4)) SS_DELAY(3) SS_TAP(X_H)); // SS_DELAY(3) SS_LSFT(SS_TAP(X_4)));
      // SEND_STRING(SS_LSFT(SS_TAP(X_4))); // SS_DELAY(3) SS_LSFT(SS_TAP(X_4)));
    }
    break;

    // literally doesnt need to be a macro
    // caps +b : Alt+G which nvim interprets in whichkey <A-g> to grappler down left
    case ST_MACRO_7: //   VVVVVVVVVVVVVVVVVVVVVVVVVVvv        UHHHHHHHHHHHHHHHHHHHH caps + b doesn't do this anymore idk it seems to do grappler via END or something?
    if (record->event.pressed) { // caps + b [B]reathing room was pressed, breathing room: C-e C-e C-e (scroll screen for breathing room in nvim/obs)
      // SEND_STRING(SS_LCTL(SS_TAP(X_E)) SS_DELAY(105) SS_LCTL(SS_TAP(X_E)));
      SEND_STRING(SS_LALT(SS_TAP(X_G)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) { // LT1 + q / symbols + q pressed -> restart nvim with `<Space>q -> nvim<CR>
      // SEND_STRING(SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_Q) SS_DELAY(100) SS_TAP(X_ENTER));
      // TODO put something else here
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(3) SS_TAP(X_Q) SS_DELAY(300) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_9: // LT1 + a / symbols + a pressed -> save all
    if (record->event.pressed) {
        // SEND_STRING(SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(200) SS_TAP(X_W));// SS_DELAY(50) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_ENTER));
        SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(50) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(50) SS_TAP(X_W) SS_DELAY(5) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_ENTER));
                                                                                                        //
      // SEND_STRING( SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_SPACE) SS_DELAY(3) SS_LSFT(SS_TAP(X_GRAVE)) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_D) SS_TAP(X_X) SS_DELAY(3) SS_TAP(X_ENTER) SS_DELAY(3) SS_LALT(SS_TAP(X_R)) SS_DELAY(150) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_D) SS_TAP(X_X) SS_DELAY(3) SS_TAP(X_ENTER) SS_DELAY(150) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_10: // LT1 + a / symbols + b -> cd ~/bndx, nvim, alt+r, rename tab to bndx
    if (record->event.pressed) {
      SEND_STRING( SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_SPACE) SS_DELAY(3) SS_LSFT(SS_TAP(X_GRAVE)) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_D) SS_TAP(X_X) SS_DELAY(3) SS_TAP(X_ENTER) SS_DELAY(3) SS_LALT(SS_TAP(X_R)) SS_DELAY(150) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_D) SS_TAP(X_X) SS_DELAY(3) SS_TAP(X_ENTER) SS_DELAY(150) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_11: // LT1 + b -> exit bookmark panel in tree style tabs /
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_TAB) SS_DELAY(100) SS_TAP(X_TAB) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
     // TODO this should really just be :let @+=@0 at vim level
    case ST_MACRO_12: // RT1 + y -> fix_yank () fix yank by reselecting the last visual selection and yanking to clipboard
    if (record->event.pressed) { // TODO this should really just be :let @+=@0 at vim level
      SEND_STRING(SS_TAP(X_G) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(10) SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_13: // RT1 + p -> replace last put with clipboard
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(10) SS_TAP(X_SPACE) SS_DELAY(3) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_14:  // RT1 + ' pressed -> force put
    if (record->event.pressed) {// what this actually does is delete the selection into blackhole and replace it with register 0 while maintaining the content of reg. 0
                                 // ie. if you want to paste reg. 0 into several places.
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(50) SS_LSFT(SS_TAP(X_MINUS)) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(20) SS_LSFT(SS_TAP(X_P)));
    }
    break;
    case ST_MACRO_15: // LT3 -----------------------
    if (record->event.pressed) { // W pressed, website -> [W]website = https://kaelan.xyz
      SEND_STRING(SS_TAP(X_H) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_DOT) SS_DELAY(3) SS_TAP(X_X) SS_DELAY(3) SS_TAP(X_Y) SS_DELAY(3) SS_TAP(X_Z));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) { // E pressed, email -> [E]mail = kaelan.ms@gmail.com
      SEND_STRING(SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_DOT) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_LSFT(SS_TAP(X_2)) SS_DELAY(3) SS_TAP(X_G) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_DOT) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_M));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) { // R pressed, recruiter -> [R]ecruiter = TODO PARAGRAPH
      SEND_STRING(SS_TAP(X_R));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) { // A pressed, address -> [A]ddress = 1535 Clarita Ave.
      SEND_STRING(SS_TAP(X_1) SS_DELAY(3) SS_TAP(X_5) SS_DELAY(3) SS_TAP(X_3) SS_DELAY(3) SS_TAP(X_5) SS_DELAY(3) SS_TAP(X_SPACE) SS_DELAY(3) SS_LSFT(SS_TAP(X_C)) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_SPACE) SS_DELAY(3) SS_LSFT(SS_TAP(X_A)) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_DOT));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) { // S pressed, state -> [S]tate = California
      SEND_STRING(SS_LSFT(SS_TAP(X_C)) SS_DELAY(3) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_F) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_A));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) { // F pressed, firstname -> [F]irstname = Kaelan
      SEND_STRING(SS_LSFT(SS_TAP(X_K)) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_N));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) { // G pressed, github -> [G]ithub = https://github.com/oasixer
      SEND_STRING(SS_TAP(X_H) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_G) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_H) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_DOT) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_X) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_R));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) { // Z pressed, zip -> [Z]ip = 95130
      // SEND_STRING(SS_TAP(X_9) SS_DELAY(3) SS_TAP(X_5) SS_DELAY(3) SS_TAP(X_1) SS_DELAY(3) SS_TAP(X_3) SS_DELAY(3) SS_TAP(X_0));
      SEND_STRING(SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_6) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_1) SS_DELAY(3) SS_TAP(X_J) SS_DELAY(3) SS_TAP(X_9));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) { // X pressed -> [X]Skills = python,c++,...
      // SEND_STRING(SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_Y) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_H) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_KP_PLUS) SS_DELAY(3) SS_TAP(X_KP_PLUS) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_W) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_G) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_Y) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_X));
      SEND_STRING(SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_Y) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_H) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_KP_PLUS) SS_DELAY(3) SS_TAP(X_KP_PLUS) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_W) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_G) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_Y) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_C) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_X));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) { // C pressed -> [C]ity City = San Jose
      // SEND_STRING(SS_LSFT(SS_TAP(X_S)) SS_DELAY(3)
      //             SS_TAP(X_A) SS_DELAY(3)
      //             SS_TAP(X_N) SS_DELAY(3)
      //             SS_TAP(X_SPACE) SS_DELAY(3)
      //             SS_LSFT(SS_TAP(X_J)) SS_DELAY(3)
      //             SS_TAP(X_O) SS_DELAY(3)
      //             SS_TAP(X_S) SS_DELAY(3)
      //             SS_TAP(X_E) SS_DELAY(3)
      // );
      SEND_STRING(SS_LSFT(SS_TAP(X_T)) SS_DELAY(3)
                  SS_TAP(X_O) SS_DELAY(3)
                  SS_TAP(X_R) SS_DELAY(3)
                  SS_TAP(X_O) SS_DELAY(3)
                  SS_TAP(X_N) SS_DELAY(3)
                  SS_TAP(X_T) SS_DELAY(3)
                  SS_TAP(X_O) SS_DELAY(3)
      );
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) { // I pressed, linkedin -> l[I]nkedin = https://www.linkedin.com/in/kaelanms/
      SEND_STRING(SS_TAP(X_H) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_W) SS_DELAY(3) SS_TAP(X_W) SS_DELAY(3) SS_TAP(X_W) SS_DELAY(3) SS_TAP(X_DOT) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_DOT) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_S));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) { // P presssed, phone -> [P]hone = +16692451735
        // X_KP_PLUS... Instead of shift + X_EQUAL bc why not test this out? hehe
      // SEND_STRING(SS_TAP(X_KP_PLUS) SS_DELAY(3) SS_TAP(X_1) SS_DELAY(3) SS_TAP(X_6) SS_DELAY(3) SS_TAP(X_6) SS_DELAY(3) SS_TAP(X_9) SS_DELAY(3) SS_TAP(X_2) SS_DELAY(3) SS_TAP(X_4) SS_DELAY(3) SS_TAP(X_5) SS_DELAY(3) SS_TAP(X_1) SS_DELAY(3) SS_TAP(X_7) SS_DELAY(3) SS_TAP(X_3) SS_DELAY(3) SS_TAP(X_5));
      SEND_STRING(SS_TAP(X_6) SS_DELAY(8) SS_TAP(X_4) SS_DELAY(8) SS_TAP(X_7) SS_DELAY(8) SS_TAP(X_9) SS_DELAY(8) SS_TAP(X_9) SS_DELAY(8) SS_TAP(X_7) SS_DELAY(8) SS_TAP(X_6) SS_DELAY(8) SS_TAP(X_7) SS_DELAY(8) SS_TAP(X_8) SS_DELAY(8) SS_TAP(X_3));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) { // ' presssed, pass -> Pass = $2afl...
      SEND_STRING(SS_LSFT(SS_TAP(X_4)) SS_DELAY(3) SS_TAP(X_2) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_F) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_G) SS_DELAY(3) SS_TAP(X_F) SS_DELAY(3) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) { // L pressed, lastname -> [L]astname = Moffett-Steinke
      SEND_STRING(SS_LSFT(SS_TAP(X_M)) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(6) SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_F) SS_DELAY(5) SS_TAP(X_E) SS_DELAY(8) SS_TAP(X_T) SS_DELAY(8) SS_TAP(X_T) SS_DELAY(8) SS_TAP(X_MINUS) SS_DELAY(5) SS_LSFT(SS_TAP(X_S)) SS_DELAY(5) SS_TAP(X_T) SS_DELAY(5) SS_TAP(X_E) SS_DELAY(5) SS_TAP(X_I) SS_DELAY(5) SS_TAP(X_N) SS_DELAY(5) SS_TAP(X_K) SS_DELAY(5) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) { // N pressed, fullname -> full[N]ame = Kaelan Moffett-Steinke
      SEND_STRING(SS_LSFT(SS_TAP(X_K)) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_SPACE) SS_DELAY(3) SS_LSFT(SS_TAP(X_M)) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_F) SS_DELAY(3) SS_TAP(X_F) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_MINUS) SS_DELAY(3) SS_LSFT(SS_TAP(X_S)) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_30:
    if (record->event.pressed) { // / pressed, fix tst search and do a normal search instead
      SEND_STRING(SS_TAP(X_SLASH) SS_DELAY(5) SS_TAP(X_UP) SS_DELAY(300) SS_TAP(X_HOME) SS_DELAY(10) SS_LCTL(SS_TAP(X_RIGHT)) SS_DELAY(10) SS_TAP(X_RIGHT) SS_DELAY(10) SS_LSFT(SS_TAP(X_END)) SS_DELAY(300) SS_LCTL(SS_TAP(X_C)) SS_DELAY(70) SS_TAP(X_ESCAPE) SS_DELAY(100) SS_LCTL(SS_TAP(X_F)) SS_DELAY(30) SS_LCTL(SS_TAP(X_V)));
    }
    break;
    case ST_MACRO_31: // TERMINAL / wezterm STUFF --------------------------------
    if (record->event.pressed) {
      // SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(50) SS_TAP(X_T));
      SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(200) SS_TAP(X_T));
      // SEND_STRING(SS_DELAY(10) SS_LSFT(SS_TAP(X_A)) SS_DELAY(200) SS_TAP(X_9));
    }
    break; // RT1M + d pressed, Alt+T -> Tab
    case ST_MACRO_32:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)));
    }
    break;  // RT1M + f pressed  Alt+T -> S-Tab
    case ST_MACRO_33:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(3) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_34:  // RT1M + c pressed  Alt+T -> c
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(3) SS_TAP(X_C));
    }
    break;
    case ST_MACRO_35:  // RT1M + j pressed  Alt+T -> j
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(3) SS_TAP(X_J));
    }
    break;
    case ST_MACRO_36:  // RT1M + k pressed  Alt+T -> k
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(3) SS_TAP(X_K));
    }
    break;
    // LT2M (linkedin shit) accessed via LT2 + RT1 (under M)
    case ST_MACRO_37: // LT2M + t pressed -> create jobapp in obsidian
                      // yank position, super O,
    // #define SS_LCMD(string) SS_LGUI(string)
    // #define SS_LWIN(string) SS_LGUI(string)
    if (record->event.pressed) {
      // SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(600) SS_LCMD(SS_TAP(X_O)) SS_DELAY(400) SS_TAP(X_G) SS_DELAY(2) SS_TAP(X_G) SS_TAP(X_SLASH) SS_DELAY(50) SS_LSFT(SS_TAP(X_L)) SS_DELAY(5) SS_TAP(X_O) SS_DELAY(5) SS_TAP(X_G) SS_DELAY(5) SS_TAP(X_ENTER) SS_DELAY(200) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_ESCAPE) SS_DELAY(10) SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(1000) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(1000) SS_TAP(X_J)  SS_DELAY(1000) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(1000) SS_TAP(X_K) SS_DELAY(10) SS_LSFT(SS_TAP(X_6)) SS_DELAY(5) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_0) SS_DELAY(1000) SS_LSFT(SS_TAP(X_D)) SS_DELAY(1000) SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_T)  SS_DELAY(10) SS_TAP(X_N) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(1000) SS_TAP(X_P) SS_DELAY(10) SS_LCMD(SS_TAP(X_I)) SS_DELAY(400) SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(300) SS_LCMD(SS_TAP(X_O)) SS_DELAY(400) SS_TAP(X_W) SS_DELAY(5) SS_TAP(X_W) SS_DELAY(5) SS_TAP(X_L) SS_DELAY(5) SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(10) SS_LCMD(SS_TAP(X_I)));
      SEND_STRING(
         /*  );p           <--- copy position  via tridactyl*/
         SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(600)
         SS_LCMD(/*SS_TAP(X_O)*/SS_TAP(X_L)) SS_DELAY(300) /*SS_TAP(X_G) SS_DELAY(2) SS_TAP(X_G) SS_DELAY(50)*/

         // go to end of file
         SS_LSFT(SS_TAP(X_G)) SS_DELAY(50)

         SS_TAP(X_SPACE) SS_DELAY(5) SS_TAP(X_SPACE) SS_DELAY(5) SS_TAP(X_L) SS_DELAY(5) SS_TAP(X_P) SS_DELAY(50)

         // SS_TAP(X_SPACE) SS_DELAY(5)
         /* search for # LogEnd */
         /*SS_TAP(X_SLASH) SS_DELAY(50) SS_LSFT(SS_TAP(X_3)) SS_DELAY(5) SS_TAP(X_SPACE) SS_DELAY(5) SS_LSFT(SS_TAP(X_L)) SS_DELAY(5) SS_TAP(X_O) SS_DELAY(5) SS_TAP(X_G) SS_DELAY(5) SS_LSFT(SS_TAP(X_E)) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_D) SS_DELAY(60) SS_TAP(X_ENTER) SS_DELAY(300)
          */

         /* create new line above*/
         // SS_TAP(X_K) SS_DELAY(50) SS_TAP(X_O) SS_DELAY(50) SS_TAP(X_ESCAPE) SS_DELAY(100)

         /* put the position text and trim it (incl. removin0g an extra newline) yank and delete the trimmed position name. */
         // SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(200)
         /* delete what is usually an extra newline */
         // SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10)
         /* delete what is usually an extra newline  */
         // SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10)
         /* go down and delete the line after the position line */
         // SS_TAP(X_J)  SS_DELAY(5) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(100)
         /* delete the line after the position line */
         // SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(50)
         /* delete the line after the position line */
         // SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10)
         // /* go up */
         // SS_TAP(X_K) SS_DELAY(10)
         // ^
         // SS_LSFT(SS_TAP(X_6)) SS_DELAY(50)
         // d0
         // SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_0) SS_DELAY(100)
//
         // SS_LSFT(SS_TAP(X_D)) SS_DELAY(200)
         //
         // /* create new job task */
         // SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_T)  SS_DELAY(10) SS_TAP(X_N) SS_TAP(X_J) SS_DELAY(300)
         //
         // /* put the trimmed position name */
         // SS_TAP(X_H) SS_DELAY(30) SS_TAP(X_P) SS_DELAY(350)
         //
         // /* return to firefox */
         SS_LCMD(SS_TAP(/*X_I*/X_H)) SS_DELAY(500)
         //
         // yank url in case the company name thingy fails
         // SS_TAP(X_Y) SS_DELAY(50) SS_TAP(X_Y) SS_DELAY(300)
         // /* copy job title via tridactyl*/
         SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(200)
         //
         // /* return to obsidian */
         SS_LCMD(SS_TAP(X_L)) SS_DELAY(500)
         SS_LSFT(SS_TAP(X_G)) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(20)
         SS_TAP(X_SLASH) SS_DELAY(40) SS_TAP(X_LBRACKET) SS_DELAY(40) SS_TAP(X_LBRACKET)  SS_DELAY(40) SS_TAP(X_ENTER)

         SS_DELAY(40) SS_TAP(X_L) SS_DELAY(10)

         // /* position cursor at the task part of the job task*/
         // SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(50)
         //
         // /* put the copied job title */

         SS_TAP(X_SPACE) SS_DELAY(5) SS_TAP(X_SPACE) SS_DELAY(5) SS_TAP(X_L) SS_DELAY(5) SS_TAP(X_C) SS_DELAY(500)
         // SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(200)
         //
         // /* return to firefox */
         // SS_LCMD(SS_TAP(X_I))
         SS_LCMD(SS_TAP(/*X_I*/X_H))
      );
    }
    break;
    case ST_MACRO_38: // LT2M + a pressed -> apply
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_LSFT(SS_TAP(X_A)) SS_DELAY(10) SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_A));
      // SS_DELAY(900) SS_TAP(X_Y) SS_DELAY(3) SS_TAP(X_Y) SS_DELAY(70) SS_LCTL(SS_TAP(X_W)) SS_DELAY(400) SS_TAP(X_T) SS_DELAY(800) SS_LCTL(SS_TAP(X_V)) SS_DELAY(30) SS_TAP(X_ENTER) SS_DELAY(500) SS_LSFT(SS_LCTL(SS_TAP(X_TAB))));
    }
    break;
    case ST_MACRO_39: // LT2M + s pressed -> save
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_S));
    }
    break;
    case ST_MACRO_40: // LT2M + d pressed -> hide / delete job
    if (record->event.pressed) {
        // currently executes both );h and );d but );d could be modified in tridactyl to have a composite of both ideally
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_41: // LT2M + f pressed -> filters
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(100) SS_TAP(X_SCOLON) SS_DELAY(100) SS_TAP(X_F));
    }
    break;
    case ST_MACRO_42: // LT2M + c pressed -> close tab
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W)));
    }
    break;
    case ST_MACRO_43:  // LT2M + b pressed -> bookmarks panel
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_L)) SS_DELAY(50) SS_TAP(X_ESCAPE) SS_DELAY(10) SS_TAP(X_TAB) SS_DELAY(10) SS_TAP(X_TAB) SS_DELAY(10) SS_TAP(X_TAB) SS_DELAY(10) SS_TAP(X_TAB) SS_DELAY(10) SS_TAP(X_TAB) SS_DELAY(10) SS_TAP(X_TAB) SS_DELAY(10) SS_TAP(X_UP)  SS_DELAY(10) SS_TAP(X_DOWN));
    }
    break;
    case ST_MACRO_44: // LT2M + u pressed -> yank job url
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_45: // LT2M + p pressed -> yank position & company name
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(100) SS_TAP(X_SCOLON) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_46: // LT2M + h pressed -> focus left pane
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_47:  // LT2M + j pressed -> next job
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_J) SS_DELAY(700) SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_L));
    }
    break;
    case ST_MACRO_48:   // LT2M + k pressed -> prev job
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(100) SS_TAP(X_SCOLON) SS_DELAY(100) SS_TAP(X_K));
    }
    break;
    case ST_MACRO_49:   // LT2M + l pressed -> focus right pane
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(100) SS_TAP(X_SCOLON) SS_DELAY(100) SS_TAP(X_L));
    }
    break;

    // TODO macro for opening current tab in chrome
      // SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(KC_GRAVE))) SS_DELAY(3));
  }
  return true;
}

uint16_t layer_state_set_user(uint16_t state) {
    uint8_t layer = biton16(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1: // LP1_caps
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
    case 2: // LT1_sims
      ergodox_right_led_1_on();
      break;
    case 3: // RT1_nums
      ergodox_right_led_2_on();
      break;
    case 4: // LT2_alt
      ergodox_right_led_3_on();
      break;
    case 5: // game
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 6: // LT3_mac (jobapp form macros)
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7: // LP2_fkeys
      // ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      // ergodox_right_led_3_on();
      break;
    case 8: // LP2W_f10keys
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();

    case 9: // RT1M_Wez
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 10: // LT2M_Lnk (Macros for linkedin... lol)
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 11: //
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 12: //
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 13: //
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
