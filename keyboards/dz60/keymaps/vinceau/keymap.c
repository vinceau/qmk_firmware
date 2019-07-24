#include QMK_KEYBOARD_H

// Make special keycodes more visible
#define ____ KC_TRNS
#define XXXX KC_NO

// Layer definition
#define L0 0
#define L1 1
#define L2 2
#define L3 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Base layer - ANSI QWERTY
[L0] = LAYOUT_all(
	KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, XXXX, KC_BSPC,
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
	LT(L1, KC_ESCAPE), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
	KC_LSFT, XXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, MO(L3),
	KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, LT(L2, KC_SPC), KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT),

// Number pad layer
[L1] = LAYOUT_all(
	____, ____, ____, ____, ____, ____, ____, ____, KC_KP_EQUAL, KC_KP_SLASH, KC_KP_ASTERISK, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_MINUS, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_PLUS, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER, ____, ____, ____,
	____, ____, ____, ____, ____, KC_KP_0, KC_KP_DOT, ____, ____, ____, ____),

// LDUR Vim layer
[L2] = LAYOUT_all(
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

// Setup layer - Reset
[L3] = LAYOUT_all(
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, RESET,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

};

