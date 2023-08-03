#include QMK_KEYBOARD_H
#include <stdio.h>
#include <layers.h>

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_0;
}

void render_status(void) {

    oled_write_P(PSTR("\n"), false);

    // Host Keyboard Layer Status

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("   QUERTY\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("   COLEMAK\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("   FUNCTION\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("   NAVIGATION\n"), false);
            break;
        case 4:
            oled_write_P(PSTR("   MEDIA\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("   Undefined"), false);
    }

    oled_write_P(PSTR("\n"), false);

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("   NUM ") : PSTR("       "), false);
    oled_write_P(led_state.caps_lock ? PSTR("   CAP ") : PSTR("       "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("   SCR ") : PSTR("       "), false);
}

bool oled_task_user(void) {
    render_status();
    return false;
}

#endif
