void handleChromeKey(keyrecord_t *record, uint8_t id, uint8_t opt);

enum function_id {
    TRICKY_ESC = 0,
    MY_PG_CONTROL,
    MY_CHROME_NEXT,
    MY_CHROME_PREV,
    MY_BACKSPACE, 
    KEYPAD_00,
    MY_PASTE,
    MY_UNIX_INSERT,
    MY_BACKLIGHT_ENABLE
};
