#include QMK_KEYBOARD_H

// Make special keycodes more visible
#define ____ KC_TRNS
#define XXXX KC_NO

// Layer definition
#define BL 0  // Base layer
#define ML 1  // Mac layer
#define NL 2  // Numpad layer
#define VL 3  // Vim layer
#define SL 4  // Settings layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Base layer - ANSI QWERTY
[BL] = LAYOUT_all(
	KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, XXXX, KC_BSPC,         // 15
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,              // 14
	LT(NL, KC_ESCAPE), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,          // 13
	KC_LSFT, XXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,  // 15
	KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(SL), LT(VL, KC_SPC), KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT),   // 11

// Swap left GUI and left ALT for Mac
[ML] = LAYOUT_all(
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, XXXX, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, XXXX, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, KC_LALT, KC_LGUI, ____, ____, ____, ____, ____, ____, ____, ____),


// Number pad layer
[NL] = LAYOUT_all(
	____, ____, ____, ____, ____, ____, ____, ____, KC_EQUAL, KC_SLASH, KC_ASTERISK, ____, ____, XXXX, ____,
	____, ____, ____, ____, ____, ____, ____, KC_7, KC_8, KC_9, KC_MINUS, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, KC_4, KC_5, KC_6, KC_PLUS, ____, ____,
	____, XXXX, ____, ____, ____, ____, ____, ____, KC_1, KC_2, KC_3, KC_ENTER, ____, ____, ____,
	____, ____, ____, ____, ____, KC_0, KC_DOT, ____, ____, ____, ____),

// LDUR Vim layer
[VL] = LAYOUT_all(
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, XXXX, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, ____, ____, ____,
	____, XXXX, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

// Setup layer - Reset
[SL] = LAYOUT_all(
	RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, XXXX, KC_DEL,
	____, ____, TG(ML), ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, XXXX, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, RESET,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

};

