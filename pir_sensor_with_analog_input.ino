int sensor=A0;
int led = 5;
int value=0;
void setup() {
  // put your setup code here, to run once:
pinMode(sensor,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(sensor);
  if(value<=500)
  {
  Serial.println("LIGHT OFF");
  delay(500);
  }
  else
  {
    Serial.println("light on");
    delay(500);
  }
/*if(value==HIGH)
{
  analogWrite(led,HIGH);
  Serial.println("motion detected");
  delay(500);
}
else
{
  analogWrite(led,LOW);
  Serial.println("motion not detection");
  delay(500);
}*/
}
