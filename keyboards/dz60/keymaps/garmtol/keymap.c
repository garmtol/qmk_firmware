#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* LAYOUT_60_ansi
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
     * │Esc│1  │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │8  │9  │0  │-  │=  │Bck    │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     * │Tab  │Q  │W  │E  │R  │T  │Y  │U  │I  │O  │P  │[  │]  │\    │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │Mo(1) │A  │S  │D  │F  │G  │H  │J  │K  │L  │;  │'  │Enter   │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
     * │Shift   │Z  │X  │C  │V  │B  │N  │M  │,  │.  │/  │Shift     │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
     * │Ctl │Sup │Alt │                        │Alt │Mo  │Sup │Ctl │
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
     */
    LAYOUT_60_ansi(
        KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL,      KC_BSPC,
        KC_TAB,      KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        XXXXXXX,      KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,      KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,      KC_RSFT,
        KC_LCTL, KC_LCMD,      KC_LOPT,           KC_SPC,                KC_ROPT, KC_APP,      XXXXXXX, KC_RCTL
    )
};
