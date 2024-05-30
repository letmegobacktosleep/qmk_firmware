/*
Copyright 2022 Zykrah

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_ortho_4x4(
    KC_P7,          KC_P8,      KC_P9,        KC_KP_PLUS,
    KC_P4,          KC_P5,      KC_P6,        KC_KP_MINUS,
    KC_P1,          KC_P2,      KC_P3,        KC_EQUAL,
    MO(1),          KC_P0,      KC_PDOT,      KC_KP_ENTER),

  [1] = LAYOUT_ortho_4x4(
    KC_BACKSPACE,  KC_UP,      KC_DELETE,    KC_KP_ASTERISK,
    KC_LEFT,       KC_DOWN,    KC_RIGHT,     KC_KP_SLASH,
    LCTL(KC_A),    LCTL(KC_X), LCTL(KC_C),   LCTL(KC_V),
    _______,       MO(4),      LCTL(KC_Z),   LCTL(KC_Y)),

  [2] = LAYOUT_ortho_4x4(
    KC_P7,          KC_P8,      KC_P9,        KC_KP_PLUS,
    KC_P4,          KC_P5,      KC_P6,        KC_KP_MINUS,
    KC_P1,          KC_P2,      KC_P3,        KC_EQUAL,
    MO(3),          KC_P0,      KC_PDOT,      KC_KP_ENTER),

  [3] = LAYOUT_ortho_4x4(
    KC_BACKSPACE,  KC_UP,      KC_DELETE,    KC_KP_ASTERISK,
    KC_LEFT,       KC_DOWN,    KC_RIGHT,     KC_KP_SLASH,
    LCMD(KC_A),    LCMD(KC_X), LCMD(KC_C),   LCMD(KC_V),
    _______,       MO(4),      LCMD(KC_Z),   LCMD(KC_Y)),

  [4] = LAYOUT_ortho_4x4(
    KC_LPRN,       KC_PGUP,    KC_RPRN,      KC_CIRC,
    KC_HOME,       KC_PGDN,    KC_END,       KC_PERC,
    KC_NUM,        KC_INSERT,  XXXXXXX,      XXXXXXX,
    _______,       _______,    DF(0),        DF(2)),

};

