#include<Wire.h>
String distance;
void setup() {
Serial.begin(9600);
Wire.begin(9);
Wire.onReceive(receiveEvent);
}
void receiveEvent(int bytes)
{
  distance=Wire.read();
  Serial.println("message is");
  Serial.println(distance);
  delay(500);
}
void loop() {
  // put your main code here, to run repeatedly:
}
