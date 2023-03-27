// Copyright 2023 Rui Chen (csric)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#define DYNAMIC_KEYMAP_LAYER_COUNT 5
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
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX,
         XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,   XXXXXXX,
          XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX,       XXXXXXX,
            XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,     XXXXXXX, XXXXXXX,
         XXXXXXX,   XXXXXXX,   XXXXXXX,       XXXXXXX,         XXXXXXX,         XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
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
