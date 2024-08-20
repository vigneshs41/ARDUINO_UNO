#include<LiquidCrystal.h>
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
String value="vickyservesh";
String value1;
void setup() {
  // put your setup code here, to run once:
  //pinMode(2,OUTPUT);
  //pinMode(3,OUTPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,1);
      

}

void loop() {
    if (Serial.available())
    {
      //lcd.clear();
      value1=Serial.readString();
      Serial.print(value1);
     if(value==value1)
     {
      lcd.print("welcome boss");
    }
    else
    {
      lcd.print("try again");
    }
    }
}
   
