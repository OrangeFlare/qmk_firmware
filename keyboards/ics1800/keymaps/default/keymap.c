#include "rev2/rev2.h"

#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT( \
        KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPACE, KC_NUMLOCK, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, \
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRACKET, KC_RBRACKET, KC_BSLASH, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS, \
        KC_CAPSLOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE, KC_ENT, KC_NO, KC_KP_4, KC_KP_5, KC_KP_6, KC_NO, \
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT, KC_UP, KC_NO, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER, \
        KC_LCTRL, KC_LGUI, KC_LALT, KC_NO, KC_NO, KC_SPC, KC_NO, KC_NO, KC_RALT, MO(_FL), KC_RCTRL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, KC_KP_0, KC_KP_DOT, KC_NO),
    [_FL] = LAYOUT( \
    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NO, _______, _______, _______, KC_NO, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NO, _______, _______, _______, _______, \
    _______, KC_RGUI, _______, KC_NO, KC_NO, _______, KC_NO, KC_NO, _______, MO(_FL), _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, _______, _______, KC_NO)
};
