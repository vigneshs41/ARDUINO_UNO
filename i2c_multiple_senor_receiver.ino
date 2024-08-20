#include<Wire.h>
//int led=13;
int distance=0;
int value=0;
int value1=0;
int hum=0;
int tem=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//pinMode(led,OUTPUT);
Wire.begin(9);
Wire.onReceive(receiveEvent);

Wire.begin(8);
Wire.onReceive(receiveEvent1);

Wire.begin(5);
Wire.onReceive(receiveEvent2);

Wire.begin(4);
Wire.onReceive(receiveEvent3);

Wire.begin(3);
Wire.onReceive(receiveEvent4);

}
void receiveEvent(int bytes)
{
  distance=Wire.read();
  Serial.println("distance is");
  Serial.println(distance);
  delay(500);
}
void receiveEvent1(int bytes)
{
  distance=Wire.read();
  Serial.println("light indensity is");
  Serial.println(value);
  delay(500);
}
void receiveEvent2(int bytes)
{
  distance=Wire.read();
  Serial.println("huminity is");
  Serial.println(hum);
  delay(500);
}
void receiveEvent3(int bytes)
{
  distance=Wire.read();
  Serial.println("temperature is");
  Serial.println(tem);
  delay(500);
}
void receiveEvent4(int bytes)
{
  distance=Wire.read();
  Serial.println("object is");
  Serial.println(value1);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
}
