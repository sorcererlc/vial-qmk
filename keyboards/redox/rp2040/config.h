// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define DEBUG_MATRIX_SCAN_RATE

#define QMK_WAITING_TEST_BUSY_PIN GP8
#define QMK_WAITING_TEST_YIELD_PIN GP9

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

// I2C
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP14
#define I2C1_SCL_PIN GP15

// Split keyboard communication
#define USE_SERIAL
#undef SERIAL_USART_TX_PIN
#define SERIAL_USART_TX_PIN GP0   // USART TX pin
#undef SERIAL_USART_RX_PIN
#define SERIAL_USART_RX_PIN GP1   // USART RX pin

#define SERIAL_USART_FULL_DUPLEX  // Enable full duplex operation mode.
#define SERIAL_USART_PIN_SWAP     // Swap TX and RX pins if keyboard is master halve.
#define SERIAL_USART_SPEED 921600 // Sped :)

// Keyboard matrix
#undef MATRIX_ROWS
#define MATRIX_ROWS 10
#undef MATRIX_COLS
#define MATRIX_COLS 7

#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { GP22, GP21, GP20, GP19, GP18 } // Left
// #define MATRIX_ROW_PINS { GP18, GP19, GP20, GP21, GP22 } // Right
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS { GP29, GP28, GP27, GP26, GP25, GP24, GP23 }

#undef DIODE_DIRECTION
#define DIODE_DIRECTION COL2ROW

/* Select hand configuration */
// #define SPLIT_USB_DETECT
// #define SPLIT_USB_TIMEOUT 2000
// #define SPLIT_USB_TIMEOUT_POLL 10
// #define SPLIT_HAND_PIN GP2 // high = left hand, low = right hand


// Encoder
// #ifdef ENCODER_ENABLE
// #define ENCODERS_PAD_A { GP5 }
// #define ENCODERS_PAD_B { GP6 }
// #define ENCODER_RESOLUTIONS { 2 }

// #define DIP_SWITCH_PINS { GP7 }
// #endif

/* Split keyboard features */
// #define SPLIT_TRANSPORT_MIRROR
// #define SPLIT_LAYER_STATE_ENABLE
// #define SPLIT_LED_STATE_ENABLE
// #define SPLIT_MODS_ENABLE
// #define SPLIT_OLED_ENABLE
// #define SPLIT_WPM_ENABLE

// RGB Matrix
#ifdef RGB_MATRIX_ENABLE

#define NOP_FUDGE 0.4
#define WS2812_PIO_USE_PIO1
// #undef WS2812_DI_PIN
// #define WS2812_DI_PIN GP3
// #define RGBLED_NUM 120
// #define DRIVER_LED_TOTAL 120
// #define RGB_MATRIX_SPLIT { 60, 60 }
// #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 80
// #define RGB_MATRIX_SLEEP
// #define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
// #define RGB_MATRIX_HUE_STEP 8
// #define RGB_MATRIX_SAT_STEP 8
// #define RGB_MATRIX_VAL_STEP 8
// #define RGB_MATRIX_SPD_STEP 10
// #define RGB_MATRIX_STARTUP_SPD 127

// Include available RGB matrix effects
#include "rgbeffects.h"

#endif
