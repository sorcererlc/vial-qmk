# VIAL
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIALRGB_ENABLE = yes
# VIAL_INSECURE = yes

ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += display.c
endif

ifeq ($(strip $(RGB_MATRIX_ENABLE)), yes)
    SRC += lighting.c
endif

ifeq ($(strip $(ENCODER_ENABLE)), yes)
    SRC += encoder.c
endif
