// !!! DO NOT ADD #pragma once !!! //

// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro

RGB_MATRIX_EFFECT(NAIVE_NEXUS)


// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static HSV NAIVE_NEXUS_math(HSV hsv, int16_t dx, int16_t dy, uint8_t dist, uint16_t tick){
    uint16_t effect = tick - dist;
    effect += dist *3;
    // if (dist > 100) effect = 255;
    if ((dx > 12 || dx < -12) && (dy > 12 || dy < -12)) effect = 255;
    if (effect > 255)
        effect = 255;
#            ifdef RGB_MATRIX_SOLID_REACTIVE_GRADIENT_MODE
    hsv.h = scale16by8(g_rgb_timer, qadd8(rgb_matrix_config.speed, 8) >> 4) + dy / 4;
#            else
    hsv.h = rgb_matrix_config.hsv.h + dy / 3;
#            endif
    hsv.v = qadd8(hsv.v, 255 - effect);
    return hsv;
}

static bool NAIVE_NEXUS(effect_params_t* params){
    return effect_runner_reactive_splash(0, params, &NAIVE_NEXUS_math);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
