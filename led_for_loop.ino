int i=0;
void setup() {
  // put your setup code here, to run once:
  //for(int i=0;i<3;i++)
  pinMode(13,OUTPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  for (i;i<3;i++)
  {
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  }
  

}
