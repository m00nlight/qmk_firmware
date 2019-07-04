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
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    K11, K12, K13, K14, K15, K16,       TG,  K18, K19, K110, K111, K112, K113,        K114, K115, K116, K117, K118, K119, \
    K21, K22, K23, K24, K25, K26,       K27, K28, K29, K210, K211, K212, K213,        K214, K215, K216, K217, K218, K219, \
    K31, K32, K33, K34, K35, K36,       K37, K38, K39, K310, K311, K312, K313,        K314, K315, K316, K317, K318, K319, \
    FN1, K42, K43, K44, K45, K46,       K47, K48, K49, K410, K411, K412, K413,        K414, K415, K416, K417, K418, FN2,  \
    K51, K52, K53, K54, K55, K56,                                                     K514, K515, K516, K517, K518, K519, \
         K62, K63, K64, K65,                                                                K615, K616, K617, K618,       \
                                        K57, K58, K59,       K511, K512, K513,                                            \
                                        K67, K68, K69,       K611, K612, K613,                                            \
                                             K78, K79,       K711, K712                                                   \
) { \
	     { KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, TG,       KC_##K18, KC_##K19, KC_##K110, KC_##K111, KC_##K112, KC_##K113, KC_##K114, KC_##K115, KC_##K116, KC_##K117, KC_##K118, KC_##K119  }, \
	     { KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K25, KC_##K26, KC_##K27, KC_##K28, KC_##K29, KC_##K210, KC_##K211, KC_##K212, KC_##K213, KC_##K214, KC_##K215, KC_##K216, KC_##K217, KC_##K218, KC_##K219  }, \
	     { KC_##K31, KC_##K32, KC_##K33, KC_##K34, KC_##K35, KC_##K36, KC_##K37, KC_##K38, KC_##K39, KC_##K310, KC_##K311, KC_##K312, KC_##K313, KC_##K314, KC_##K315, KC_##K316, KC_##K317, KC_##K318, KC_##K319  }, \
	     { FN1,      KC_##K42, KC_##K43, KC_##K44, KC_##K45, KC_##K46, KC_##K47, KC_##K48, KC_##K49, KC_##K410, KC_##K411, KC_##K412, KC_##K413, KC_##K414, KC_##K415, KC_##K416, KC_##K417, KC_##K418, FN2        }, \
	     { KC_##K51, KC_##K52, KC_##K53, KC_##K54, KC_##K55, KC_##K56, KC_##K57, KC_##K58, KC_##K59, KC_NO,     KC_##K511, KC_##K512, KC_##K513, KC_##K514, KC_##K515, KC_##K516, KC_##K517, KC_##K518, KC_##K519  }, \
	     { KC_NO,    KC_##K62, KC_##K63, KC_##K64, KC_##K65, KC_NO,    KC_##K67, KC_##K68, KC_##K69, KC_NO,     KC_##K611, KC_##K612,KC_##K613, KC_NO,      KC_##K615, KC_##K616, KC_##K617, KC_##K618, KC_NO      }, \
	     { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_##K78, KC_##K79, KC_NO,     KC_##K711, KC_##K712, KC_NO,    KC_NO,      KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO      }, \
}



