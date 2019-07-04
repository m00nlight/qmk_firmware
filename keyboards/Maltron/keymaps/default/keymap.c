/* Copyright 2019 m00nlight
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

#include "Maltron.h"

#define _BL  0   // base layer, dvorak
#define _F1  1   // FN1 layer when hold fn1
#define _F2  2   // Fn2 layer when hold fn2
#define _ML  3   // maltron layer


// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT( /* Base layer */
F1,     F2,  F3,  F4,  F5,  F6,      TG(_ML), NLCK,  P7,  P8,  P9,   PAST,  SLCK,      F7,  F8, F9,  F10,  F11, F12,     \
ESC,    1,   2,   3,   4,   5,       PSCR,    PEQL,  P4,  P5,  P6,   PSLS,  PAUS,      6,   7,  8,   9,    0,   GRV,     \
PGUP,   QUOT,COMM,DOT, P,   Y,       APP,     PMNS,  P1,  P2,  P3,   PPLS,  ALGR,      F,   G,  C,   R,    L,   PGDN,    \
MO(_F1),A,   O,   E,   U,   I,       PGUP,    PENT,  P0,  INS, BSPC, PDOT,  PGDN,      D,   H,  T,   N,    S,   MO(_F2), \
LSFT,   SCLN,Q,   J,   K,   X,                                                         B,   M,  W,   V,    Z,   RSFT,    \
        LWIN,BSLS,LBRC,MINS,                                                                EQL,RBRC,SLSH, RWIN,         \
	                             BSPC,    LCTL,  LALT,     RALT, RCTL,  DEL,                                         \
				     ENT,     TAB,   HOME,     END,  ENT,   SPC,                                         \
				              LEFT,  UP,       DOWN, RIGHT                                               \
  ),
  [_F1] = LAYOUT( /* FN1 layer, numberpad key */
TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,    KC_TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,        TRNS,7,   8,   9,  TRNS,TRNS,      \
KC_TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,        TRNS,4,   5,   6,  TRNS,KC_TRNS,   \
TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,                                                     TRNS,1,   2,   3,  TRNS,TRNS,      \
        TRNS,TRNS,TRNS,TRNS,                                                               0,   TRNS,TRNS,TRNS,          \
                                       TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS,                                         \
				       TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS,                                         \
				             HOME, PGUP,       PGDN, END                                                 \
  ),
  [_F2] = LAYOUT( /* FN2 layer, mouse key www key and volume key */
TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,    KC_TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
TRNS,   ACL0,ACL1,ACL2,TRNS,TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
TRNS,   BTN1,MS_U,BTN2,WBAK,WFWD,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
KC_TRNS,MS_L,TRNS,MS_R,VOLD,VOLU,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,        TRNS,TRNS,TRNS,TRNS,TRNS,KC_TRNS,  \
TRNS,   WH_U,MS_D,WH_D,MPRV,MNXT,                                                     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
        TRNS, TRNS, TRNS,TRNS,                                                             TRNS,TRNS,TRNS,TRNS,          \
                                       TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS,                                         \
				       TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS,                                         \
				             HOME, PGUP,       PGDN, END                                                 \
  ),
  [_ML] = LAYOUT( /* maltron layer */
F1,     F2,  F3,  F4,  F5,  F6,      KC_TRNS, NLCK,  P7,  P8,  P9,   PAST,  SLCK,      F7,  F8, F9,  F10,  F11, F12,     \
ESC,    1,   2,   3,   4,   5,       PSCR,    PEQL,  P4,  P5,  P6,   PSLS,  PAUS,      6,   7,  8,   9,    0,   GRV,     \
PGUP,   Q,   P,   Y,   C,   B,       APP,     PMNS,  P1,  P2,  P3,   PPLS,  ALGR,      V,   M,  U,   Z,    L,   PGDN,    \
KC_TRNS,A,   N,   I,   S,   F,       PGUP,    PENT,  P0,  INS, BSPC, PDOT,  PGDN,      D,   T,  H,   O,    R,   KC_TRNS, \
LSFT,   COMM,DOT, J,   G,   SCLN,                                                      QUOT,W,  K,   MINS, X,   RSFT,    \
        LWIN,BSLS,LBRC,MINS,                                                                EQL,RBRC,SLSH, RWIN,         \
	                             BSPC,    LCTL,  LALT,     RALT, RCTL,  DEL,                                         \
				     E,       TAB,   HOME,     END,  ENT,   SPC,                                         \
				              LEFT,  UP,       DOWN, RIGHT                                               \
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
