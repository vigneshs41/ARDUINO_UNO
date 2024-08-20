const int transmit=13;
const int receive=10;
long duration;
int distance;
int sensor=A0;
int IR = A2;
int a=14;
int b=15;
int c=16;
int d=17;
int value=0;
int value1=0;
int led1=6;
int led2=7;
//int led3=8;
//int led4=9;
#include "dht.h"
#define dht_apin A1
#include<LiquidCrystal.h>
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
dht DHT;
void setup() {
 pinMode(transmit,OUTPUT);
 pinMode(sensor,INPUT);
 pinMode(receive,INPUT);
 pinMode(IR,INPUT);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
 Serial.begin(9600);
 delay(500);//Delay to let system boot
 Serial.println("DHT11 Humidity & temperature Sensor\n\n");
 delay(1000);
 lcd.begin(16,2);

}
void loop() {
  value1=digitalRead(IR);
  value=analogRead(sensor);
digitalWrite(transmit,LOW);
delayMicroseconds(2);
digitalWrite(transmit,HIGH);
delayMicroseconds(10);
digitalWrite(transmit,LOW);
duration=pulseIn(receive,HIGH);
distance=duration*0.034/2;
Serial.print("distance");
Serial.println(distance);

    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
if(distance<=100)
{
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    delay(500);
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    delay(500);
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
}
if(value1==HIGH)
 {
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    delay(500);
    digitalWrite(led3,HIGH);
    delay(500);
    digitalWrite(led4,HIGH);
    delay(500);
    digitalWrite(led3,LOW);
    delay(500);
    digitalWrite(led4,LOW);
    delay(500);
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
 }
 else
 {
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  
 }
if(distance<=100&&value1==HIGH)
{
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
  
}
if(value>=500)
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
}
else
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
}
 DHT.read11(dht_apin);
    lcd.setCursor(0,0);
    lcd.print("hum =");
    lcd.print(DHT.humidity);
    lcd.print("%  ");
    lcd.setCursor(0,1 );
    lcd.print("tem =");
    lcd.print(DHT.temperature); 
    lcd.println("C  ");
    delay(1000);//Wait 5 seconds before accessing sensor again.
}
//delay(100);
