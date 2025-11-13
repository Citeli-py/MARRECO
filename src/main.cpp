#include "KeyboardABNT2.hpp"

#define BUTTON_PIN 2  // Botão ligado ao pino 2 e ao GND

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    KeyboardABNT2 key = KeyboardABNT2();

    key.press(KEY_LEFT_GUI);
    key.press('r');

    key.release_all();

    delay(2000);
    key.println("https://ict.uff.br/");
    key.press(KEY_RETURN);
    key.release_all();
  }

}
