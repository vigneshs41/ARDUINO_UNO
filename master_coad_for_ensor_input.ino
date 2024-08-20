#include<Wire.h>
//int x=0;
const int transmit=9;
const int receive=10;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
    Wire.begin();
    Serial.begin(9600);
    pinMode(transmit,OUTPUT);
    pinMode(receive,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //x=analogRead(sensor);
  
digitalWrite(transmit,LOW);
delayMicroseconds(2);
digitalWrite(transmit,HIGH);
delayMicroseconds(10);
digitalWrite(transmit,LOW);
duration=pulseIn(receive,HIGH);
distance=duration*0.034/2;

Wire.beginTransmission(9);
Wire.write(distance);
Serial.println(distance);
delay(500);
Wire.endTransmission();

}
