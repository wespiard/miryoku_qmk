#include "keycode.h"
#include QMK_KEYBOARD_H

enum layer_number {
  // _QWERTY = 0,
  _COLEMAK = 0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* QWERTY
   * ,-----------------------------------------.                    ,-----------------------------------------.
   * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * |LCTRL |   A  |   S  |   D  |   F  |   G  |                    |   H  |   J  |   K  |   L  |   ;  |  '   |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * |LShift|   Z  |   X  |   C  |   V  |   B  |                    |   N  |   M  |   ,  |   .  |   /  |RShift|
   * `-----------------------------------------/                    |-----------------------------------------'
   *                             | LAlt | LGUI | SPACE|      |ENTER |BackSP| RGUI |
   *                             |      |      |      |      |      |      |      |
   *                             `--------------------'      `--------------------'
   */

   [_COLEMAK] = LAYOUT(
    KC_NO,    KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,
    KC_NO,    KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                     KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_NO,
    KC_NO,    KC_A,   KC_R,    KC_S,    KC_T,    KC_G,                     KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_NO,
    KC_NO,    KC_Z,   KC_X,    KC_C,    KC_D,    KC_V,                     KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,
                               KC_ESC,  KC_BSPC, KC_LSFT,                  KC_ENT,  KC_SPC,  KC_DEL
    )

   /* [_QWERTY] = LAYOUT(
    KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
    KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
    KC_LCTRL, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,                     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                               KC_LALT, KC_LGUI, KC_SPC,                   KC_ENT,  KC_BSPC, KC_RGUI
  ) */
};
