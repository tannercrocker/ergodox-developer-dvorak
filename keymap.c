#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
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
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  RGB_SLD,
  HSV_200_248_255,
  HSV_32_176_255,
  HSV_10_225_255,
  HSV_216_255_255,
  HSV_136_255_255,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(KC_EQUAL,KC_KP_1,KC_KP_2,KC_KP_3,KC_KP_4,KC_KP_5,KC_LEFT,KC_TAB,KC_QUOTE,KC_COMMA,KC_DOT,KC_P,KC_Y,TG(4),KC_CAPSLOCK,KC_A,KC_O,KC_E,KC_I,KC_U,KC_LSHIFT,KC_SCOLON,KC_Q,KC_J,KC_K,KC_X,MO(1),KC_LCTRL,KC_LGUI,KC_LALT,KC_LEFT,KC_RIGHT,KC_DELETE,KC_SLASH,KC_HOME,KC_SPACE,KC_BSPACE,KC_END,KC_RIGHT,KC_KP_6,KC_KP_7,KC_KP_8,KC_KP_9,KC_KP_0,KC_EQUAL,TO(2),KC_F,KC_G,KC_C,KC_R,KC_L,KC_BSLASH,KC_D,KC_H,KC_T,KC_N,KC_S,KC_MINUS,TO(1),KC_B,KC_M,KC_W,KC_V,KC_Z,KC_RSHIFT,KC_DOWN,KC_UP,KC_LBRACKET,KC_RBRACKET,KC_RCTRL,KC_RALT,KC_ESCAPE,KC_PGUP,KC_PGDOWN,KC_ENTER,KC_SPACE),

  [1] = LAYOUT_ergodox(KC_ESCAPE,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_TRANSPARENT,KC_TAB,KC_EXLM,KC_AT,KC_LCBR,KC_RCBR,KC_PIPE,TO(0),KC_TRANSPARENT,KC_HASH,KC_DLR,KC_LPRN,KC_RPRN,KC_QUES,KC_LSHIFT,KC_PERC,KC_CIRC,KC_LBRACKET,KC_RBRACKET,KC_TILD,KC_TRANSPARENT,KC_LCTRL,KC_TRANSPARENT,KC_TRANSPARENT,KC_LEFT,KC_RIGHT,HSV_200_248_255,HSV_32_176_255,HSV_10_225_255,RGB_HUD,RGB_HUI,HSV_216_255_255,KC_TRANSPARENT,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_TRANSPARENT,KC_UP,KC_KP_7,KC_KP_8,KC_KP_9,KC_KP_ASTERISK,KC_F12,KC_DOWN,KC_KP_4,KC_KP_5,KC_KP_6,KC_KP_PLUS,KC_GRAVE,TO(0),KC_AMPR,KC_KP_1,KC_KP_2,KC_KP_3,KC_KP_SLASH,KC_RSHIFT,KC_TRANSPARENT,KC_KP_DOT,KC_KP_0,KC_EQUAL,KC_RCTRL,HSV_136_255_255,RGB_TOG,RGB_MOD,RGB_SLD,RGB_VAI,RGB_VAD),

  [2] = LAYOUT_ergodox(KC_EQUAL,KC_1,KC_2,KC_3,KC_4,KC_5,KC_LEFT,KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,TG(4),KC_CAPSLOCK,KC_A,KC_S,KC_D,KC_F,KC_G,KC_LSHIFT,KC_Z,KC_X,KC_C,KC_V,KC_B,MO(3),KC_LCTRL,KC_LGUI,KC_LALT,KC_LEFT,KC_RIGHT,KC_DELETE,KC_LGUI,KC_HOME,KC_SPACE,KC_BSPACE,KC_END,KC_RIGHT,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINUS,TO(0),KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSLASH,KC_H,KC_J,KC_K,KC_L,KC_SCOLON,KC_QUOTE,TO(3),KC_N,KC_M,KC_COMMA,KC_DOT,KC_SLASH,KC_RSHIFT,KC_DOWN,KC_UP,KC_LBRACKET,KC_RBRACKET,KC_RCTRL,KC_RALT,KC_ESCAPE,KC_PGUP,KC_PGDOWN,KC_ENTER,KC_SPACE),

  [3] = LAYOUT_ergodox(KC_ESCAPE,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_TRANSPARENT,KC_TAB,KC_EXLM,KC_AT,KC_LCBR,KC_RCBR,KC_PIPE,TO(2),KC_TRANSPARENT,KC_HASH,KC_DLR,KC_LPRN,KC_RPRN,KC_QUES,KC_LSHIFT,KC_PERC,KC_CIRC,KC_LBRACKET,KC_RBRACKET,KC_TILD,KC_TRANSPARENT,KC_LCTRL,KC_TRANSPARENT,KC_TRANSPARENT,KC_LEFT,KC_RIGHT,HSV_200_248_255,HSV_32_176_255,HSV_10_225_255,RGB_HUD,RGB_HUI,HSV_216_255_255,KC_TRANSPARENT,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_TRANSPARENT,KC_UP,KC_7,KC_8,KC_9,KC_ASTR,KC_F12,KC_DOWN,KC_4,KC_5,KC_6,KC_PLUS,KC_GRAVE,TO(2),KC_AMPR,KC_1,KC_2,KC_3,KC_KP_SLASH,KC_RSHIFT,KC_TRANSPARENT,KC_DOT,KC_0,KC_EQUAL,KC_RCTRL,HSV_136_255_255,RGB_TOG,RGB_MOD,RGB_SLD,RGB_VAI,RGB_VAD),

  [4] = LAYOUT_ergodox(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_WWW_BACK,KC_TRANSPARENT,KC_MS_UP,KC_TRANSPARENT,KC_WWW_FORWARD,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_BTN3,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_BTN1,KC_MS_BTN2,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,KC_AUDIO_VOL_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_WWW_FORWARD,KC_WWW_BACK),

};

bool suspended = false;
  rgb_config_t rgb_matrix_config;

  const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
      [1] = { {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255} },

      [2] = { {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213} },

      [3] = { {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255}, {32,176,255} },

      [4] = { {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158}, {85,203,158} },

  };

  void set_leds_color( int layer) {
    rgb_matrix_mode_noeeprom(1);
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
      uint8_t val = pgm_read_byte(&ledmap[layer][i][2]);
      HSV hsv = {
        .h = pgm_read_byte(&ledmap[layer][i][0]),
        .s = pgm_read_byte(&ledmap[layer][i][1]),
        .v = val == 0 ? 0 : rgb_matrix_config.val
      };
      RGB rgb = hsv_to_rgb( hsv );
      rgb_matrix_set_color( i, rgb.r, rgb.g, rgb.b );
    }
  }

  void rgb_matrix_indicators_user(void) {
    if(suspended == false) {
      uint8_t layer = biton32(layer_state);
      switch (layer) {
        case 0:
          rgb_matrix_config.raw = eeprom_read_dword(EECONFIG_RGB_MATRIX);
          rgb_matrix_mode_noeeprom(rgb_matrix_config.mode);
          if(rgb_matrix_config.mode != 1) {
          rgb_matrix_sethsv_noeeprom(rgb_matrix_config.hue, rgb_matrix_config.sat, rgb_matrix_config.val);
          }
          break;
        case 1:
          set_leds_color(1);
          break;
        case 2:
          set_leds_color(2);
          break;
        case 3:
          set_leds_color(3);
          break;
        case 4:
          set_leds_color(4);
          break;
      }
    }
  }
const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch(id) {
    case 0:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      break;
  }
  return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
      break;
    case HSV_200_248_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(200,248,255);
      }
      return false;
      break;
    case HSV_32_176_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(32,176,255);
      }
      return false;
      break;
    case HSV_10_225_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(10,225,255);
      }
      return false;
      break;
    case HSV_216_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(216,255,255);
      }
      return false;
      break;
    case HSV_136_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(136,255,255);
      }
      return false;
      break;
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
