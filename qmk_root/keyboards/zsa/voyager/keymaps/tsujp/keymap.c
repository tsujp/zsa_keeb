#include QMK_KEYBOARD_H
#include "version.h"

/* TODOS: */
/* colours per layer to better see what is going on. */
/* disable mod tap? */
/* 1. Need a non debounce version of shift because the delay is currently too long and it slows me down a lot. The default is combos i think so i might need to ask about using chords which means thered be no delay right? */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         _______, KC_Y,    KC_U,    KC_I,    KC_O,    LCTL_T(KC_BSPC),
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_TAB,  KC_H,    KC_J,    KC_K,    KC_L,    KC_P,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         _______, KC_N,    KC_M,    KC_COMMA,KC_DOT,  KC_SCLN,
        _______, _______, _______, KC_LCTL, LSFT_T(KC_SPC), MO(1),               _______,  MO(2),  KC_LCTL, _______, _______, _______,
                                            KC_ENT,  KC_LCTL,                      _______,KC_LGUI
    ),
    [1] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                      _______, _______, KC_4, KC_5, KC_6, _______,
        _______, _______, _______, _______, _______, _______,                      _______, _______, KC_1, KC_2, KC_3, KC_0,
        _______, _______, _______, _______, _______, _______,                      _______, _______, KC_7, KC_8, KC_9, _______,
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
                                            _______, _______,                      _______, _______
    ),
    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, KC_MINS, KC_EQL,  _______,
        _______, _______, _______, KC_LCBR, KC_LPRN, _______,                      _______, _______, KC_RPRN, KC_RCBR, _______, _______,
        _______, _______, _______, _______, KC_LBRC, _______,                      _______, _______, KC_RBRC, _______, _______, _______,
        _______, _______, _______, _______, KC_ENT,  _______,                      _______, _______, _______, _______, _______, _______,
                                            _______, _______,                      _______, _______
    ),

    /* [0] = LAYOUT( */
    /*     CW_TOGG, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, */
    /*     SFT_T(KC_BSPC),KC_A, KC_S, KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, RSFT_T(KC_QUOT), */
    /*     KC_LGUI, ALT_T(KC_Z),KC_X, KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,    KC_COMMA,KC_DOT,  RALT_T(KC_SLSH), KC_RCTL, */
    /*     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, */
    /*                             LT(1,KC_ENT), CTL_T(KC_TAB),           SFT_T(KC_BSPC), LT(2,KC_SPC) */
    /* ), */
    /* [1] = LAYOUT( */
    /*     KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, */
    /*     KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                      KC_7,    KC_8,    KC_9,    KC_MINS, KC_SLSH, KC_F12, */
    /*     _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,                      KC_4,    KC_5,    KC_6,    KC_PLUS, KC_ASTR, KC_BSPC, */
    /*     _______, _______, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR,                      KC_1,    KC_2,    KC_3,    KC_DOT,  KC_EQL,  KC_ENT, */
    /*                                                  _______, _______,    _______, KC_0 */
    /* ), */
    /* [2] = LAYOUT( */
    /*     RGB_TOG, QK_KB,   RGB_MOD, RGB_M_P, RGB_VAD, RGB_VAI,                      _______, _______, _______, _______, _______, QK_BOOT, */
    /*     _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______,                      KC_PGUP, KC_HOME, KC_UP,   KC_END,  _______, _______, */
    /*     _______, KC_MPRV, KC_MNXT, KC_MSTP, KC_MPLY, _______,                      KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, */
    /*     _______, _______, _______, _______, _______, _______,                      _______, C(S(KC_TAB)), C(KC_TAB), _______, _______, _______, */
    /*                                                  _______, _______,    _______, _______ */
    /* ), */
};
