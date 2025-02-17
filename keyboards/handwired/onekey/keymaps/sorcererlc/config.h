#pragma once

#define VIAL_KEYBOARD_UID {0x49, 0xCB, 0xF1, 0x82, 0xF3, 0x0F, 0x6B, 0xC3}

#define LAYOUT LAYOUT_ortho_5x14
#undef PRODUCT
#define PRODUCT The Slab Keyboard

#undef DIODE_DIRECTION
#define DIODE_DIRECTION ROW2COL

#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN GP26
#define I2C1_SCL_PIN GP27

// Display
#ifdef OLED_ENABLE

#endif

#undef MATRIX_ROWS
#define MATRIX_ROWS 5
#undef MATRIX_COLS
#define MATRIX_COLS 14

// Vial options
#define DYNAMIC_KEYMAP_LAYER_COUNT 5
#define VIAL_UNLOCK_COMBO_ROWS { 3, 3 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

// Keyboard matrix
#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS
// #define MATRIX_ROW_PINS { B17, D0, A1, A2, D7 }
// #define MATRIX_COL_PINS { C1, D6, D5, B2, B3, C0, D1, C7, C6, C4, C3, D3, D2, D4 }
#define MATRIX_ROW_PINS { GP21, GP20, GP19, GP18, GP17 }
#define MATRIX_COL_PINS { GP16, GP15, GP14, GP13, GP12, GP11, GP10, GP9, GP8, GP7, GP6, GP5, GP4, GP3 }

// RGB Matrix
#ifdef RGB_MATRIX_ENABLE

#define NOP_FUDGE 0.4
#undef RGB_DI_PIN
// #define RGB_DI_PIN C2
#define RGB_DI_PIN GP2
#define DRIVER_LED_TOTAL 70
#define RGBLED_NUM 70
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#define RGB_MATRIX_LED_FLUSH_LIMIT 8 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#define RGB_MATRIX_HUE_STEP 8
#define RGB_MATRIX_SAT_STEP 8
#define RGB_MATRIX_VAL_STEP 8
#define RGB_MATRIX_SPD_STEP 10
#define RGB_MATRIX_STARTUP_SPD 127

// Enable animations
#define ENABLE_RGB_MATRIX_ALPHAS_MODS                 // Static dual hue speed is hue for secondary hue
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN            // Static gradient top to bottom speed controls how much gradient changes
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT         // Static gradient left to right speed controls how much gradient changes
#define ENABLE_RGB_MATRIX_BREATHING                   // Single hue brightness cycling animation
#define ENABLE_RGB_MATRIX_BAND_SAT                    // Single hue band fading saturation scrolling left to right
#define ENABLE_RGB_MATRIX_BAND_VAL                    // Single hue band fading brightness scrolling left to right
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT           // Single hue 3 blade spinning pinwheel fades saturation
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL           // Single hue 3 blade spinning pinwheel fades brightness
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT             // Single hue spinning spiral fades saturation
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL             // Single hue spinning spiral fades brightness
#define ENABLE_RGB_MATRIX_CYCLE_ALL                   // Full keyboard solid hue cycling through full gradient
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT            // Full gradient scrolling left to right
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN               // Full gradient scrolling top to bottom
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN                // Full gradient scrolling out to in
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL           // Full dual gradients scrolling out to in
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON      // Full gradent Chevron shapped scrolling left to right
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL              // Full gradient spinning pinwheel around center of keyboard
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL                // Full gradient spinning spiral around center of keyboard
#define ENABLE_RGB_MATRIX_DUAL_BEACON                 // Full gradient spinning around center of keyboard
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON              // Full tighter gradient spinning around center of keyboard
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS           // Full dual gradients spinning two halfs of keyboard
#define ENABLE_RGB_MATRIX_RAINDROPS                   // Randomly changes a single key's hue
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS         // Randomly changes a single key's hue and saturation
#define ENABLE_RGB_MATRIX_HUE_BREATHING               // Hue shifts up a slight ammount at the same time then shifts back
#define ENABLE_RGB_MATRIX_HUE_PENDULUM                // Hue shifts up a slight ammount in a wave to the right then back to the left
#define ENABLE_RGB_MATRIX_HUE_WAVE                    // Hue shifts up a slight ammount and then back down in a wave to the right

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS                // Required for the following two effects
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP              // How hot is your WPM!
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN                // That famous computer simulation

#define RGB_MATRIX_KEYPRESSES                         // reacts to keypresses, required for the remaining effects
#define RGB_MATRIX_KEYRELEASES                        // reacts to keyreleases (instead of keypresses)
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE       // Pulses keys hit to hue & value then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE              // Static single hue pulses keys hit to shifted hue then fades to current hue
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE         // Hue & value pulse near a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE    // Hue & value pulse near multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS        // Hue & value pulse the same column and row of a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS   // Hue & value pulse the same column and row of multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS        // Hue & value pulse away on the same column and row of a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS   // Hue & value pulse away on the same column and row of multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SPLASH                      // Full gradient & value pulse away from a single key hit then fades value out
#define ENABLE_RGB_MATRIX_MULTISPLASH                 // Full gradient & value pulse away from multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SOLID_SPLASH                // Hue & value pulse away from a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH           // Hue & value pulse away from multiple key hits then fades value out

#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT

#endif
