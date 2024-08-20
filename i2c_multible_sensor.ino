#include<Wire.h>
//int x=0;
#include "dht.h" 
#define dht_apin A0
 dht DHT;

const int transmit=9;
const int receive=10;
long duration;
int distance;

int sensor=A1;
int value=0;


//int IR = 6;
//int value1=0;
int hum=0;
int tem=0;
void setup() {
  // put your setup code here, to run once:
   
    Wire.begin();
    Serial.begin(9600);
    pinMode(transmit,OUTPUT);
    pinMode(receive,INPUT);
    pinMode(sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //x=analogRead(sensor);
 value=analogRead(sensor);
 
 //value1=digitalRead(IR);
  
digitalWrite(transmit,LOW);
delayMicroseconds(2);
digitalWrite(transmit,HIGH);
delayMicroseconds(10);
digitalWrite(transmit,LOW);
duration=pulseIn(receive,HIGH);
distance=duration*0.034/2;

DHT.read11(dht_apin);
     //Serial.println("hum =");
     //Serial.println(DHT.humidity);
     //Serial.println("%  ");
     //Serial.println("tem =");
     //Serial.println(DHT.temperature); 
     //Serial.println("C  ");
     //delay(500);
    DHT.humidity= hum;
    DHT.temperature= tem;

Wire.beginTransmission(9);
Wire.write(distance);
Serial.println(distance);
delay(500);
Wire.endTransmission();

Wire.beginTransmission(8);
Wire.write(value);
Serial.println("light");
Serial.println(value);
delay(500);
Wire.endTransmission();

Wire.beginTransmission(5);
Wire.write(hum);
Serial.println("huminity");
Serial.println(hum);
delay(500);
Wire.endTransmission();

Wire.beginTransmission(4);
Wire.write(tem);
Serial.println("temperature");
Serial.println(tem);
delay(500);
Wire.endTransmission();

}
