/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x0F, 0x81, 0xB5, 0x2B, 0x7C, 0x80, 0xCE, 0xCC}
#define VIAL_UNLOCK_COMBO_ROWS { 3, 5 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 3 }

// Reduce firmware size by decreasing number of functions
#define DYNAMIC_KEYMAP_LAYER_COUNT 3
#define DYNAMIC_KEYMAP_MACRO_COUNT 16
#define VIAL_COMBO_ENTRIES 4
#define VIAL_KEY_OVERRIDE_ENTRIES 4
#define VIAL_TAP_DANCE_ENTRIES 4
