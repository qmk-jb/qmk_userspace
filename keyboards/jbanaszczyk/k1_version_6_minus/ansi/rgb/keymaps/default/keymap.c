/* Copyright 2024 ~ 2025 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include <stdint.h>
#include "quantum.h"
#include "keymap_extras/keymap_polish.h"

enum layers {
    WIN_BASE,
    WIN_FN,
    WIN_PL
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [WIN_BASE] = LAYOUT_ansi_87(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,    KC_PSCR,  DM_PLY1,  KC_WAKE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,   KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,   KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,             KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 MO(WIN_PL),KC_RGUI, MO(WIN_FN), KC_RCTL,   KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_ansi_87(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   QK_BOOT,    KC_PWR,   KC_SLEP,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,    _______,  _______,
        UG_TOGG,  UG_NEXT,  UG_VALU,  UG_HUEU,  UG_SATU,  UG_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,    _______,  _______,
        _______,  UG_PREV,  UG_VALD,  UG_HUED,  UG_SATD,  UG_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,               KC_VOLU,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,   KC_MUTE,    KC_VOLD,  KC_MPLY),

    [WIN_PL] = LAYOUT_ansi_87(
        _______,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,    DM_REC1,  DM_RSTP,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,   XXXXXXX,    XXXXXXX,  XXXXXXX,
        _______,  XXXXXXX,  XXXXXXX,  PL_EOGO,  XXXXXXX,  XXXXXXX,  XXXXXXX,  PL_EURO,  XXXXXXX,  PL_OACU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,    XXXXXXX,  XXXXXXX,
        _______,  PL_AOGO,  PL_SACU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  PL_LSTR,  XXXXXXX,  XXXXXXX,            _______,
        _______,            PL_ZDOT,  PL_ZACU,  PL_CACU,  XXXXXXX,  XXXXXXX,  PL_NACU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            _______,             KC_UP,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,   KC_LEFT,  KC_DOWN,  KC_RGHT)
};
// clang-format on

