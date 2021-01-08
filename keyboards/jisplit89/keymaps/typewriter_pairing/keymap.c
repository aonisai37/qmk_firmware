/*
Copyright 2020 Salicylic_Acid

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_jp.h"

enum jtu_custom_keycodes {
  JU_2 = SAFE_RANGE,
  JU_6,
  JU_7,
  JU_8,
  JU_9,
  JU_0,
  JU_MINS,
  JU_EQL,
  JU_BSLS,
  JU_SCLN,
  JU_QUOT,
  JU_GRV,
  JTU_SAFE_RANGE
};

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum custom_keycodes {
  CUSTOM_KEY_CODE_A = JTU_SAFE_RANGE, // 変更
  CUSTOM_KEY_CODE_B,
  CUSTOM_KEY_CODE_C
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,-----------------------------------------------------|   |--------------------------------------------------------------------------------.
       KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS, KC_PSCR,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
       JU_GRV,    KC_1,    JU_2,    KC_3,    KC_4,    KC_5,        JU_6,    JU_7,    JU_8,    JU_9,    JU_0, JU_MINS, JU_EQL,  JP_YEN, KC_BSPC,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, JP_LBRC, JP_RBRC,  KC_ENT, KC_HOME,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    KC_L, JU_SCLN, JU_QUOT, JU_BSLS,           KC_END,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, JP_BSLS, KC_PGDN,   KC_UP, KC_PGUP,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
     KC_LCTRL, KC_LGUI, KC_LALT, KC_MHEN,  KC_SPC,  KC_SPC,      KC_SPC,  KC_SPC, KC_HENK, KC_KANA,  KC_APP,          KC_LEFT, KC_DOWN,KC_RIGHT
  //`-----------------------------------------------------|   |--------------------------------------------------------------------------------'
  ),
  [1] = LAYOUT( /* Base */
  //,-----------------------------------------------------|   |--------------------------------------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
        MO(1), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX
  //`-----------------------------------------------------|   |--------------------------------------------------------------------------------'
  ),
  [2] = LAYOUT( /* Base */
  //,-----------------------------------------------------|   |--------------------------------------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX
  //`-----------------------------------------------------|   |--------------------------------------------------------------------------------'
  )
};

void pressed_custom_user(bool isshift, uint16_t  reg_shift, uint16_t key, uint16_t key_shift, bool is_reg_othershiftkey, uint16_t othe_shiftkey, bool is_reg_otherkey, uint16_t othe_key) {
    if (isshift) {
        unregister_code(reg_shift);
        if (is_reg_othershiftkey) register_code(othe_shiftkey);
        register_code(key_shift);
        unregister_code(key_shift);
        if (is_reg_othershiftkey) unregister_code(othe_shiftkey);
        register_code(reg_shift);
    } else {
        if (is_reg_otherkey) register_code(othe_key);
        register_code(key);
        unregister_code(key);
        if (is_reg_otherkey) unregister_code(othe_key);
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool lshift = keyboard_report->mods & MOD_BIT(KC_LSFT);
  bool rshift = keyboard_report->mods & MOD_BIT(KC_RSFT);
  bool isshift = lshift || rshift;
  switch (keycode) {
    case JU_2:
      if (record->event.pressed) {
        pressed_custom_user(isshift, lshift ? KC_LSFT : KC_RSFT, KC_2, KC_LBRC, false, 0x00, false, 0x00);
      }
      return false;
    case JU_6:
      if (record->event.pressed) {
        pressed_custom_user(isshift, lshift ? KC_LSFT : KC_RSFT, KC_6, KC_EQL, false, 0x00, false, 0x00);
      }
      return false;
    case JU_7:
      if (record->event.pressed) {
        pressed_custom_user(isshift, lshift ? KC_LSFT : KC_RSFT, KC_7, KC_6, true, KC_LSFT, false, 0x00);
      }
      return false;
    case JU_8:
      if (record->event.pressed) {
        pressed_custom_user(isshift, lshift ? KC_LSFT : KC_RSFT, KC_8, KC_QUOT, true, KC_LSFT, false, 0x00);
      }
      return false;
    case JU_9:
      if (record->event.pressed) {
        pressed_custom_user(isshift, lshift ? KC_LSFT : KC_RSFT, KC_9, KC_8, true, KC_LSFT, false, 0x00);
      }
      return false;
    case JU_0:
      if (record->event.pressed) {
        pressed_custom_user(isshift, lshift ? KC_LSFT : KC_RSFT, KC_0, KC_9, true, KC_LSFT, false, 0x00);
      }
      return false;
    case JU_MINS:
      if (record->event.pressed) {
        pressed_custom_user(isshift, lshift ? KC_LSFT : KC_RSFT, KC_MINS, KC_INT1, true, KC_LSFT, false, 0x00);
      }
      return false;
    case JU_EQL:
      if (record->event.pressed) {
        pressed_custom_user(isshift, lshift ? KC_LSFT : KC_RSFT, KC_MINS, KC_SCLN, true, KC_LSFT, true, KC_LSFT);
      }
      return false;
    case JU_BSLS:
      if (record->event.pressed) {
        pressed_custom_user(isshift, lshift ? KC_LSFT : KC_RSFT, KC_INT3, KC_INT1, true, KC_LSFT, false, 0x00);
      }
      return false;
    case JU_SCLN:
      if (record->event.pressed) {
        pressed_custom_user(isshift, lshift ? KC_LSFT : KC_RSFT, KC_SCLN, KC_QUOT, false, 0x00, false, 0x00);
      }
      return false;
    case JU_QUOT:
      if (record->event.pressed) {
        pressed_custom_user(isshift, lshift ? KC_LSFT : KC_RSFT, KC_7, KC_2, true, KC_LSFT, true, KC_LSFT);
      }
      return false;
    case JU_GRV:
      if (record->event.pressed) {
        pressed_custom_user(isshift, lshift ? KC_LSFT : KC_RSFT, KC_EQL, KC_LBRC, true, KC_LSFT, true, KC_LSFT);
      }
      return false;
  }
  return true;
}