/*
  HID Keyboard example


  created 2020
  by Deqing Sun for use with CH55xduino

  This example code is in the public domain.

*/
#ifndef USER_USB_RAM
#error "This example needs to be compiled with a USER USB setting"
#endif

#include "USBHIDKeyboard.h"

uint8_t powershell[10] = {'p','o','w','e','r','s','h','e','l','l'};
uint8_t helloworld[10] = {'h','e','l','l','o','w','o','r','l','d'};
void setup() {
  USBInit();
  delay(500);
}

void loop() {
  delay(5000);
  Keyboard_press(KEY_LEFT_GUI);
  Keyboard_press('r');
  delay(10);
  Keyboard_releaseAll();
  //Keyboard_release(KEY_LEFT_GUI);
  //Keyboard_release('R');
  delay(500);
  for (uint8_t i=0;i<sizeof(powershell);i++){                                  //load data for upload
    Keyboard_write(powershell[i]);
  }
  Keyboard_press(0xB0);
  Keyboard_releaseAll();
  delay(500);
  for (uint8_t i=0;i<sizeof(helloworld);i++){                                  //load data for upload
    Keyboard_write(helloworld[i]);
  }
  for(;;){ /*empty*/ };
  
  
}
