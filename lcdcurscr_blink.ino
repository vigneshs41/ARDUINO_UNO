#include<LiquidCrystal.h>
const int rs=13,en=11,d4=6,d5=5,d6=4,d7=3;
  LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  lcd.begin(16,2);
  lcd.print("welcome");
  
  // put your setup code here, to run once:

}

void loop() {
  lcd.setCursor(4,2);
  lcd.blink();
  delay(1000);
  lcd.noBlink();
  delay(1000);
  // put your main code here, to run repeatedly:

}
