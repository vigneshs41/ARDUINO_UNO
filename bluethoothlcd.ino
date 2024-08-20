#include<LiquidCrystal.h>
const int rs=13,en=11,d4=6,d5=5,d6=4,d7=3;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
String value;
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
      lcd.clear();
      value=Serial.readString();
      Serial.println(value);
      lcd.print(value);
    }
    if(value=="all led on")
    {
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
    }
    if(value=="all led off")
    {
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
    }
    if(value=="green light on")
    {
      digitalWrite(2,HIGH);
    }
    if(value=="red light on")
    {
      digitalWrite(3,HIGH);
    }

}
