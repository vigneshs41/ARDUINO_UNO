int button=12;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button)==HIGH)
  {
digitalWrite(13,HIGH);
delay(500);
digitalWrite(13,LOW);
delay(500);
}
}
