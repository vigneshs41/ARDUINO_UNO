void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(9,OUTPUT);  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
 // delay(1000);
  digitalWrite(9,HIGH);
  delay(50);
  digitalWrite(9,LOW);
  delay(50);
  //digitalWrite(12,LOW);
  //digitalWrite(10,LOW);
  //digitalWrite(11,LOW);
  //digitalWrite(13,LOW);
  //delay(1000);


  
  // put your main code here, to run repeatedly:

}
