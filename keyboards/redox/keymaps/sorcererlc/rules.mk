# VIAL
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIALRGB_ENABLE = yes
# VIAL_INSECURE = yes

ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += display.c
endif
