int sensor=A0;
int value=0;
const int transmit=9;
const int receive=10;
long duration;
int distance;
#include<LiquidCrystal.h>
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
pinMode(sensor,INPUT);
pinMode(transmit,OUTPUT);
pinMode(receive,INPUT);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
value=analogRead(sensor);

digitalWrite(transmit,LOW);
delayMicroseconds(2);
digitalWrite(transmit,HIGH);
delayMicroseconds(10);
digitalWrite(transmit,LOW);
duration=pulseIn(receive,HIGH);
distance=duration*0.034/2;

if(value>=500&&distance<=10)
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("both are trigged");
  lcd.setCursor(0,1);
  lcd.print(distance);
  lcd.print(value);
  delay(1000);

}
else if(value>=500&&distance>=100)
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("LIGHT ON");
  lcd.setCursor(0,1);
  lcd.print(value);
  delay(1000);
  }
else
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("object far");
  lcd.setCursor(0,1);
  lcd.print(distance);
  if(distance<=10);
  {
    lcd.setCursor(0,0);
    lcd.print("object closed");
    lcd.setCursor(0,1);
    lcd.print(distance);    
  }
  delay(1000);
  }
}
