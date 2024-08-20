///#include <Wire.h>

//String value;
const int transmit=9;
const int receive=10;
long duration;
int distance;


void setup() {
  // put your setup code here, to run once:
  //pinMode(2,OUTPUT);
  //pinMode(3,OUTPUT);
    //Wire.begin();
    Serial.begin(9600);
    pinMode(transmit,OUTPUT);
    pinMode(receive,INPUT);

  Serial.begin(9600);

}

void loop() {
  digitalWrite(transmit,LOW);
  delayMicroseconds(2);
  digitalWrite(transmit,HIGH);
  delayMicroseconds(10);
  digitalWrite(transmit,LOW);
  duration=pulseIn(receive,HIGH);
  distance=duration*0.034/2;
  Serial.println(distance);
  delay(1000);  
  //Wire.beginTransmission(9);
  //Wire.write(distance);
  //Serial.println(distance);
  //delay(500);
  //Wire.endTransmission();
}
