int sensor=A0;
int value=0;
const int transmit=9;
const int receive=10;
long duration;
int distance;
int led1=13;
int led2=12;
int led3=11;
void setup() {
  // put your setup code here, to run once:
pinMode(sensor,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(transmit,OUTPUT);
pinMode(receive,INPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
value=analogRead(sensor);

digitalWrite(transmit,LOW);
delayMicroseconds(2);
digitalWrite(transmit,HIGH);
delayMicroseconds(10);
digitalWrite(transmit,LOW);
duration=pulseIn(receive,HIGH);
distance=duration*0.034/2;

if(value>=500&&distance<=10)
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  Serial.println("both sensor are trigged");
  Serial.println(value);
  Serial.println(distance);
  delay(1000);

}
else if(value>=500&&distance>=100)
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  Serial.println("LRD sensor trigged");
  Serial.println(value);
  delay(1000);

}
else
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  Serial.println("ultrasonic sensor trigged");
  Serial.println(distance);
  delay(1000);

}
}
