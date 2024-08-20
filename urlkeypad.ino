int r1=13;
int r2=12;
int r3=11;
int r4=10;
int c1=9;
int c2=8;
int c3=7;
int c4=6;
void setup() {
  // put your setup code here, to run once:
pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(c1,INPUT);
  pinMode(c2,INPUT);
  pinMode(c3,INPUT);
  pinMode(c4,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(r1,HIGH);
digitalWrite(r2,LOW);
digitalWrite(r3,LOW);
digitalWrite(r4,LOW);
//delay(200);
if(digitalRead(c1)==HIGH)
  {
     Serial.println("1");
     //c1=LOW;
     //delay(200);
  }
  //delay(200);
  else if(digitalRead(c2)==HIGH)
  {
     Serial.println("2");
     //c2=LOW;
     //delay(200);
  }
  //delay(200);
  else if(digitalRead(c3)==HIGH)
  {
     Serial.println("3");
     //c3=LOW;
     //delay(200);
  }
  //delay(200);
else if(digitalRead(c4)==HIGH)
  {
     Serial.println("4");
     //c4=LOW;
     //delay(200);
  }
  //delay(200);
else
{
  delay(10);
}

digitalWrite(r1,LOW);
digitalWrite(r2,HIGH);
digitalWrite(r3,LOW);
digitalWrite(r4,LOW);
//delay(200);
if(digitalRead(c1)==HIGH)
  {
     Serial.println("5");
     //c1=LOW;
     //delay(200);
  }
  //delay(200);
 else if(digitalRead(c2)==HIGH)
  {
     Serial.println("6");
     //c2=LOW;
     //delay(200);
  }
  //delay(200);
  else if(digitalRead(c3)==HIGH)
  {
     Serial.println("7");
     //c3=LOW;
     //delay(200);
  }
  //delay(200);
else if(digitalRead(c4)==HIGH)
  {
     Serial.println("8");
     //c4=LOW;
     //delay(200);
  }
else
{
  delay(10);
}
  //delay(200);
digitalWrite(r1,LOW);
digitalWrite(r2,LOW);
digitalWrite(r3,HIGH);
digitalWrite(r4,LOW);
//delay(200);
if(digitalRead(c1)==HIGH)
  {
     Serial.println("9");
     //c1=LOW;
     //delay(200);
  }
  //delay(200);
  else if(digitalRead(c2)==HIGH)
  {
     Serial.println("10");
     //c2=LOW;
     //delay(200);
  }
  //delay(200);
  else if(digitalRead(c3)==HIGH)
  {
     Serial.println("11");
     //c3=LOW;
     //delay(200);
  }
  //delay(200);
else if(digitalRead(c4)==HIGH)
  {
     Serial.println("12");
     //c4=LOW;
     //delay(200);
  }
  //delay(200);
 else
 {
  delay(10);
 }
digitalWrite(r1,LOW);
digitalWrite(r2,LOW);
digitalWrite(r3,LOW);
digitalWrite(r4,HIGH);
//delay(200);
if(digitalRead(c1)==HIGH)
  {
     Serial.println("13");
     //c1=LOW;
     //delay(200);
  }
  //delay(200);
  else if(digitalRead(c2)==HIGH)
  {
     Serial.println("14");
     //c2=LOW;
     //delay(200);
  }
  //delay(200);
 else if(digitalRead(c3)==HIGH)
  {
     Serial.println("15");
     //c3=LOW;
     //delay(200);
  }
  //delay(200);
else if(digitalRead(c4)==HIGH)
  {
     Serial.println("16");
     //c4=LOW;
     //delay(200);
  }
  //delay(200);
 else
 {
  delay(10);
 }
}
