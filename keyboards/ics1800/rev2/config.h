#pragma once

#define PRODUCT_ID      0x1800
#define PRODUCT         ICS1800

#define MATRIX_ROWS     5
#define MATRIX_COLS     18

#define MATRIX_ROW_PINS { D3, D2, D1, D0, D4 }
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5, F0, F1, C7, D5, B7, B6, B2, B3, B1, F7, F6, F5, F4 }
#define UNUSED_PINS     { B0 }
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM    100
#define DEBOUNCE        5
