#include<Wire.h>
const int transmit=9;
const int receive=10;
int distance;
void setup() {
  // put your setup code here, to run once:
   
    Wire.begin();
    Serial.begin(9600);
    pinMode(transmit,OUTPUT);
    pinMode(receive,INPUT);
}

void loop() {
if (Serial.available()){
  
distance = Serial.read();
Wire.beginTransmission(9);
Wire.write(distance);
Serial.println(distance);
delay(500);
Wire.endTransmission();
}
}
