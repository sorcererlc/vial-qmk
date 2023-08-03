#include QMK_KEYBOARD_H
#include <stdio.h>
#include <layers.h>

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_left()) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    }

    return rotation;
}

void render_status(void) {
    oled_write_P(PSTR("\n"), false);

    // Host Keyboard Layer Status

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("   COLEMAK\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("   QWERTY\n"), false);
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

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00};

    oled_write_P(qmk_logo, false);
}

static void render_wpm(void) {
#ifdef WPM_ENABLE
    char buf[30];
    snprintf(buf, sizeof(buf), "    WPM %d\n", get_current_wpm());
    oled_write(buf, false);
#endif
}

bool oled_task_user(void) {
    if (!is_keyboard_left()) {
        render_status();
    } else {
        render_logo();
        render_wpm();
    }
    return false;
}

#endif
