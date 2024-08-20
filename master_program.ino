#include<Wire.h>
int x=0;
void setup() {
  // put your setup code here, to run once:
    Wire.begin();
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Wire.beginTransmission(9);
Wire.write(x);
Serial.println(x);
Wire.endTransmission();
x++;
if(x>5)
{
x=0;
delay(500);
}
}
