#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE, // can always be here
  EPRM,
  HSV_172_255_255,
  DYNAMIC_MACRO_RANGE,
};
#include "dynamic_macro.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(
    KC_ESCAPE,LCTL(KC_1),LCTL(KC_2),LCTL(KC_3),LCTL(KC_4),LCTL(KC_5),LCTL(KC_6),
    // KC_TAB,KC_CAPSLOCK,KC_Q,KC_W,KC_E,KC_R,KC_T,TT(1),
    //KC_CAPSLOCK,KC_A,KC_S,KC_D,KC_F,KC_G,
    KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,TT(1),
    KC_CAPSLOCK,KC_A,KC_S,KC_D,KC_F,KC_G,
    KC_LSHIFT,KC_Z,KC_X,KC_C,KC_V,KC_B,LGUI(KC_KP_MINUS),
    LALT(LGUI(KC_C)),LALT(LGUI(KC_V)),LALT(LGUI(LSFT(KC_V))),KC_UP,KC_DOWN,

    KC_LCTRL,KC_TRANSPARENT,KC_TRANSPARENT,LGUI_T(KC_SPACE),LALT_T(KC_TAB),KC_HYPR,
   
    LCTL(KC_7),LCTL(KC_8),LCTL(KC_9),LCTL(KC_0),LALT(LCTL(KC_1)),LALT(LCTL(KC_2)),KC_MINUS,
    TT(2),KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSLASH,
    KC_H,KC_J,KC_K,KC_L,LT(2,KC_SCOLON),LGUI_T(KC_ENTER),
    LGUI(KC_KP_PLUS),KC_N,KC_M,KC_COMMA,KC_DOT,RCTL_T(KC_SLASH),KC_RSHIFT,
    KC_LEFT,KC_RIGHT,KC_RGUI,KC_RALT,RSFT(KC_RALT),

    KC_LALT,KC_RCTRL,KC_TRANSPARENT,KC_HYPR,LT(2,KC_BSPACE),LT(1,KC_SPACE)
    ),

  [1] = LAYOUT_ergodox(
    KC_ESCAPE,LCTL(KC_1),LCTL(KC_2),LCTL(KC_3),LCTL(KC_4),RCTL(KC_5),LCTL(KC_6),
    KC_TAB,KC_EXLM,KC_AT,KC_LCBR,KC_RCBR,KC_PIPE,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_HASH,KC_DLR,KC_LPRN,KC_RPRN,KC_GRAVE,
    KC_TRANSPARENT,KC_PERC,KC_CIRC,KC_LBRACKET,KC_RBRACKET,KC_TILD,KC_HYPR,
    LGUI(KC_W),LGUI(KC_Z),LGUI(KC_X),LGUI(KC_C),LGUI(KC_V),

    KC_F14,KC_F15,RGB_TOG,KC_SPACE,KC_TAB,KC_TRANSPARENT,
   
    LCTL(KC_7),LCTL(KC_8),LCTL(KC_9),LCTL(KC_0),LALT(LCTL(KC_1)),LALT(LCTL(KC_2)),LALT(LCTL(KC_3)),
    KC_TRANSPARENT,KC_EXLM,KC_7,KC_8,KC_9,KC_ASTR,LALT(LCTL(KC_4)),
    KC_KP_ASTERISK,KC_4,KC_5,KC_6,KC_PLUS,KC_KP_ASTERISK,
    KC_MEH,KC_AMPR,KC_1,KC_2,KC_3,KC_MINUS,KC_SLASH,
    KC_0,KC_DOT,KC_DOT,KC_EQUAL,KC_EQUAL,

    KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT
    ),


  [2] = LAYOUT_ergodox(
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,DYN_REC_START1,DYN_MACRO_PLAY1,DYN_REC_STOP,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,DYN_REC_START2,DYN_MACRO_PLAY2,
    
    KC_F14,KC_F15,RGB_TOG,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
    
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_END,KC_UP,KC_HOME,KC_TRANSPARENT,KC_TRANSPARENT,
    KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_TRANSPARENT,KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_PGDOWN,KC_DOWN,KC_PGUP,KC_TRANSPARENT,KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_MUTE,HSV_172_255_255,RGB_TOG,

    KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,KC_TRANSPARENT,KC_TRANSPARENT,KC_WWW_BACK
    ),

  [3] = LAYOUT_ergodox(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_CAPSLOCK,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;
int cur_hue; // Sw A
int cur_val; // Sw A

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {32,176,255}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {32,176,255}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234}, {255,232,234} },

    [2] = { {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {32,176,255}, {205,255,255}, {32,176,255}, {75,242,238}, {75,242,238}, {205,255,255}, {205,255,255}, {205,255,255}, {75,242,238}, {75,242,238}, {32,176,255}, {205,255,255}, {32,176,255}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {205,255,255}, {75,242,238}, {75,242,238}, {75,242,238}, {205,255,255}, {205,255,255}, {205,255,255}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238}, {75,242,238} },
};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        rgb_matrix_set_color( i, rgb.r, rgb.g, rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_record_dynamic_macro(keycode, record)) {
    return false;
  }
  switch (keycode) {
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case RGB_TOG:
      if (record->event.pressed) {
    	if (rgb_matrix_config.val) {
          rgb_matrix_sethsv(rgb_matrix_config.hue, rgb_matrix_config.sat, 0);
          cur_val=0;
        } else {
          rgb_matrix_sethsv(rgb_matrix_config.hue, rgb_matrix_config.sat, 255);
          cur_val=255;
        }
      }
      return false;
    case HSV_172_255_255: // Sw A
      if (record->event.pressed) {
        rgb_matrix_sethsv(172,255,255);
        cur_hue=172;
        cur_val=255;
      }
      return false;

    case KC_CAPS: // Sw A
      if (record->event.pressed) {
        if (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)) {
          rgb_matrix_sethsv(cur_hue, rgb_matrix_config.sat, cur_val);
        } else {
          rgblight_mode(1);
          rgblight_sethsv(27,255,255);//sets base color to orange
        } 
      }
      return true;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};



