#include <DigiKeyboard.h>

int x=1;

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  pinMode(1,OUTPUT);
}

void loop() {
  if ( x == 1 ){
    DigiKeyboard.sendKeyStroke(81, MOD_CONTROL_LEFT | MOD_ALT_LEFT);
    DigiKeyboard.delay(500);
    digitalWrite(1,HIGH);
    x=x-1;
  }
  else{
    DigiKeyboard.sendKeyStroke(82, MOD_CONTROL_LEFT | MOD_ALT_LEFT);
    DigiKeyboard.delay(500);
    digitalWrite(1,HIGH);
    x=x+1;
  }
  DigiKeyboard.delay(500);
  digitalWrite(1,LOW);
}