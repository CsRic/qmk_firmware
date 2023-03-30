// Copyright 2023 Rui Chen (csric)
// SPDX-License-Identifier: GPL-2.0-or-later
#define DYNAMIC_KEYMAP_LAYER_COUNT 5
#include QMK_KEYBOARD_H

enum layers { BASE0, BASE1, MOD2, MOD3, MOD4 };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PAUSE, KC_SCRL, KC_CAPS,
        KC_DEL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,       KC_BSPC,      TG(1),
        KC_TAB,       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      KC_GRAVE,
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
            _______,       _______, _______, _______, _______, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, KC_WH_R, _______,     _______,     KC_PGUP, _______,
         _______,   _______,   _______,       _______,         _______,         _______,          _______, _______, _______, KC_HOME, KC_PGDN, KC_END
    ),
    [MOD3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NUM,
        KC_GRAVE, _______, _______, _______, _______, _______, _______, KC_P7,  KC_P8,  KC_P9,  KC_PMNS, _______, _______,      _______,     _______,
         KC_GRAVE,    _______, _______, _______, _______, _______,  KC_P4,   KC_P4,  KC_P5,  KC_P6,  KC_PPLS, _______, _______,    _______,   _______,
          _______,     _______, _______, _______, _______, _______,  KC_P1,   KC_P1,  KC_P2,  KC_P3,  KC_PAST, _______,       _______,       _______,
            _______,       _______, _______, _______, _______,  KC_P0,   KC_P0,  KC_P0,  KC_P0,  KC_PDOT, KC_PSLS,     _______,      KC_UP,  _______,
         _______,   _______,   _______,       _______,         _______,          KC_P0,          _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [MOD4] = LAYOUT(
        RGB_TOG, KC_BRID, KC_BRIU, RGB_SAD, RGB_SAI, RGB_HUD, RGB_HUI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, RGB_SPD, RGB_SPI, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX,
         XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,   XXXXXXX,
          _______,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX,       XXXXXXX,
            XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,     RGB_VAI, XXXXXXX,
         XXXXXXX,   XXXXXXX,   XXXXXXX,       XXXXXXX,         _______,         XXXXXXX,          XXXXXXX, _______, _______, RGB_RMOD, RGB_VAD, RGB_MOD
    )
};

//  NK_TOGG
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
        { 94,     93,     91,     90,     89,     88,     86,     85,     84,     83,     81,     80,     79,     78,     76,     75 },
        { 60,     61,     62,     63,     64,     65,     66,     67,     68,     69,     70,     71,     72,     NO_LED, 73,     74 },
        { 59,     NO_LED, 58,     57,     56,     55,     54,     53,     52,     51,     50,     49,     48,     47,     46,     45 },
        { 30,     NO_LED, 31,     32,     33,     34,     35,     36,     37,     38,     39,     40,     41,     42,     NO_LED, 43 },
        { NO_LED, 29,     28,     27,     26,     25,     24,     23,     22,     21,     20,     19,     NO_LED, 18,     17,     16 },
        { 0 ,     1 ,     NO_LED, 3 ,     4 ,     NO_LED, 6 ,     NO_LED, 7     , NO_LED, 9 ,     10 ,     11 ,   12 ,    14,     15 }
    },
    /*
    {
        {  0,  0},     { 14,  0},    { 29,  0},    { 44,  0},    { 59,  0},    { 74,  0},    { 89,  0},   {104,  0},    {119,  0},    {134,  0},    {149,  0},    {164,  0},    {179,  0},    {194,  0},    {209,  0},    {223,  0},
        {  0, 12},     { 14, 12},    { 29, 12},    { 44, 12},    { 59, 12},    { 74, 12},    { 89, 12},   {104, 12},    {119, 12},    {134, 12},    {149, 12},    {164, 12},    {179, 12},                  {201, 12},    {223, 12},
        {  3, 25},                   { 22, 25},    { 37, 25},    { 52, 25},    { 67, 25},    { 82, 25},   { 97, 25},    {112, 25},    {126, 25},    {141, 25},    {156, 25},    {171, 25},    {186, 25},    {205, 25},    {223, 25},
        {  5, 38},                   { 26, 38},    { 41, 38},    { 55, 38},    { 70, 38},    { 85, 38},   {100, 38},    {115, 38},    {130, 38},    {145, 38},    {160, 38},    {175, 38},    {199, 38},                  {223, 38},
                       {  9, 51},    { 33, 51},    { 48, 51},    { 63, 51},    { 78, 51},    { 93, 51},   {108, 51},    {123, 51},    {138, 51},    {153, 51},    {168, 51},                  {188, 51},    {209, 51},    {223, 51},
        {  1, 64},     { 20, 64},                  { 39, 64},    { 65, 64},                  { 91, 64},                 {121, 64},                  {149, 64},    {164, 64},    {179, 64},    {194, 64},    {209, 64},    {223, 64},
        {0, 0}, {0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0}
    },
    */
    {
        {  1, 64},     { 20, 64},       /*lld*/{30,64},      { 39, 64},    { 65, 64},    /*ld*/{81,64},       { 91, 64},            {121, 64},  /*rd*/{137,64},      {149, 64},    {164, 64},    {179, 64},    {194, 64},  /*rrd*/{201,64}, {209, 64},   {223, 64},
            {223, 51},{209, 51},    {188, 51},{168, 51},{153, 51}, {138, 51}, {123, 51}, {108, 51},   { 93, 51},{ 78, 51}, { 63, 51},{ 48, 51}, { 33, 51},  {  9, 51},
        {  5, 38},                   { 26, 38},    { 41, 38},    { 55, 38},    { 70, 38},    { 85, 38},   {100, 38},    {115, 38},    {130, 38},    {145, 38},    {160, 38},    {175, 38},    {199, 38},                  {223, 38},
               /*r*/{223,31}, {223, 25},{205, 25},  {186, 25}, {171, 25}, {156, 25}, {141, 25}, {126, 25},   {112, 25},   { 97, 25},  { 82, 25},  { 67, 25},{ 52, 25}, { 37, 25}, { 22, 25}, {  3, 25},
        {  0, 12},     { 14, 12},    { 29, 12},    { 44, 12},    { 59, 12},    { 74, 12},    { 89, 12},   {104, 12},    {119, 12},    {134, 12},    {149, 12},    {164, 12},    {179, 12},                  {201, 12},    {223, 12},
          {223,  0},{209,  0}, /*rru*/{201,31},  {194,  0}, {179,  0}, {164,  0}, {149,  0}, /*ru*/{137,0},{134,  0}, {119,  0},  {104,  0},  { 89,  0}, /*lu*/{81,0},{ 74,  0},  { 59,  0},   { 44,  0},  { 29,  0}, /*llu*/{30,0}, { 14,  0},  {  0,  0}, /*l*/{0,31}

    },
    {
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,  4,   4,   4,   4,   4,   4,   4,   4,   4,   4,    4,   4,   4,
        4,   4,   4,   4,   4,   4,    4,   4,   4,   4,   4,   4,
        4,4,4,4,4,4,4,4,4,4
    }
};




// light for pressed keys !!!!!
// bool pos_to_hold_l[RGB_MATRIX_LED_COUNT] = {0};

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
// uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
    uint8_t pos =
        g_led_config.matrix_co[record->event.key.row][record->event.key.col];
    if (record->event.pressed) {
        pos_to_hold_l[pos] = 1;
    } else {
        pos_to_hold_l[pos] = 0;
    }
    return true;
}
*/

// custom lights !!!!

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer = get_highest_layer(layer_state);
    // RGB rgb = hsv_to_rgb(rgb_matrix_get_hsv());
    // layer indicater
        //numpad & grave layer
        if(layer == MOD3){
            rgb_matrix_set_color_all(0, 0, 0);
            rgb_matrix_set_color(37, 240, 240, 240);  // 1
            rgb_matrix_set_color(38, 240, 240, 240); // 2
            rgb_matrix_set_color(39, 240, 240, 240); // 3
            rgb_matrix_set_color(52, 240, 240, 240); // 4
            rgb_matrix_set_color(51, 240, 240, 240); // 5
            rgb_matrix_set_color(50, 240, 240, 240); // 6
            rgb_matrix_set_color(67, 240, 240, 240); // 7
            rgb_matrix_set_color(68, 240, 240, 240); // 8
            rgb_matrix_set_color(69, 240, 240, 240); // 9

            rgb_matrix_set_color(59, 240, 240, 240); // grave
            rgb_matrix_set_color(60, 240, 240, 240); // still grave
        }
        //Navigate layer
        else if(layer == MOD2){
            rgb_matrix_set_color_all(0, 0, 0);
            rgb_matrix_set_color(37, 240, 240, 240); // left
            rgb_matrix_set_color(38, 240, 240, 240); // down
            rgb_matrix_set_color(39, 240, 240, 240); // right
            rgb_matrix_set_color(51, 240, 240, 240); // up

            rgb_matrix_set_color(12, 240, 240, 240); // home
            rgb_matrix_set_color(14, 240, 240, 240); // page down
            rgb_matrix_set_color(15, 240, 240, 240); // end
            rgb_matrix_set_color(17, 240, 240, 240); // page up
        }
        // system layer
        else if(layer == MOD4){
            uint8_t pos_l[19] = {94, 93, 91, 90, 89, 88, 86, 85, 84, 83,
                             81, 80, 79, 78, 76, 17, 14, 12, 15};
            for (uint8_t i = 0; i < 19;++i){
                rgb_matrix_set_color(pos_l[i], 240, 240, 240);  // left
            }
        }

    // holding light
        // for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT;++i){
        //     if(pos_to_hold_l[i]){
        //         //rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        //     }
        // }
    // state indicater
        // capslock
        if (host_keyboard_led_state().caps_lock) {
            rgb_matrix_set_color(75, 240, 240, 240);
        }
        // scrlock
        if (host_keyboard_led_state().scroll_lock) {
            rgb_matrix_set_color(76, 240, 240, 240);
        }
        // layer 0 shift state
        if(layer == BASE0){
            rgb_matrix_set_color(74, 240, 240, 240);
        }
    return false;
}
