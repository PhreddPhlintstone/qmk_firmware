# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
DEBOUNCE_TYPE = eager_pk
EXTRAFLAGS += -flto
COMMAND_ENABLE = no
SRC = matrix.c
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes
