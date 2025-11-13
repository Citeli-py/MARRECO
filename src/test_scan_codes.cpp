#include <Keyboard.h>

void test_scan_codes(uint8_t *modifier) {
  
  for(int i=0x00; i<= 0x10; i++) {
    if(modifier != NULL)
      Keyboard.press(*modifier);

    Keyboard.press(i);
    Keyboard.releaseAll();
    
    Keyboard.print(" ");
    Keyboard.println(i);

  }
}


