# MCU
MCU = RP2040
BOOTLOADER = rp2040
OPT_DEFS += -DHAL_USE_I2C=TRUE

DEFAULT_FOLDER = redox/rp2040

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = no        # Enable WS2812 RGB underlight.
RAW_ENABLE = yes
WPM_ENABLE = no

# Reduce firmware size
LTO_ENABLE = yes

# Split keyboard configuration
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor

# Disable unsupported hardware
AUDIO_SUPPORTED = no
BACKLIGHT_SUPPORTED = no

# Encoder
ENCODER_ENABLE = yes
# ENCODER_MAP_ENABLE = yes
DIP_SWITCH_ENABLE = yes # For encoder button

# OLED
OLED_ENABLE = yes
OLED_DRIVER = SSD1306

# Lighting
WS2812_DRIVER = vendor
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812
SLEEP_LED_ENABLE = no
