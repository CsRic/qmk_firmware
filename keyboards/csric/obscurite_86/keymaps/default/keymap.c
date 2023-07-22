// Copyright 2023 Rui Chen (csric)
// SPDX-License-Identifier: GPL-2.0-or-later

#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#include QMK_KEYBOARD_H
#include <lib/lib8tion/lib8tion.h>

enum layers { BASE0, MOD2, MOD3, MOD4 };

enum custom_keycodes {
  FN_HINT = SAFE_RANGE,
  SPC_SFT,
  TG_SS,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_SCRL,   TG_SS,  KC_CAPS,
        KC_DEL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,       KC_BSPC,      KC_HOME,
        KC_TAB,       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      KC_END,
        MO(MOD3),        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,   KC_QUOT, KC_ENT,              KC_PGUP,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,         KC_UP,    KC_PGDN,
        KC_LCTL,   KC_LGUI,   KC_LALT,      KC_SPC,          MO(MOD2),        SPC_SFT,       KC_RALT,  MO(MOD4),  KC_RCTL,   KC_LEFT, KC_DOWN,   KC_RGHT
    ),
    [MOD2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     _______,
         _______,    _______, _______, _______, _______, _______, _______, KC_PGUP,  KC_UP,  KC_PGDN, _______, _______, _______,    _______,   _______,
          _______,     _______, _______, _______, _______, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______,       _______,       _______,
            _______,       _______, _______, _______, _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,     _______,     _______, _______,
         _______,   _______,   _______,       _______,         _______,         _______,          _______, _______, _______, _______, _______, _______
    ),
    [MOD3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NUM,
        _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______, _______, _______,      _______,     _______,
         KC_GRAVE,    _______, _______, _______, _______, _______,  KC_PPLS,   KC_P7,  KC_P8,  KC_P9,  KC_PPLS, _______, _______,    KC_GRAVE,   _______,
          _______,     _______, _______, _______, _______, _______,  KC_PMNS,   KC_P4,  KC_P5,  KC_P6,  KC_PAST, _______,       _______,       _______,
            _______,       _______, _______, _______, _______,  _______,   KC_PPLS,  KC_P1,  KC_P2,  KC_P3, KC_PSLS,     _______,      _______,  _______,
         _______,   _______,   _______,       _______,         _______,          KC_P0,          KC_PDOT, _______, _______, _______, _______, _______
    ),
    [MOD4] = LAYOUT(
        FN_HINT, KC_BRID, KC_BRIU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX,
        RGB_TOG, RGB_SAD, RGB_SAI, RGB_HUD, RGB_HUI, XXXXXXX, RGB_RMOD, RGB_MOD, XXXXXXX, RGB_SPD, RGB_SPI, RGB_VAD, RGB_VAI,      XXXXXXX,     KC_PAUSE,
         XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,   KC_INSERT,
          _______,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX,       XXXXXXX,
            _______,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     _______,     XXXXXXX, XXXXXXX,
         XXXXXXX,   XXXXXXX,   XXXXXXX,       XXXXXXX,         _______,         _______,          XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
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




// light for pressed keys
#define CSRIC_MAX_CAPTURE 10
bool pos_to_hold_l[RGB_MATRIX_LED_COUNT] = {0};
uint16_t pos_to_tick_l[RGB_MATRIX_LED_COUNT] = {0};
uint8_t captured[CSRIC_MAX_CAPTURE] = {0};
uint8_t captured_count = 0;
uint32_t rgb_timer_buffer;
// FN_HINT state
bool hint = 0;
// SPACE-RSHIFT state
bool spc_sft_state = 0;
// Secondary HSV (costomize H and S)
uint8_t secondary_h = 128;
uint8_t secondary_s = 255;

void keyboard_post_init_user(void){
    rgb_timer_buffer = 0;
    HSV hsv = rgb_matrix_get_hsv();
    secondary_h = (hsv.h + 128) % 256;
    secondary_s = 255;
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    // uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int:
    // %u, count: %u\n", keycode, record->event.key.col, record->event.key.row,
    // record->event.pressed, record->event.time, record->tap.interrupted,
    // record->tap.count);

    uint8_t pos =
        g_led_config.matrix_co[record->event.key.row][record->event.key.col];
    if (record->event.pressed) {
        pos_to_hold_l[pos] = 1;
        pos_to_tick_l[pos] = 0;
    } else {
        pos_to_hold_l[pos] = 0;
    }

    uint8_t shift_mods = get_mods() & MOD_MASK_SHIFT;
    switch (keycode){
        case FN_HINT:
            if(record->event.pressed){
                hint = !hint;
            }
            return false;
        case TG_SS:
            if(record->event.pressed){
                spc_sft_state = !spc_sft_state;
            }
            return false;
        case SPC_SFT:
            if(record->event.pressed){
                if(spc_sft_state == 0){
                    register_code(KC_SPC);
                }
                else{
                    register_code(KC_RSFT);
                }
            }
            else{
                if(spc_sft_state == 0){
                    unregister_code(KC_SPC);
                }
                else{
                    unregister_code(KC_RSFT);
                }
            }
            return false;
            // secondary hsv
        case RGB_HUI:
            if(shift_mods){
                if(record->event.pressed){
                    secondary_h += RGB_MATRIX_HUE_STEP;
                }
                return false;
            }
            break;
        case RGB_HUD:
            if(shift_mods){
                if(record->event.pressed){
                    secondary_h -= RGB_MATRIX_HUE_STEP;
                }
                return false;
            }
            break;
        case RGB_SAI:
            if(shift_mods){
                if(record->event.pressed){
                    if(secondary_s + RGB_MATRIX_SAT_STEP > 255){
                        secondary_s = 255;
                    }
                    else{
                        secondary_s += RGB_MATRIX_SAT_STEP;
                    }
                }
                return false;
            }
            break;
        case RGB_SAD:
            if(shift_mods){
                if(record->event.pressed){
                    if(secondary_s - RGB_MATRIX_SAT_STEP < 0){
                        secondary_s = 0;
                    }
                    else{
                        secondary_s -= RGB_MATRIX_SAT_STEP;
                    }
                }
                return false;
            }
            break;
        default:
            break;
    }
    return true;
}


// custom lights
extern void HOLDING_HORIZONTAL(HSV hsv_secondary_max_v);


bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer = get_highest_layer(layer_state);
    HSV hsv = rgb_matrix_get_hsv();
    RGB rgb_ori = hsv_to_rgb(hsv);
    HSV hsv_max_sv = hsv;
    hsv_max_sv.v = 240;
    hsv_max_sv.s = 255;
    RGB rgb_ori_max_sv = hsv_to_rgb(hsv_max_sv);
    HSV hsv_secondary = hsv;
    hsv_secondary.h = secondary_h;
    hsv_secondary.s = secondary_s;
    RGB rgb_sec = hsv_to_rgb(hsv_secondary);
    HSV hsv_secondary_max_v = hsv_secondary;
    hsv_secondary_max_v.v = 240;
    RGB rgb_sec_max_v = hsv_to_rgb(hsv_secondary_max_v);

    // FN Hint
        if(hint){
            uint8_t pos_1_l[23] = {93,     91,     90,     89,     83,     81,     80,     79,     74,   45,    43,    16,   4,   6,  7,  61,62,63,64,69,70,71,72};
            for (uint8_t i = 0; i < 23;++i){
                rgb_matrix_set_color(pos_1_l[i], rgb_sec.r, rgb_sec.g, rgb_sec.b);
            }
        }


    // holding light horizontal
    captured_count = 0;
    uint32_t deltaTime = sync_timer_elapsed32(rgb_timer_buffer);
    rgb_timer_buffer = sync_timer_read32();
    for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT;++i){
        if(pos_to_hold_l[i]){
            pos_to_tick_l[i] += deltaTime;
            if(captured_count + 1 < CSRIC_MAX_CAPTURE){
                captured[captured_count] = i;
                captured_count++;
            }
        }
    }
    HOLDING_HORIZONTAL(hsv_secondary_max_v);

    // layer indicater
        // system layer
        if (layer == MOD4) {
            uint8_t pos_l[18] = {93,91,84,81,80,79,61,62,63,64,66,67,69,70,71,72,74,45};
            for (uint8_t i = 0; i < 18;++i){
                rgb_matrix_set_color(pos_l[i], 240, 240, 240);
            }
        }
        //numpad & grave layer
        else if(layer == MOD3){
            rgb_matrix_set_color_all(0, 0, 0);
            rgb_matrix_set_color(7, 240, 240, 240);  // 0
            rgb_matrix_set_color(22, 240, 240, 240);  // 1
            rgb_matrix_set_color(21, 240, 240, 240);  // 2
            rgb_matrix_set_color(20, 240, 240, 240);  // 3
            rgb_matrix_set_color(37, 240, 240, 240);  // 4
            rgb_matrix_set_color(38, 240, 240, 240); // 5
            rgb_matrix_set_color(39, 240, 240, 240); // 6
            rgb_matrix_set_color(52, 240, 240, 240); // 7
            rgb_matrix_set_color(51, 240, 240, 240); // 8
            rgb_matrix_set_color(50, 240, 240, 240); // 9
            //sub buttons
            rgb_matrix_set_color(9, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(19, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(23, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(36, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(40, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(49, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(53, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(59, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(46, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(75, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);

            // numlock
            if (host_keyboard_led_state().num_lock) {
                rgb_matrix_set_color(75, 240, 240, 240);
            }
        }
        // Navigate layer
        else if (layer == MOD2) {
            rgb_matrix_set_color_all(0, 0, 0);
            rgb_matrix_set_color(37, 240, 240, 240); // left
            rgb_matrix_set_color(38, 240, 240, 240); // down
            rgb_matrix_set_color(39, 240, 240, 240); // right
            rgb_matrix_set_color(51, 240, 240, 240); // up

            rgb_matrix_set_color(12, 240, 240, 240); // home
            rgb_matrix_set_color(14, 240, 240, 240); // page down
            rgb_matrix_set_color(15, 240, 240, 240); // end
            rgb_matrix_set_color(17, 240, 240, 240); // page up

            // sub buttons
            uint8_t pos_l[9] = {20,21,22,23,36,40,50,52};
            rgb_matrix_set_color(20, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(21, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(22, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(23, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(36, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(40, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(50, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
            rgb_matrix_set_color(52, rgb_ori_max_sv.r, rgb_ori_max_sv.g, rgb_ori_max_sv.b);
        }
    // state indicater
        // capslock
        if ((layer != MOD3) && host_keyboard_led_state().caps_lock) {
            rgb_matrix_set_color(75, 240, 240, 240);
        }
        // scrlock
        if (host_keyboard_led_state().scroll_lock) {
            rgb_matrix_set_color(78, 240, 240, 240);
        }
        // spc_sft_state
        if (spc_sft_state == 1){
            rgb_matrix_set_color(76, 240, 240, 240);
        }
    // holding light single in MOD layers
        if (layer != BASE0){
            for (int8_t i = 0; i < captured_count; ++i){
                rgb_matrix_set_color(captured[i], rgb_sec_max_v.r, rgb_sec_max_v.g,
                                     rgb_sec_max_v.b);
            }
        }
    return false;
}

#define CSRIC_HOLDING_LIMIT 127
#define CSRIC_APPLY_LIMIT 16

// pressed key special effect
void HOLDING_HORIZONTAL(HSV hsv_secondary_max_v){
    HSV hsv_buffer_l[RGB_MATRIX_LED_COUNT];
    for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT; ++i) {
        HSV hsv_buffer;
        hsv_buffer.h = hsv_secondary_max_v.h;
        hsv_buffer.s = hsv_secondary_max_v.s;
        hsv_buffer.v = 0;

        uint16_t hsv_buffer_s_change_value_max = 0;
        for (uint8_t j = 0; j < captured_count; ++j) {
            // locate
            uint8_t hold_pos = captured[j];
            uint8_t dx =
                (g_led_config.point[i].x > g_led_config.point[hold_pos].x)
                    ? g_led_config.point[i].x -
                          g_led_config.point[hold_pos].x
                    : g_led_config.point[hold_pos].x -
                          g_led_config.point[i].x;
            uint8_t dy =
                (g_led_config.point[i].y > g_led_config.point[hold_pos].y)
                    ? g_led_config.point[i].y -
                          g_led_config.point[hold_pos].y
                    : g_led_config.point[hold_pos].y -
                          g_led_config.point[i].y;

            uint16_t dist = dx + dy * 6;
            uint16_t tick = scale16by8(pos_to_tick_l[hold_pos],
                                       qadd8(rgb_matrix_config.speed, 96));
            // calculate
            if (tick > CSRIC_HOLDING_LIMIT) {
                tick = CSRIC_HOLDING_LIMIT;
            }
            uint16_t effect = tick + dist;
            if(effect > 255){
                effect = 255;
            }
            if(effect < 255){
                if (dx > hsv_buffer_s_change_value_max){
                    hsv_buffer_s_change_value_max = dx * 2 / 3;
                }
                hsv_buffer.v = qadd8(hsv_buffer.v, 255 - effect);
            }
        }
        hsv_buffer.h -= hsv_buffer_s_change_value_max;
        // apply
        if (hsv_buffer.v > CSRIC_APPLY_LIMIT){
            RGB temp = hsv_to_rgb(hsv_buffer);
            rgb_matrix_set_color(i,temp.r,temp.g,temp.b);
        }
    }
}
