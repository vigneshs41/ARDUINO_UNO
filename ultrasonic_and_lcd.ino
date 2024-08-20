const int transmit=9;
const int receive=10;
long duration;
int distance;
#include<LiquidCrystal.h>
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
 pinMode(transmit,OUTPUT);
 pinMode(receive,INPUT);
 //Serial.begin(9600);
 lcd.begin(16,2);
}
void loop() {
digitalWrite(transmit,LOW);
delayMicroseconds(2);
digitalWrite(transmit,HIGH);
delayMicroseconds(10);
digitalWrite(transmit,LOW);
duration=pulseIn(receive,HIGH);
distance=duration*0.034/2;
lcd.setCursor(0,0);
lcd.print("distance");
lcd.setCursor(0,1);
delay(100);
lcd.print(distance);
//lcd.clear();
//delay(500);
}
