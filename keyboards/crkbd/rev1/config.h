/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#pragma once

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_LED_COUNT 54
#    define RGB_MATRIX_SPLIT \
        { 27, 27 }
#    define SPLIT_TRANSPORT_MIRROR
#endif

// Luna
// #define OLED_TIMEOUT 120000
// #define OLED_BRIGHTNESS 120
// #define SPLIT_WPM_ENABLE

// #define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
// #define SPLIT_LAYER_STATE_ENABLE
// #define SPLIT_WPM_ENABLE //Enable WPM across split keyboards (+268).
// #define NO_ACTION_ONESHOT

// #define UNICODE_SELECTED_MODES UNICODE_MODE_MACOS
// #define UNICODE_CYCLE_PERSIST false

#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define DYNAMIC_KEYMAP_MACRO_COUNT 8

// Space Saving
#define NO_MUSIC_MODE