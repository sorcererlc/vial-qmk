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

#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { GP22, GP21, GP20, GP19, GP18 } // Left
// #define MATRIX_ROW_PINS { GP18, GP19, GP20, GP21, GP22 } // Right
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS { GP29, GP28, GP27, GP26, GP25, GP24, GP23 }

// RGB Matrix
#ifdef RGB_MATRIX_ENABLE

#define NOP_FUDGE 0.4
#define WS2812_PIO_USE_PIO1

// Include available RGB matrix effects
#include "rgbeffects.h"

#endif
