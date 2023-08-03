#include QMK_KEYBOARD_H
#include <layers.h>

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
        ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN),
    },
    [1] = {
        ENCODER_CCW_CW(RGB_HUD, RGB_HUI),
        ENCODER_CCW_CW(RGB_SAD, RGB_SAI),
    },
};
#else
bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
    case 0: /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
        break;
    case 1: /* Second encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
        break;
    }
    return false;
}
#endif

#ifdef DIP_SWITCH_ENABLE
bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
    case 0: /* First encoder */
        if(active) {
            tap_code(KC_MUTE);
        } else {}
        break;
    case 1: /* Second encoder */
        if(active) {
            tap_code(KC_MUTE);
        } else {}
        break;
    }
    return false;
}
#endif
