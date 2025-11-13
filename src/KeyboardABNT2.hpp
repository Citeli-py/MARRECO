#include "scanCodes.hpp"

class KeyboardABNT2 {
  
    public:

    KeyboardABNT2() {
        Keyboard.begin();
        delay(2000);
    }

    ~KeyboardABNT2() {
        Keyboard.end();
    }

    void press(char caracter) {
        KeyMap* result = this->get_keymap(caracter);
        if(result != NULL) {
            Keyboard.press(result->modifier);
            Keyboard.press(result->keycode);
            return;
        }

        Keyboard.press(caracter);
    }

    void release(char caracter) {
        KeyMap* result = this->get_keymap(caracter);
        if(result != NULL) {
            Keyboard.release(result->modifier);
            Keyboard.release(result->keycode);
            return;
        }

        Keyboard.release(caracter);
    }

    void release_all() {
        Keyboard.releaseAll();
    }

    void write(char caracter) {
        KeyMap* result = this->get_keymap(caracter);
        if(result != NULL) {
            if(result->modifier != MOD_NONE)
                Keyboard.press(result->modifier);

            Keyboard.press(result->keycode);
            Keyboard.releaseAll();
            return;
        }

        Keyboard.write(caracter);
    }

    void println(String phrase) {
        int i=0;
        while (phrase[i] != '\0'){
            this->write(phrase[i]);
            i+=1;
        }
        
    }

    private:
    KeyMap* get_keymap(char caracter) {
        for (int i = 0; i < LEN_ABNT_SCAN_CODES; i++) {
            if (ABNT_SCAN_CODES[i].wanted_char == caracter) {
                return (KeyMap*) &ABNT_SCAN_CODES[i]; 
            }
        }
        return NULL;
    }

};
