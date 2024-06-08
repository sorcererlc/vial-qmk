# MCU
MCU = RP2040
BOOTLOADER = rp2040
OPT_DEFS += -DHAL_USE_I2C=TRUE

DEFAULT_FOLDER = redox/rp2040

# Split keyboard configuration
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor

# Disable unsupported hardware
AUDIO_SUPPORTED = no
BACKLIGHT_SUPPORTED = no

# Encoder
# ENCODER_MAP_ENABLE = yes

# OLED
OLED_ENABLE = yes
OLED_DRIVER = ssd1306
