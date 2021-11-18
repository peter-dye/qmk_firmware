/* Copyright 2021 Peter Dye
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    BASE,
    LEFT,
    RIGHT,
    MOUSE
};

// Leaving in as exampl code
// Defines the keycodes used by our macros in process_record_user
// enum custom_keycodes {
//     QMKBEST = SAFE_RANGE,
//     QMKURL
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT(
        KC_ESC,    KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
        KC_TAB,    KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,     KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
       KC_LSFT,    KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,     KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
       KC_LCTL, KC_LALT,MO(MOUSE), KC_LGUI,MO(LEFT),  KC_ENT,  KC_SPC,MO(RIGHT), KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT
    ),

    [LEFT] = LAYOUT(
        KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
       _______, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX,  KC_EQL, KC_MINS, KC_LBRC, KC_RBRC, KC_BSLS, _______,
       _______, XXXXXXX, KC_MPRV, KC_MSTP, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______,
       _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
    ),

    [RIGHT] = LAYOUT(
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DM_REC1, DM_REC2, XXXXXXX,  KC_INS,  KC_DEL,
       KC_CAPS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6, DM_PLY1, DM_PLY2, XXXXXXX, XXXXXXX, _______,
       _______,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, DM_RSTP, XXXXXXX, XXXXXXX, XXXXXXX, _______,
       _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [MOUSE] = LAYOUT(
         RESET, XXXXXXX, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
       XXXXXXX, XXXXXXX, KC_BTN1, KC_BTN2, KC_BTN3, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
       _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
       _______, _______, _______, XXXXXXX, _______, _______, XXXXXXX, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R
    )
};

// Leaving in as example code
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case QMKBEST:
//             if (record->event.pressed) {
//                 // when keycode QMKBEST is pressed
//                 SEND_STRING("QMK is the best thing ever!");
//             } else {
//                 // when keycode QMKBEST is released
//             }
//             break;
//         case QMKURL:
//             if (record->event.pressed) {
//                 // when keycode QMKURL is pressed
//                 SEND_STRING("https://qmk.fm/\n");
//             } else {
//                 // when keycode QMKURL is released
//             }
//             break;
//     }
//     return true;
// }
