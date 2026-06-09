_#include QMK_KEYBOARD_H

enum custom_keycodes {
    HYPER_ONLY = SAFE_RANGE,
    HYPER_2,
    HYPER_3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        HYPER_ONLY, HYPER_2,   HYPER_3,
        LGUI(KC_C), LGUI(KC_V), LGUI(KC_Z)
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HYPER_ONLY:
            if (record->event.pressed) {
                register_mods(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LGUI));
            } else {
                unregister_mods(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LGUI));
            }
            return false;
        case HYPER_2:
            if (record->event.pressed) {
                register_mods(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LGUI));
                tap_code(KC_2);
                unregister_mods(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LGUI));
            }
            return false;
        case HYPER_3:
            if (record->event.pressed) {
                register_mods(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LGUI));
                tap_code(KC_3);
                unregister_mods(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LGUI));
            }
            return false;
    }
    return true;
}

bool oled_task_user(void) {
    oled_write_P(PSTR("pandaboard\n"), false);
    oled_write_ln_P(PSTR("Ready"), false);
    return false;
}
