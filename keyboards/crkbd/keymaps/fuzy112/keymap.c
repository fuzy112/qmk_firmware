#include QMK_KEYBOARD_H

enum {
 L_BASE,
 L_NUM,
 L_SYM,
 L_NAV,
 L_FUN,
 L_BUTTON,
 L_MEDIA,
 L_MOUSE,
 L_LOCK,
};


enum {
 U_BOOT,
 U_RESET,
 U_LKSCRN,
 U_LOCKKB,
 U_CAPS,
};


#define U_PASTE KC_PASTE
#define U_REDO KC_AGAIN
#define U_UNDO KC_UNDO
#define U_COPY KC_COPY
#define U_CUT KC_CUT


#define BUT_SCLN LT(L_BUTTON, KC_SCLN)
#define MED_ESC LT(L_MEDIA, KC_ESC)
#define NAV_SPC LT(L_NAV, KC_SPC)
#define GUI_A LGUI_T(KC_A)
#define GUI_S LGUI_T(KC_S)
#define MOU_TAB LT(L_MOUSE, KC_TAB)
#define ALT_O LALT_T(KC_O)
#define ALT_N LALT_T(KC_N)
#define SYM_ENT LT(L_SYM, KC_ENT)
#define BUT_Z LT(L_BUTTON, KC_Z)
#define FUN_DEL LT(L_FUN, KC_DEL)
#define CTL_E LCTL_T(KC_E)
#define NUM_BSPC LT(L_NUM, KC_BSPC)
#define RALT_V RALT_T(KC_V)
#define RALT_Q RALT_T(KC_Q)
#define SFT_H LSFT_T(KC_H)
#define CTL_T_ LCTL_T(KC_T)
#define SFT_U LSFT_T(KC_U)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_BASE] = LAYOUT_split_3x6_3_ex2(
    KC_TAB  , KC_QUOT  , KC_COMM , KC_DOT  , KC_P    , KC_Y    , KC_BSLS ,     KC_EQL  , KC_F    , KC_G     , KC_C    , KC_R   , KC_L  , KC_SLSH ,
    KC_LCTL , GUI_A    , ALT_O   , CTL_E   , SFT_U   , KC_I    , CW_TOGG ,     KC_LNG1 , KC_D    , SFT_H    , CTL_T_  , ALT_N  , GUI_S , KC_MINS ,
    OS_LSFT , BUT_SCLN , RALT_Q  , KC_J    , KC_K    , KC_X    ,                         KC_B    , KC_M     , KC_W    , RALT_V , BUT_Z , QK_GESC ,
                                   MED_ESC , NAV_SPC , MOU_TAB ,                         SYM_ENT , NUM_BSPC , FUN_DEL 
  ),
  [L_NAV] = LAYOUT_split_3x6_3_ex2(
    _______ , TD(U_BOOT) , TD(U_RESET) , TD(U_LKSCRN) , TD(U_LOCKKB) , QK_LLCK , _______ ,     _______ , U_REDO     , U_PASTE , U_COPY  , U_CUT   , U_UNDO  , _______ ,
    _______ , KC_LGUI    , KC_LALT     , KC_LCTL      , KC_LSFT      , _______ , _______ ,     _______ , TD(U_CAPS) , KC_LEFT , KC_UP   , KC_DOWN , KC_RGHT , _______ ,
    _______ , _______    , _______     , _______      , _______      , _______ ,                         KC_INS     , KC_HOME , KC_PGUP , KC_PGDN , KC_END  , _______ ,
                                         _______      , _______      , _______ ,                         KC_ENT     , KC_BSPC , KC_DEL  
  ),
  [L_NUM] = LAYOUT_split_3x6_3_ex2(
    _______ , KC_LBRC , KC_7 , KC_8   , KC_9 , KC_RBRC , _______ ,     _______ , QK_LLCK , TD(U_LOCKKB) , TD(U_LKSCRN) , TD(U_RESET) , TD(U_BOOT) , _______ ,
    _______ , KC_SCLN , KC_4 , KC_5   , KC_6 , KC_EQL  , _______ ,     _______ , _______ , KC_LSFT      , KC_LCTL      , KC_LALT     , KC_LGUI    , _______ ,
    _______ , KC_GRV  , KC_1 , KC_2   , KC_3 , KC_BSLS ,                         _______ , _______      , _______      , _______     , _______    , _______ ,
                               KC_DOT , KC_0 , KC_MINS ,                         _______ , _______      , _______      
  ),
  [L_SYM] = LAYOUT_split_3x6_3_ex2(
    _______ , S(KC_LBRC) , KC_AMPR , KC_ASTR , KC_LPRN , S(KC_RBRC) , _______ ,     _______ , QK_LLCK , TD(U_LOCKKB) , TD(U_LKSCRN) , TD(U_RESET) , TD(U_BOOT) , _______ ,
    _______ , S(KC_SCLN) , KC_DLR  , KC_PERC , KC_CIRC , KC_PLUS    , _______ ,     _______ , _______ , KC_LSFT      , KC_LCTL      , KC_LALT     , KC_LGUI    , _______ ,
    _______ , KC_TILD    , KC_EXLM , KC_AT   , KC_HASH , KC_PIPE    ,                         _______ , _______      , _______      , _______     , _______    , _______ ,
                                     KC_LPRN , KC_RPRN , KC_UNDS    ,                         _______ , _______      , _______      
  ),
  [L_FUN] = LAYOUT_split_3x6_3_ex2(
    _______ , KC_F12 , KC_F7 , KC_F8   , KC_F9  , KC_PSCR  , _______ ,     _______ , QK_LLCK , TD(U_LOCKKB) , TD(U_LKSCRN) , TD(U_RESET) , TD(U_BOOT) , _______ ,
    _______ , KC_F11 , KC_F4 , KC_F5   , KC_F6  , KC_SCRL  , _______ ,     _______ , _______ , KC_LSFT      , KC_LCTL      , KC_LALT     , KC_LGUI    , _______ ,
    _______ , KC_F10 , KC_F1 , KC_F2   , KC_F3  , KC_PAUSE ,                         _______ , _______      , _______      , _______     , _______    , _______ ,
                               KC_MENU , KC_SPC , KC_TAB   ,                         _______ , _______      , _______      
  ),
  [L_MEDIA] = LAYOUT_split_3x6_3_ex2(
    _______ , TD(U_BOOT) , TD(U_RESET) , TD(U_LKSCRN) , TD(U_LOCKKB) , QK_LLCK , _______ ,     _______ , RM_TOGG , RM_NEXT , RM_HUEU , RM_SATU , RM_VALU , _______ ,
    _______ , KC_LGUI    , KC_LALT     , KC_LCTL      , KC_LSFT      , _______ , _______ ,     _______ , XXXXXXX , KC_MPRV , KC_VOLD , KC_VOLU , KC_MNXT , _______ ,
    _______ , _______    , _______     , _______      , _______      , _______ ,                         OU_AUTO , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , _______ ,
                                         _______      , _______      , _______ ,                         KC_MSTP , KC_MPLY , KC_MUTE 
  ),
  [L_MOUSE] = LAYOUT_split_3x6_3_ex2(
    _______ , TD(U_BOOT) , TD(U_RESET) , TD(U_LKSCRN) , TD(U_LOCKKB) , QK_LLCK , _______ ,     _______ , U_REDO  , U_PASTE , U_COPY  , U_CUT   , U_UNDO  , _______ ,
    _______ , KC_LGUI    , KC_LALT     , KC_LCTL      , KC_LSFT      , _______ , _______ ,     _______ , XXXXXXX , MS_LEFT , MS_UP   , MS_DOWN , MS_RGHT , _______ ,
    _______ , _______    , _______     , _______      , _______      , _______ ,                         XXXXXXX , MS_WHLL , MS_WHLU , MS_WHLD , MS_WHLR , _______ ,
                                         _______      , _______      , _______ ,                         MS_BTN2 , MS_BTN1 , MS_BTN3 
  ),
  [L_BUTTON] = LAYOUT_split_3x6_3_ex2(
    _______ , U_UNDO  , U_CUT   , U_COPY  , U_PASTE , U_REDO  , _______ ,     _______ , U_REDO  , U_PASTE , U_COPY  , U_CUT   , U_UNDO  , _______ ,
    _______ , KC_LGUI , KC_LALT , KC_LCTL , KC_LSFT , _______ , _______ ,     _______ , XXXXXXX , KC_LSFT , KC_LCTL , KC_LALT , KC_LGUI , _______ ,
    _______ , U_UNDO  , U_CUT   , U_COPY  , U_PASTE , U_REDO  ,                         U_REDO  , U_PASTE , U_COPY  , U_CUT   , U_UNDO  , _______ ,
                                  MS_BTN3 , MS_BTN1 , MS_BTN2 ,                         MS_BTN2 , MS_BTN1 , MS_BTN3 
  ),
  [L_LOCK] = LAYOUT_split_3x6_3_ex2(
    TD(U_LOCKKB) , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
    XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
    XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
                                       XXXXXXX , XXXXXXX , XXXXXXX ,                         XXXXXXX , XXXXXXX , XXXXXXX 
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
#define X(mod, key, action)                     \
    case key:                                   \
      if (get_mods() & mod) {                   \
        if (record->event.pressed) {            \
          action;                               \
        }                                       \
        return false;                           \
      }                                         \
      break;
    X(MOD_MASK_SHIFT, RM_HUEU, rgb_matrix_decrease_hue())
    X(MOD_MASK_SHIFT, RM_SATU, rgb_matrix_decrease_sat())
    X(MOD_MASK_SHIFT, RM_VALU, rgb_matrix_decrease_val())
    X(MOD_MASK_SHIFT, RM_TOGG, rgb_matrix_disable())
    
#undef X
      }
  return true;
}

bool caps_word_press_user(uint16_t keycode) {
  switch (keycode) {
#define X(x) case x:
    X(KC_A)
    X(KC_B)
    X(KC_C)
    X(KC_D)
    X(KC_E)
    X(KC_F)
    X(KC_G)
    X(KC_H)
    X(KC_I)
    X(KC_J)
    X(KC_K)
    X(KC_L)
    X(KC_M)
    X(KC_N)
    X(KC_O)
    X(KC_P)
    X(KC_Q)
    X(KC_R)
    X(KC_S)
    X(KC_T)
    X(KC_U)
    X(KC_V)
    X(KC_W)
    X(KC_X)
    X(KC_Y)
    X(KC_Z)
    
#undef X
  case KC_MINS:
    add_weak_mods(MOD_BIT(KC_LSFT));
    return true;

  case KC_1 ... KC_9:
  case KC_UNDS:
  case KC_BSPC:
  case KC_DEL:
    return true;

  default:
    return false;
  }
}

static void dance_boot(tap_dance_state_t *state, void *user_data) {
  if (state->count >= 2) {
    bootloader_jump();
  }
}

static void dance_reset(tap_dance_state_t *state, void *user_data) {
  if (state->count >= 2) {
    mcu_reset();
  }
}

static void dance_lock(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    layer_on(L_LOCK);
    rgb_matrix_disable_noeeprom();
  } if (state->count == 3) {
    rgb_matrix_enable_noeeprom();
    layer_off(L_LOCK);
  }
}

static void dance_caps(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    caps_word_toggle();
  } else {
    tap_code(KC_CAPS);
  }
}

tap_dance_action_t tap_dance_actions[] = {
  [U_BOOT] = ACTION_TAP_DANCE_FN(dance_boot),
  [U_RESET] = ACTION_TAP_DANCE_FN(dance_reset),
  [U_LKSCRN] = ACTION_TAP_DANCE_DOUBLE(KC_NO, LAG(KC_L)),
  [U_LOCKKB] = ACTION_TAP_DANCE_FN(dance_lock),
  [U_CAPS] = ACTION_TAP_DANCE_FN(dance_caps),
  
};

bool get_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case KC_1 ... KC_0:
  case KC_TAB:
#define X(x)  case x:
    X(KC_MINS)
    X(KC_EQL)
    X(KC_SCLN)
    X(KC_QUOT)
    X(KC_COMM)
    X(KC_DOT)
    X(KC_PLUS)
    X(KC_LBRC)
    X(KC_RBRC)
    X(KC_SLSH)
    X(KC_BSLS)
    X(KC_GRV)
    
#undef X
  case LT(L_BUTTON, KC_SCLN):
    return true;
  default:
    return false;
  }
}

bool is_flow_tap_key(uint16_t keycode) {
  if ((get_mods() & (MOD_MASK_CG | MOD_BIT_LALT)) != 0) {
    return false;
  }
  switch (get_tap_keycode(keycode)) {
  case KC_SPC:
#define X(x)  case x:
    X(KC_A)
    X(KC_B)
    X(KC_C)
    X(KC_D)
    X(KC_E)
    X(KC_F)
    X(KC_G)
    X(KC_H)
    X(KC_I)
    X(KC_J)
    X(KC_K)
    X(KC_L)
    X(KC_M)
    X(KC_N)
    X(KC_O)
    X(KC_P)
    X(KC_Q)
    X(KC_R)
    X(KC_S)
    X(KC_T)
    X(KC_U)
    X(KC_V)
    X(KC_W)
    X(KC_X)
    X(KC_Y)
    X(KC_Z)
    
    X(KC_MINS)
    X(KC_EQL)
    X(KC_SCLN)
    X(KC_QUOT)
    X(KC_COMM)
    X(KC_DOT)
    X(KC_PLUS)
    X(KC_LBRC)
    X(KC_RBRC)
    X(KC_SLSH)
    X(KC_BSLS)
    X(KC_GRV)
    
#undef X
    return true;
  }
  return false;
}
