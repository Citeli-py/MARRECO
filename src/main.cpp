#include "KeyboardABNT2.hpp"

#define BUTTON_PIN 2  // Botão ligado ao pino 2 e ao GND

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Keyboard.begin(KeyboardLayout_pt_BR);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {

    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('t');
    Keyboard.releaseAll();

    delay(2000);
    Keyboard.println("https://ict.uff.br/");
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();

  }
}
