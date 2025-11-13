#include <Keyboard.h>

#define MOD_NONE 0x00
#define LEN_ABNT_SCAN_CODES 10

typedef struct {
    char wanted_char;
    uint8_t keycode;
    uint8_t modifier;
} KeyMap;


const KeyMap ABNT_SCAN_CODES[] = {

    { ';',  0x2f,   MOD_NONE },
    { ':',  0x3f,   MOD_NONE },
    { ']',  0x5c,   MOD_NONE },
    { '[',  0x5d,   MOD_NONE },
    { '\'', 0x60,   MOD_NONE },
    { '}',  0x7c,   MOD_NONE },
    { '{',  0x7d,   MOD_NONE },
    { '\"', 0x7E,   MOD_NONE },
    { '?' , 0x77,   KEY_RIGHT_ALT },
    { '/' , 0x71,   KEY_RIGHT_ALT },

};
