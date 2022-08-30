#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT_5x7(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LBRC, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_LALT, KC_LEFT, KC_RGHT, KC_SPC, KC_BSPC, KC_NO, LGUI(KC_SPC), KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_RBRC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DOWN, KC_BSLS, KC_NO, KC_NO, KC_ENT, LCTL(KC_SPC), MO(1), KC_NO, MO(2)),

[_LAYER1] = LAYOUT_5x7(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_TRNS, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_NO, KC_TRNS, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV, KC_NO, KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS, KC_COMM, KC_LEFT, KC_RGHT, KC_SPC, KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_NO, KC_UP, KC_P7, KC_P8, KC_P9, KC_PAST, KC_TRNS, KC_TRNS, KC_DOWN, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_TRNS, KC_AMPR, KC_P1, KC_P2, KC_P3, KC_PSLS, KC_TRNS, KC_PDOT, KC_P0, KC_PEQL, KC_TRNS, KC_DEL, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),

[_LAYER2] = LAYOUT_5x7(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, EE_CLR, DB_TOGG, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_MPLY, KC_NO, KC_NO, KC_MPRV, KC_MNXT, KC_MSTP, KC_NO, KC_VOLD, KC_VOLU, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO) 

};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
