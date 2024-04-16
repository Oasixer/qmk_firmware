#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
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


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    MO(7),          KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_PGUP,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_QUOTE,
    MO(1),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_RSHIFT,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_PGDOWN,      KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_LCTRL,
    TG(5),          KC_TRANSPARENT, MO(6),          MO(4),          MO(2),                                                                                                          MO(3),          KC_LCTRL,       KC_F16,         KC_RABK,        KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_PGUP,        KC_TRANSPARENT,
                                                                                    KC_LCTRL,       KC_LALT,        KC_LGUI,        KC_TRANSPARENT, KC_LGUI,        KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     KC_TRANSPARENT, ST_MACRO_3,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, KC_DQUO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE,      KC_DELETE,      LCTL(KC_BSPACE),KC_HOME,                                                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_END,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 MO(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_8,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_UNDS,        KC_LBRACKET,    KC_RBRACKET,    KC_PERC,        KC_GRAVE,
    KC_TRANSPARENT, ST_MACRO_9,     LCTL(KC_SPACE), LSFT(KC_TAB),   KC_TAB,         KC_TRANSPARENT,                                                                 KC_NO,          KC_MINUS,       KC_PLUS,        KC_EQUAL,       KC_NO,          KC_RSHIFT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_CAPSLOCK,    KC_TRANSPARENT, ST_MACRO_10,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_AMPR,        KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_12,    KC_7,           KC_8,           KC_9,           ST_MACRO_13,    ST_MACRO_14,
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_11,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, MO(9),          KC_TRANSPARENT, KC_DOT,         KC_SLASH,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(KC_9),     LALT(LSFT(KC_W)),LALT(LSFT(KC_E)),LALT(LSFT(KC_R)),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_7),     LALT(KC_8),     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      LALT(LSFT(KC_A)),LALT(LSFT(KC_S)),LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   LALT(LSFT(KC_G)),                                                                LALT(KC_1),     LALT(KC_2),     LALT(KC_3),     LALT(KC_4),     LALT(KC_5),     KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(LSFT(KC_Z)),LALT(LSFT(KC_X)),LALT(LSFT(KC_C)),LALT(LSFT(KC_V)),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LSFT(KC_N)),LALT(LSFT(KC_M)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 MO(10),         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LCTRL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_15,    ST_MACRO_16,    ST_MACRO_17,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_25,    KC_TRANSPARENT, ST_MACRO_26,    ST_MACRO_27,
    KC_TRANSPARENT, ST_MACRO_18,    ST_MACRO_19,    KC_TRANSPARENT, ST_MACRO_20,    ST_MACRO_21,                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_28,    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_29,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_30,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, MO(8),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F14,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_31,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_32,    ST_MACRO_33,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, ST_MACRO_35,    ST_MACRO_36,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_34,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_T),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_37,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_44,    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_45,    KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_38,    ST_MACRO_39,    ST_MACRO_40,    ST_MACRO_41,    KC_TRANSPARENT,                                                                 ST_MACRO_46,    ST_MACRO_47,    ST_MACRO_48,    ST_MACRO_49,    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_42,    KC_TRANSPARENT, ST_MACRO_43,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_SCOLON, KC_W, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_M, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_SCOLON, KC_V, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_F, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_A, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_D, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_S, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_E, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_Z, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_X, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_C, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_B, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_Q, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo14[] = { KC_R, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_Y, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo16[] = { KC_H, KC_SCOLON, COMBO_END};
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
    COMBO(combo15, KC_BSLASH),
    COMBO(combo16, KC_HASH),
    COMBO(combo17, KC_1),
    COMBO(combo18, KC_2),
    COMBO(combo19, KC_3),
    COMBO(combo20, KC_4),
    COMBO(combo21, KC_5),
    COMBO(combo22, KC_6),
    COMBO(combo23, KC_7),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) { // caps + w pressed -> triple BS
        SEND_STRING(SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE));
    }
    break;
    case ST_MACRO_1:
    // if (record->event.pressed) {// caps + e pressed -> triple DEL
    if (record->event.pressed) {// caps + e pressed -> double ESC
      SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(3) SS_TAP(X_ESCAPE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {// caps + r pressed -> edit bullet point
      SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(3) SS_LSFT(SS_TAP(X_I)) SS_DELAY(3) SS_TAP(X_ESCAPE) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_I));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) { // caps + x pressed -> 8x BSPACE
      SEND_STRING(SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE) SS_DELAY(3) SS_TAP(X_BSPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) { // caps + c pressed -> 8x DEL
      SEND_STRING(SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL) SS_DELAY(3) SS_TAP(X_DEL));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) { // caps + v pressed: select to EOL ???
      SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(30) SS_LSFT(SS_TAP(X_4)) SS_DELAY(3) SS_TAP(X_H)); // SS_DELAY(3) SS_LSFT(SS_TAP(X_4)));
      // SEND_STRING(SS_LSFT(SS_TAP(X_4))); // SS_DELAY(3) SS_LSFT(SS_TAP(X_4)));
    }
    break;
    case ST_MACRO_6: // UHHHHHHHHHHHHHHHHHHHH caps + b doesn't do this anymore idk it seems to do grappler via END or something?
    if (record->event.pressed) { // caps + b [B]reathing room was pressed, breathing room: C-e C-e C-e (scroll screen for breathing room in nvim/obs)
      // SEND_STRING(SS_LCTL(SS_TAP(X_E)) SS_DELAY(105) SS_LCTL(SS_TAP(X_E)));
      SEND_STRING(SS_LALT(SS_TAP(X_G)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) { // LT1 + q / symbols + q pressed -> restart nvim with `<Space>q -> nvim<CR>
      // SEND_STRING(SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_Q) SS_DELAY(100) SS_TAP(X_ENTER));
      // TODO put something else here
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(3) SS_TAP(X_Q) SS_DELAY(300) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_8: // LT1 + a / symbols + a pressed -> save all
    if (record->event.pressed) {
        // SEND_STRING(SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(200) SS_TAP(X_W));// SS_DELAY(50) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_ENTER));
        SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(50) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(50) SS_TAP(X_W) SS_DELAY(5) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_ENTER));
                                                                                                        //
      // SEND_STRING( SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_SPACE) SS_DELAY(3) SS_LSFT(SS_TAP(X_GRAVE)) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_D) SS_TAP(X_X) SS_DELAY(3) SS_TAP(X_ENTER) SS_DELAY(3) SS_LALT(SS_TAP(X_R)) SS_DELAY(150) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_D) SS_TAP(X_X) SS_DELAY(3) SS_TAP(X_ENTER) SS_DELAY(150) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_9: // LT1 + a / symbols + b -> cd ~/bndx, nvim, alt+r, rename tab to bndx
    if (record->event.pressed) {
      SEND_STRING( SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_SPACE) SS_DELAY(3) SS_LSFT(SS_TAP(X_GRAVE)) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_D) SS_TAP(X_X) SS_DELAY(3) SS_TAP(X_ENTER) SS_DELAY(3) SS_LALT(SS_TAP(X_R)) SS_DELAY(150) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_D) SS_TAP(X_X) SS_DELAY(3) SS_TAP(X_ENTER) SS_DELAY(150) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_10: // LT1 + b -> exit bookmark panel in tree style tabs /
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_TAB) SS_DELAY(100) SS_TAP(X_TAB) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
     // TODO this should really just be :let @+=@0 at vim level
    case ST_MACRO_11: // RT1 + y -> fix_yank () fix yank by reselecting the last visual selection and yanking to clipboard
    if (record->event.pressed) { // TODO this should really just be :let @+=@0 at vim level
      SEND_STRING(SS_TAP(X_G) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(10) SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_12: // RT1 + p -> replace last put with clipboard
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(10) SS_TAP(X_SPACE) SS_DELAY(3) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_13:  // RT1 + ' pressed -> force put
    if (record->event.pressed) {// what this actually does is delete the selection into blackhole and replace it with register 0 while maintaining the content of reg. 0
                                 // ie. if you want to paste reg. 0 into several places.
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(50) SS_LSFT(SS_TAP(X_MINUS)) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(20) SS_LSFT(SS_TAP(X_P)));
    }
    break;
    case ST_MACRO_14: // LT3 -----------------------
    if (record->event.pressed) { // W pressed, website -> [W]website = https://kaelan.xyz
      SEND_STRING(SS_TAP(X_H) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_DOT) SS_DELAY(3) SS_TAP(X_X) SS_DELAY(3) SS_TAP(X_Y) SS_DELAY(3) SS_TAP(X_Z));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) { // E pressed, email -> [E]mail = kaelan.ms@gmail.com
      SEND_STRING(SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_DOT) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_LSFT(SS_TAP(X_2)) SS_DELAY(3) SS_TAP(X_G) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_DOT) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_M));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) { // R pressed, recruiter -> [R]ecruiter = TODO PARAGRAPH
      SEND_STRING(SS_TAP(X_R));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) { // A pressed, address -> [A]ddress = 1535 Clarita Ave.
      SEND_STRING(SS_TAP(X_1) SS_DELAY(3) SS_TAP(X_5) SS_DELAY(3) SS_TAP(X_3) SS_DELAY(3) SS_TAP(X_5) SS_DELAY(3) SS_TAP(X_SPACE) SS_DELAY(3) SS_LSFT(SS_TAP(X_C)) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_SPACE) SS_DELAY(3) SS_LSFT(SS_TAP(X_A)) SS_DELAY(3) SS_TAP(X_V) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_DOT));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) { // S pressed, state -> [S]tate = California
      SEND_STRING(SS_LSFT(SS_TAP(X_C)) SS_DELAY(3) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_F) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_A));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) { // F pressed, firstname -> [F]irstname = Kaelan
      SEND_STRING(SS_LSFT(SS_TAP(X_K)) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_N));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) { // G pressed, github -> [G]ithub = https://github.com/oasixer
      SEND_STRING(SS_TAP(X_H) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_G) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_H) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_DOT) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_X) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_R));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) { // Z pressed, zip -> [Z]ip = 95130
      SEND_STRING(SS_TAP(X_9) SS_DELAY(3) SS_TAP(X_5) SS_DELAY(3) SS_TAP(X_1) SS_DELAY(3) SS_TAP(X_3) SS_DELAY(3) SS_TAP(X_0));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) { // X pressed -> [X]Skills = python,c++,...
      // SEND_STRING(SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_Y) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_H) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_KP_PLUS) SS_DELAY(3) SS_TAP(X_KP_PLUS) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_W) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_G) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_Y) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_COMMA) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_X));
      SEND_STRING(SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_Y) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_H) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_KP_PLUS) SS_DELAY(3) SS_TAP(X_KP_PLUS) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_W) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_G) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_Y) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_R) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_C) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)) SS_DELAY(150) SS_TAP(X_TAB) SS_DELAY(150) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_U) SS_DELAY(3) SS_TAP(X_X));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) { // C pressed -> [C]ity = San Jose
      SEND_STRING(SS_LSFT(SS_TAP(X_S)) SS_DELAY(3)
                  SS_TAP(X_A) SS_DELAY(3)
                  SS_TAP(X_N) SS_DELAY(3)
                  SS_TAP(X_SPACE) SS_DELAY(3)
                  SS_LSFT(SS_TAP(X_J)) SS_DELAY(3)
                  SS_TAP(X_O) SS_DELAY(3)
                  SS_TAP(X_S) SS_DELAY(3)
                  SS_TAP(X_E) SS_DELAY(3)
      );
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) { // I pressed, linkedin -> l[I]nkedin = https://www.linkedin.com/in/kaelanms/
      SEND_STRING(SS_TAP(X_H) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_P) SS_DELAY(3) SS_TAP(X_S) SS_DELAY(3) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_W) SS_DELAY(3) SS_TAP(X_W) SS_DELAY(3) SS_TAP(X_W) SS_DELAY(3) SS_TAP(X_DOT) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_D) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_DOT) SS_DELAY(3) SS_TAP(X_C) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_SLASH) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_M) SS_DELAY(3) SS_TAP(X_S));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) { // P presssed, phone -> [P]hone = +16692451735
        // X_KP_PLUS... Instead of shift + X_EQUAL bc why not test this out? hehe
      SEND_STRING(SS_TAP(X_KP_PLUS) SS_DELAY(3) SS_TAP(X_1) SS_DELAY(3) SS_TAP(X_6) SS_DELAY(3) SS_TAP(X_6) SS_DELAY(3) SS_TAP(X_9) SS_DELAY(3) SS_TAP(X_2) SS_DELAY(3) SS_TAP(X_4) SS_DELAY(3) SS_TAP(X_5) SS_DELAY(3) SS_TAP(X_1) SS_DELAY(3) SS_TAP(X_7) SS_DELAY(3) SS_TAP(X_3) SS_DELAY(3) SS_TAP(X_5));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) { // ' presssed, pass -> Pass = $2afl...
      SEND_STRING(SS_LSFT(SS_TAP(X_4)) SS_DELAY(3) SS_TAP(X_2) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_F) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_B) SS_DELAY(3) SS_TAP(X_G) SS_DELAY(3) SS_TAP(X_F) SS_DELAY(3) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) { // L pressed, lastname -> [L]astname = Moffett-Steinke
      SEND_STRING(SS_LSFT(SS_TAP(X_M)) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_F) SS_DELAY(5) SS_TAP(X_F) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_MINUS) SS_DELAY(3) SS_LSFT(SS_TAP(X_S)) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) { // N pressed, fullname -> full[N]ame = Kaelan Moffett-Steinke
      SEND_STRING(SS_LSFT(SS_TAP(X_K)) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_L) SS_DELAY(3) SS_TAP(X_A) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_SPACE) SS_DELAY(3) SS_LSFT(SS_TAP(X_M)) SS_DELAY(3) SS_TAP(X_O) SS_DELAY(3) SS_TAP(X_F) SS_DELAY(3) SS_TAP(X_F) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_MINUS) SS_DELAY(3) SS_LSFT(SS_TAP(X_S)) SS_DELAY(3) SS_TAP(X_T) SS_DELAY(3) SS_TAP(X_E) SS_DELAY(3) SS_TAP(X_I) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_K) SS_DELAY(3) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) { // / pressed, fix tst search and do a normal search instead
      SEND_STRING(SS_TAP(X_SLASH) SS_DELAY(5) SS_TAP(X_UP) SS_DELAY(300) SS_TAP(X_HOME) SS_DELAY(10) SS_LCTL(SS_TAP(X_RIGHT)) SS_DELAY(10) SS_TAP(X_RIGHT) SS_DELAY(10) SS_LSFT(SS_TAP(X_END)) SS_DELAY(300) SS_LCTL(SS_TAP(X_C)) SS_DELAY(70) SS_TAP(X_ESCAPE) SS_DELAY(100) SS_LCTL(SS_TAP(X_F)) SS_DELAY(30) SS_LCTL(SS_TAP(X_V)));
    }
    break;
    case ST_MACRO_30: // TERMINAL / wezterm STUFF --------------------------------
    if (record->event.pressed) {
      // SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(50) SS_TAP(X_T));
      SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(200) SS_TAP(X_T));
      // SEND_STRING(SS_DELAY(10) SS_LSFT(SS_TAP(X_A)) SS_DELAY(200) SS_TAP(X_9));
    }
    break; // RT1M + d pressed, Alt+T -> Tab
    case ST_MACRO_31:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(3) SS_LSFT(SS_TAP(X_TAB)));
    }
    break;  // RT1M + f pressed  Alt+T -> S-Tab
    case ST_MACRO_32:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(3) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_33:  // RT1M + c pressed  Alt+T -> c
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(3) SS_TAP(X_C));
    }
    break;
    case ST_MACRO_34:  // RT1M + j pressed  Alt+T -> j
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(3) SS_TAP(X_J));
    }
    break;
    case ST_MACRO_35:  // RT1M + k pressed  Alt+T -> k
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_T)) SS_DELAY(3) SS_TAP(X_K));
    }
    break;
    case ST_MACRO_36: // LT2B + t pressed -> create jobapp in obsidian
                      // yank position, super O,
    // #define SS_LCMD(string) SS_LGUI(string)
    // #define SS_LWIN(string) SS_LGUI(string)
    if (record->event.pressed) {
      // SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(600) SS_LCMD(SS_TAP(X_O)) SS_DELAY(400) SS_TAP(X_G) SS_DELAY(2) SS_TAP(X_G) SS_TAP(X_SLASH) SS_DELAY(50) SS_LSFT(SS_TAP(X_L)) SS_DELAY(5) SS_TAP(X_O) SS_DELAY(5) SS_TAP(X_G) SS_DELAY(5) SS_TAP(X_ENTER) SS_DELAY(200) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_ESCAPE) SS_DELAY(10) SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(1000) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(1000) SS_TAP(X_J)  SS_DELAY(1000) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(1000) SS_TAP(X_K) SS_DELAY(10) SS_LSFT(SS_TAP(X_6)) SS_DELAY(5) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_0) SS_DELAY(1000) SS_LSFT(SS_TAP(X_D)) SS_DELAY(1000) SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_T)  SS_DELAY(10) SS_TAP(X_N) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(1000) SS_TAP(X_P) SS_DELAY(10) SS_LCMD(SS_TAP(X_I)) SS_DELAY(400) SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(300) SS_LCMD(SS_TAP(X_O)) SS_DELAY(400) SS_TAP(X_W) SS_DELAY(5) SS_TAP(X_W) SS_DELAY(5) SS_TAP(X_L) SS_DELAY(5) SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(10) SS_LCMD(SS_TAP(X_I)));
      SEND_STRING(
         /* copy position  via tridactyl*/
         SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(600)
         SS_LCMD(SS_TAP(X_O)) SS_DELAY(400) SS_TAP(X_G) SS_DELAY(2) SS_TAP(X_G) SS_DELAY(50)
         /* search for # LogEnd */
         SS_TAP(X_SLASH) SS_DELAY(50) SS_LSFT(SS_TAP(X_3)) SS_DELAY(5) SS_TAP(X_SPACE) SS_DELAY(5) SS_LSFT(SS_TAP(X_L)) SS_DELAY(5) SS_TAP(X_O) SS_DELAY(5) SS_TAP(X_G) SS_DELAY(5) SS_LSFT(SS_TAP(X_E)) SS_DELAY(3) SS_TAP(X_N) SS_DELAY(3) SS_TAP(X_D) SS_DELAY(600) SS_TAP(X_ENTER) SS_DELAY(600)

         /* create new line above*/
         SS_TAP(X_K) SS_DELAY(500) SS_TAP(X_O) SS_DELAY(500) SS_TAP(X_ESCAPE) SS_DELAY(500)

         /* put the position text and trim it (incl. removing an extra newline) yank and delete the trimmed position name. */
         SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(800)
         /* delete what is usually an extra newline but sometimes seems to be the actual important line?? a */
         SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(800)
         /* delet the actual position line? */
         SS_TAP(X_J)  SS_DELAY(5) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(700)
         /* go down */
         SS_TAP(X_K)
         SS_DELAY(700)
         SS_LSFT(SS_TAP(X_6)) SS_DELAY(5) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_0) SS_DELAY(50) SS_LSFT(SS_TAP(X_D)) SS_DELAY(50)

         /* create new job task */
         SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_T)  SS_DELAY(10) SS_TAP(X_N) SS_TAP(X_J) SS_DELAY(100)

         /* put the trimmed position name */
         SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_P) SS_DELAY(600)

         /* return to firefox */
         SS_LCMD(SS_TAP(X_I)) SS_DELAY(400)

         /* copy job title via tridactyl*/
         SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(200)

         /* return to obsidian */
         SS_LCMD(SS_TAP(X_O)) SS_DELAY(500)

         /* position cursor at the task part of the job task*/
         SS_TAP(X_W) SS_DELAY(5) SS_TAP(X_W) SS_DELAY(5) SS_TAP(X_L) SS_DELAY(500)

         /* put the copied job title */
         SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(600)

         /* return to firefox */
         SS_LCMD(SS_TAP(X_I))
      );
    }
    break;
    case ST_MACRO_37: // LT2B + a pressed -> apply
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_LSFT(SS_TAP(X_A)) SS_DELAY(10) SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_A));
      // SS_DELAY(900) SS_TAP(X_Y) SS_DELAY(3) SS_TAP(X_Y) SS_DELAY(70) SS_LCTL(SS_TAP(X_W)) SS_DELAY(400) SS_TAP(X_T) SS_DELAY(800) SS_LCTL(SS_TAP(X_V)) SS_DELAY(30) SS_TAP(X_ENTER) SS_DELAY(500) SS_LSFT(SS_LCTL(SS_TAP(X_TAB))));
    }
    break;
    case ST_MACRO_38: // LT2B + s pressed -> save
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_S));
    }
    break;
    case ST_MACRO_39: // LT2B + d pressed -> hide / delete job
    if (record->event.pressed) {
        // currently executes both );h and );d but );d could be modified in tridactyl to have a composite of both ideally
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_40: // LT2B + f pressed -> filters
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(100) SS_TAP(X_SCOLON) SS_DELAY(100) SS_TAP(X_F));
    }
    break;
    case ST_MACRO_41: // LT2B + c pressed -> close tab
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W)));
    }
    break;
    case ST_MACRO_42:  // LT2B + b pressed -> bookmarks panel
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_L)) SS_DELAY(50) SS_TAP(X_ESCAPE) SS_DELAY(10) SS_TAP(X_TAB) SS_DELAY(10) SS_TAP(X_TAB) SS_DELAY(10) SS_TAP(X_TAB) SS_DELAY(10) SS_TAP(X_TAB) SS_DELAY(10) SS_TAP(X_TAB) SS_DELAY(10) SS_TAP(X_TAB) SS_DELAY(10) SS_TAP(X_UP)  SS_DELAY(10) SS_TAP(X_DOWN));
    }
    break;
    case ST_MACRO_43: // LT2B + u pressed -> yank job url
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_44: // LT2B + p pressed -> yank position & company name
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(100) SS_TAP(X_SCOLON) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_45: // LT2B + h pressed -> focus left pane
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_46:  // LT2B + j pressed -> next job
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_J) SS_DELAY(700) SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SCOLON) SS_DELAY(10) SS_TAP(X_L));
    }
    break;
    case ST_MACRO_47:   // LT2B + k pressed -> prev job
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0)) SS_DELAY(100) SS_TAP(X_SCOLON) SS_DELAY(100) SS_TAP(X_K));
    }
    break;
    case ST_MACRO_48:   // LT2B + l pressed -> focus right pane
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
    case 10: // LT2B_Num (Macros for linkedin... lol)
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
