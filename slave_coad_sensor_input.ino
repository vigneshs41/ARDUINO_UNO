#include<Wire.h>
int led=13;
int distance=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
Wire.begin(9);
Wire.onReceive(receiveEvent);
}
void receiveEvent(int bytes)
{
  distance=Wire.read();
  Serial.println(distance);
  delay(500);
}
void loop() {
  // put your main code here, to run repeatedly:
 if(distance<=100)
{
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(led,LOW);
  delay(200);
}
 else
{
  digitalWrite(led,LOW);
  delay(200);
  
}
}
