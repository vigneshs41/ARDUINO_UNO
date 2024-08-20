const int trigPin = 12;
const int echoPin = 13;
long duration;
int distance;
void setup() {
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(A0,OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  analogWrite(A0,255); 
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
  if(distance<=50)
  {
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(0,HIGH);
    digitalWrite(1,LOW);
    analogWrite(3,130);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    analogWrite(6,130);
    delay(7000);
  }
  else
  {
    digitalWrite(0,HIGH);
    digitalWrite(1,LOW);
    analogWrite(3,80);
    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    analogWrite(5,80);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    analogWrite(6,80);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    analogWrite(9,80);
    }
}
