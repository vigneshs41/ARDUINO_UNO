const int transmit=9;
const int receive=10;
long duration;
int distance;
void setup() {
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
Serial.print("distance");
Serial.println(distance);
//delay(100);
}
