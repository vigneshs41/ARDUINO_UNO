#include<Wire.h>
int led=13;
int x=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
Wire.begin(9);
Wire.onReceive(receiveEvent);
}
void receiveEvent(int bytes)
{
  x=Wire.read();
  Serial.print(x);
}
void loop() {
  // put your main code here, to run repeatedly:
if(x==0);
{
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(led,LOW);
  delay(200);
}
if(x==3);
{
  digitalWrite(led,HIGH);
  delay(400);
  digitalWrite(led,LOW);
  delay(400);
}
} 
