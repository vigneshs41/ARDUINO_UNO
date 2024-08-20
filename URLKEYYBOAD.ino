
int r1=13;
int r2=12;
int r3=11;
int r4=10;
int c1=A0;
int c2=A1;
int c3=A2;
int c4=A3;
//#include <LiquidCrystal.h>


//int pushbutton=12;
//int pushbuttonstate =
void setup() {
 
  
 
  Serial.begin(9600);  
    
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
if(analogRead(c1)==HIGH)
  {
     Serial.println("1");
  
     delay(200);
  }
  //delay(200);
  if(analogRead(c2)==HIGH)
  {
     Serial.println("2");
     
     delay(200);
  }
  //delay(200);
  if(analogRead(c3)==HIGH)
  {
     Serial.println("3");
   
     delay(200);
  }
  //delay(200);
if(analogRead(c4)==HIGH)
  {
     Serial.println("4");
   
     delay(200);
  }
  //delay(200);

digitalWrite(r1,LOW);
digitalWrite(r2,HIGH);
digitalWrite(r3,LOW);
digitalWrite(r4,LOW);
//delay(200);
if(analogRead(c1)==HIGH)
  {
     Serial.println("5");
     
     delay(200);
  }
  //delay(200);
  if(analogRead(c2)==HIGH)
  {
     Serial.println("6");
   
     delay(200);
  }
  //delay(200);
  if(analogRead(c3)==HIGH)
  {
     Serial.println("7");
   
     delay(200);
  }
  //delay(200);
if(analogRead(c4)==HIGH)
  {
     Serial.println("8");
     delay(200);
  }
  //delay(200);
digitalWrite(r1,LOW);
digitalWrite(r2,LOW);
digitalWrite(r3,HIGH);
digitalWrite(r4,LOW);
//delay(200);
if(analogRead(c1)==HIGH)
  {
     Serial.println("9");

     delay(200);
  }
  //delay(200);
  if(analogRead(c2)==HIGH)
  {
     Serial.println("10");
     
     delay(200);
  }
  //delay(200);
  if(analogRead(c3)==HIGH)
  {
     Serial.println("11");
     delay(200);
  }
  //delay(200);
if(analogRead(c4)==HIGH)
  {
     Serial.println("12");
     
     delay(200);
  }
  //delay(200);
digitalWrite(r1,LOW);
digitalWrite(r2,LOW);
digitalWrite(r3,LOW);
digitalWrite(r4,HIGH);
//delay(200);
if(analogRead(c1)==HIGH)
  {
     Serial.println("13");
     delay(200);
  }
  //delay(200);
  if(analogRead(c2)==HIGH)
  {
     Serial.println("14");
  
     delay(200);
  }
  //delay(200);
  if(analogRead(c3)==HIGH)
  {
     Serial.println("15");
  
     delay(200);
  }
  //delay(200);
if(analogRead(c4)==HIGH)
  {
     Serial.println("16");

     delay(200);
  }
  //delay(200);
}
