// Copyright 2023 Rui Chen (csric)
// SPDX-License-Identifier: GPL-2.0-or-later
#define DYNAMIC_KEYMAP_LAYER_COUNT 5
#include QMK_KEYBOARD_H

enum layers { BASE0, BASE1, MOD2, MOD3, MOD4 };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_SCRL, KC_PAUSE, KC_CAPS,
        KC_DEL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,       KC_BSPC,      KC_GRAVE,
        KC_TAB,       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      TG(1),
        MO(3),        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,   KC_QUOT, KC_ENT,              KC_PGUP,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,         KC_UP,    KC_PGDN,
         KC_LCTL,   KC_LGUI,   KC_LALT,      KC_SPC,            MO(2),          KC_RSFT,         KC_RCTL,  MO(4),  MO(2),   KC_LEFT, KC_DOWN,   KC_RGHT
    ),
    [BASE1] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     _______,
         _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,   _______,
          _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       _______,       _______,
            _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______,     _______, _______,
         _______,   _______,   _______,       _______,         _______,         KC_SPC,           _______, _______, _______, _______, _______, _______
    ),
    [MOD2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     _______,
         _______,    _______, _______, _______, _______, _______, _______, KC_PGUP,  KC_UP,  KC_PGDN, _______, _______, _______,    _______,   _______,
          _______,     _______, _______, _______, _______, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______,       _______,       _______,
            _______,       _______, _______, _______, _______, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, _______, _______,     _______,     KC_PGUP, _______,
         _______,   _______,   _______,       _______,         _______,         _______,          _______, _______, _______, KC_HOME, KC_PGDN, KC_END
    ),
    [MOD3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NUM,
        _______, _______, _______, _______, _______, _______, _______, KC_P7,  KC_P8,  KC_P9,  KC_PPLS, _______, _______,      _______,     _______,
         _______,    _______, _______, _______, _______, _______,  KC_P4,   KC_P4,  KC_P5,  KC_P6,  KC_PMNS, _______, _______,    _______,   _______,
          _______,     _______, _______, _______, _______, _______,  KC_P1,   KC_P1,  KC_P2,  KC_P3,  KC_PAST, _______,       _______,       _______,
            _______,       _______, _______, _______, _______,  KC_P0,   KC_P0,  KC_P0,  KC_P0,  KC_PDOT, KC_PSLS,     _______,      KC_UP,  _______,
         _______,   _______,   _______,       _______,         _______,          KC_P0,          _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [MOD4] = LAYOUT(
        RGB_TOG, KC_BRID, KC_BRIU, RGB_SAD, RGB_SAI, RGB_HUD, RGB_HUI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, RGB_SPD, RGB_SPI, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX,
         XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,   _______,
          _______,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX,       XXXXXXX,
            XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,     RGB_VAI, XXXXXXX,
         XXXXXXX,   XXXXXXX,   XXXXXXX,       XXXXXXX,         _______,         XXXXXXX,          XXXXXXX, _______, _______, RGB_RMOD, RGB_VAD, RGB_MOD
    )
};

/*
 LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     _______,
         _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,   _______,
          _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       _______,       _______,
            _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______,     _______, _______,
         _______,   _______,   _______,       _______,         _______,         _______,          _______, _______, _______, _______, _______, _______
    )


    LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX,
         XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,   XXXXXXX,
          XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX,       XXXXXXX,
            XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,     XXXXXXX, XXXXXXX,
         XXXXXXX,   XXXXXXX,   XXXXXXX,       XXXXXXX,         XXXXXXX,         XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    )



*/



led_config_t g_led_config = {
    {
        { 0,      1,      2,      3,      4,      5,      6,      7,      8,      9,      10,     11,     12,     13,     14,     15 },
        { 16,     17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27,     28,     NO_LED, 29,     30 },
        { 31,     NO_LED, 32,     33,     34,     35,     36,     37,     38,     39,     40,     41,     42,     43,     44,     45 },
        { 46,     NO_LED, 47,     48,     49,     50,     51,     52,     53,     54,     55,     56,     57,     58,     NO_LED, 59 },
        { NO_LED, 60,     61,     62,     63,     64,     65,     66,     67,     68,     69,     70,     NO_LED, 71,     72,     73 },
        { 74,     75,     NO_LED, 76,     77,     NO_LED, 78,     NO_LED, 79    , NO_LED, 80,     81,     82,     83,     84,     85 }
    },
    {
        {0, 0}, {14, 0}, {29, 0}, {44, 0}, {59, 0}, {74, 0}, { 89,  0}, {104,  0}, {119,  0}, {134,  0}, {149,  0}, {164,  0}, {179,  0}, {194,  0}, {209,  0}, {223,  0},
        {0,12}, {14,12}, {29,12}, {44,12}, {59,12}, {74,12}, { 89, 12}, {104, 12}, {119, 12}, {134, 12}, {149, 12}, {164, 12}, {179, 12},            {201, 12}, {223, 12},
        {3,25},          {22,25}, {37,25}, {52,25}, {67,25}, {82,25}, { 97, 25}, {112, 25}, {126, 25}, {141, 25}, {156, 25}, {171, 25},  {186, 25},  {205, 25}, {223, 25},
        {5,38},          {26,38}, {41,38}, {55,38}, {70,38}, {85,38}, {100, 38}, {115, 38}, {130, 38}, {145, 38}, {160, 38}, {175, 38},  {199, 38},             {223, 38},
                {9,51},  {33,51}, {48,51}, {63,51}, {78,51}, { 93, 51}, {108, 51}, {123, 51}, {138, 51}, {153, 51}, {168, 51},            {188, 51}, {209, 51}, {223, 51},
        {1,64}, {20,64},          {39,64}, {65,64},          { 91, 64},            {121, 64},            {149, 64}, {164, 64}, {179, 64}, {194, 64}, {209, 64}, {223, 64},
        {0, 0}, {1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5}, {6, 6}, {7, 7}, {8, 8}, {9, 9}
    },
    {
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,  4,   4,   4,   4,   4,   4,   4,   4,   4,   4,    4,   4,   4,
        4,   4,   4,   4,   4,   4,    4,   4,   4,   4,   4,   4,
        1,1,1,1,1,1,1,1,1,1
    }
};
