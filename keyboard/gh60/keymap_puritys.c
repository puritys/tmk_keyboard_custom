#include "keymap_common.h"
#include "keymap_puritys.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ANSI(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          SPC,                     FN0, RGUI,APP, RCTL),

    /* layout 1: My Normal case */
    KEYMAP_ANSI(
        FN8, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          SPC,                     RALT,FN0, APP, RCTL),

    /* 2: My favorite 
    */
    KEYMAP_ANSI(
        FN8, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, FN9, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        FN0,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,FN10,FN5,          SPC,                     FN0, RALT, APP, RCTL),

    /* 3: Mac layout */
    KEYMAP_ANSI(
        FN8, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, FN9, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        FN0,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,FN4,          SPC,                     FN0, RALT, APP, RCTL),

    /* 4: Left Alt layout*/
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, DEL, \
        TRNS,FN6,FN7,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,TRNS,TRNS,TRNS,TRNS,TRNS, \
        FN0,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGDN,END,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,   \
        TRNS,TRNS,FN5,          TRNS,                    TRNS,TRNS,TRNS,TRNS),


    /* 5: LGUI layout */
    KEYMAP_ANSI(
        5,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        FN0,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,FN11,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,   \
        TRNS,FN10,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* 6 Fn layout
      v = FN6 = paste
      q = FN16 = layout 0
      w = FN17 = laygout 1
      e = FN18 = layout 2
      z = FN1 = backlight decrease
      x = FN2 = backlight toggle
      c = FN3 = backlight increase
     */
    KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, \
        CAPS,FN16, FN17, FN18,TRNS,TRNS,TRNS,PGUP,FN12,PGDN,PSCR,TRNS,INS, TRNS,  \
        FN0,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,FN14,FN13,FN15,END, TRNS,     TRNS, \
        TRNS,FN1, FN2,FN3,FN6,FN21,TRNS,TRNS,PGUP,PGDN,TRNS,         TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                     TRNS,TRNS,TRNS,TRNS),

    /* 7: Left Alt for Mac */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, DEL, \
        TRNS,FN19,FN20,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,TRNS,TRNS,TRNS,TRNS,TRNS, \
        FN0,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGDN,END,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,   \
        TRNS,TRNS,FN4,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* 8 layout selector*/
    KEYMAP_ANSI(
        FN5, FN6, FN7, FN8, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,FN5, FN8, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,FN7, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,FN6, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),


};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(6),
    [1] = ACTION_BACKLIGHT_DECREASE(),
    [2] = ACTION_BACKLIGHT_TOGGLE(),
    [3] = ACTION_BACKLIGHT_INCREASE(),
    [4] = ACTION_LAYER_MODS(7, MOD_LALT),
    [5] = ACTION_LAYER_MODS(4, MOD_LALT),
    [6] = ACTION_FUNCTION_OPT(MY_CHROME_PREV, 1),
    [7] = ACTION_FUNCTION_OPT(MY_CHROME_NEXT, 1),
    [8] = ACTION_FUNCTION(TRICKY_ESC),
    [9] = ACTION_FUNCTION(MY_BACKSPACE),
    [10] = ACTION_LAYER_MODS(5, MOD_LGUI),
    [11] = ACTION_FUNCTION(MY_UNIX_INSERT),
    [12] = ACTION_FUNCTION_OPT(MY_PG_CONTROL, 1),
    [13] = ACTION_FUNCTION_OPT(MY_PG_CONTROL, 2),
    [14] = ACTION_FUNCTION_OPT(MY_PG_CONTROL, 3),
    [15] = ACTION_FUNCTION_OPT(MY_PG_CONTROL, 4),
    [16] = ACTION_DEFAULT_LAYER_SET(0),  //layout 0
    [17] = ACTION_DEFAULT_LAYER_SET(1),  //  layout 1
    [18] = ACTION_DEFAULT_LAYER_SET(2),  //  layout 2
    [19] = ACTION_FUNCTION_OPT(MY_CHROME_PREV, 2),//MAC
    [20] = ACTION_FUNCTION_OPT(MY_CHROME_NEXT, 2), //MAC
    [21] = ACTION_FUNCTION(MY_BACKLIGHT_ENABLE),

};

#ifdef KEYMAP_IN_EEPROM_ENABLE
uint16_t keys_count(void) {
    return sizeof(keymaps) / sizeof(keymaps[0]) * MATRIX_ROWS * MATRIX_COLS;
}
uint16_t fn_actions_count(void) {
    return sizeof(fn_actions) / sizeof(fn_actions[0]);
}
#endif 

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{/*{{{*/
    //dprintf("Call macro pressed = %d \n", record->event.pressed);
    switch (id) {
        case MY_PASTE:
            return (record->event.pressed ?
                MACRO(T(PSTE), END ) :
                MACRO_NONE);
        case KEYPAD_00:
            return (record->event.pressed ?
                    MACRO( T(P0), T(P0), END ) :
                    MACRO_NONE );
    }
    return MACRO_NONE;
}/*}}}*/


#define MODS_SHIFT_MASK (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
#define MODS_CTRL_MASK   (MOD_BIT(KC_LCTRL)|MOD_BIT(KC_RCTRL))

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{/*{{{*/
    static uint8_t tricky_esc_registered;
    static uint8_t mod = 0;
    static uint8_t key;
    //dprintf("zzz %d\n", record->tap.count);
    switch (id) {
        case TRICKY_ESC:
            if (record->event.pressed) {
                if (get_mods() & MODS_SHIFT_MASK) {
                    tricky_esc_registered = KC_GRV;
                }
                else {
                    tricky_esc_registered = KC_ESC;
                }
                register_code(tricky_esc_registered);
                send_keyboard_report();
            }
            else {
                unregister_code(tricky_esc_registered);
                send_keyboard_report();
            }
            break;
        case MY_BACKSPACE:
            mod = get_mods();
            if (record->event.pressed) {
                if (mod & MODS_CTRL_MASK) {
                    key = KC_DELETE;
                }
                else {
                    key = KC_BSPC;
                }
                del_mods(mod);
                add_key(key);
                send_keyboard_report();
                add_mods(mod);   // return Ctrl but not sent
            } else {
                del_key(key);
                send_keyboard_report();
            }
            break;

       case MY_PG_CONTROL:
            //dprintf("in MY_PG_CONTROL opt = %d\n", opt);
            mod = get_mods();
            if (record->event.pressed) {
                switch (opt) {
                    case 1:
                        key = (mod & MODS_CTRL_MASK) ? KC_PGUP : KC_UP;
                        break; 
                    case 2:
                        key = (mod & MODS_CTRL_MASK) ? KC_PGDN : KC_DOWN;
                        break; 
                    case 3:
                        key = (mod & MODS_CTRL_MASK) ? KC_HOME : KC_LEFT;
                        break;
                    case 4:
                        key = (mod & MODS_CTRL_MASK) ? KC_END : KC_RIGHT;
                        break; 
                }
                if (mod & MODS_CTRL_MASK)  {
                    del_mods(mod);
                    add_key(key);
                    send_keyboard_report();
                    add_mods(mod);   // return Ctrl but not sent
                }  else {
                    add_key(key);
                    send_keyboard_report();
                }
            } else {
                del_key(key);
                send_keyboard_report();         
            }
            break;
        case MY_UNIX_INSERT:
            mod = get_mods();
            if (record->event.pressed) {
                del_mods(mod);
                add_mods(MOD_BIT(KC_LSHIFT));
                add_key(KC_INS);
                send_keyboard_report();
                add_mods(mod);   // return mods but don't send
            } else {
                del_mods(MOD_BIT(KC_LSHIFT));
                del_key(KC_INS);
                send_keyboard_report();
            }
            break;
        case MY_CHROME_PREV:
        case MY_CHROME_NEXT:
            handleChromeKey(record, id, opt);
            break;
        case MY_BACKLIGHT_ENABLE:
            backlight_enable();
            break;
    }
}/*}}}*/

void handleChromeKey(keyrecord_t *record, uint8_t id, uint8_t opt) {
    uint8_t mod = 0;
    uint8_t newMod = 0, newModNext = 0;
    mod = get_mods();
    if (opt == 1) {
        newMod = MOD_BIT(KC_LCTRL) | MOD_BIT(KC_LSHIFT);
        newModNext = MOD_BIT(KC_LCTRL);
    } else if (opt == 2) {//Mac
        newMod = MOD_BIT(KC_LGUI) | MOD_BIT(KC_LSHIFT);
        newModNext = MOD_BIT(KC_LGUI);
    }
    if (record->event.pressed) {
        switch (id) {
            case MY_CHROME_PREV:
                del_mods(mod);
                add_mods(newMod);
                add_key(KC_TAB);
                send_keyboard_report();

                del_mods(newMod);
                add_mods(mod);   // return alt but don't send
                break;
            case MY_CHROME_NEXT:
                del_mods(mod);
                add_mods(newModNext);
                add_key(KC_TAB);
                send_keyboard_report();
                del_mods(newModNext);
                add_mods(mod);   // return alt but don't send
                break;
        }
    } else {
        del_key(KC_TAB);
        del_mods(newMod);
        send_keyboard_report();
    }


}


