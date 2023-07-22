
RGB_MATRIX_EFFECT(PURE_DARK)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
    #ifdef RGB_MATRIX_KEYREACTIVE_ENABLED
    RGB_MATRIX_EFFECT(SIMPLE_RIPPLE)
static HSV SIMPLE_RIPPLE_math(HSV hsv, int16_t dx, int16_t dy, uint8_t dist, uint16_t tick){
    uint16_t effect = 8 * (tick - dist);
    if (effect > 255)
        effect = 255;
    hsv.v = qadd8(hsv.v, scale16by8(255 - effect, qsub8(255, 16 * dist)));
    return hsv;
}
static bool SIMPLE_RIPPLE(effect_params_t* params){
    return effect_runner_reactive_splash(0, params, &SIMPLE_RIPPLE_math);
}
    #endif // RGB_MATRIX_KEYREACTIVE_ENABLED

static bool PURE_DARK(effect_params_t* params){
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    rgb_matrix_set_color_all(0, 0, 0);
    return rgb_matrix_check_finished_leds(led_max);
}


#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
