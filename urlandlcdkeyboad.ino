#include<LiquidCrystal.h>
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
//int pushbuttonstate = 0;
const int rs=3,en=4,d4=5,d5=6,d6=7,d7=8;
  LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  lcd.begin(16,2);
  
 
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


if(analogRead(c1)==HIGH)
  {
     Serial.println("1");
     lcd.setCursor(0,1);
     lcd.println("1");
     c1=LOW;
     delay(300);
  }
  //delay(200);
  if(analogRead(c2)==HIGH)
  {
     Serial.println("2");
     lcd.setCursor(0,1);
    lcd.println("2");
     c2=LOW;
     delay(200);
  }
  //delay(200);
  if(analogRead(c3)==HIGH)
  {
     Serial.println("3");
     lcd.setCursor(0,3);
    lcd.println("3");
     c3=LOW;
     delay(200);
  }
  //delay(200);
if(analogRead(c4)==HIGH)
  {
     Serial.println("4");
     lcd.setCursor(0,4);
    lcd.println("4");
     c4=LOW;
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
     lcd.setCursor(0,1);
    lcd.println("5");
     c1=LOW;
     delay(200);
  }
  //delay(200);
  if(analogRead(c2)==HIGH)
  {
     Serial.println("6");
     lcd.setCursor(0,2);
    lcd.println("6");
     c2=LOW;
     delay(200);
  }
  //delay(200);
  if(analogRead(c3)==HIGH)
  {
     Serial.println("7");
     lcd.setCursor(0,3);
    lcd.println("7");
    c3=LOW;;
     delay(200);
  }
  //delay(200);
if(analogRead(c4)==HIGH)
  {
     Serial.println("8");
     lcd.setCursor(0,4);
    lcd.println("8");
     c4=LOW;
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
     lcd.setCursor(0,1);
    lcd.println("9");
     c1=LOW;
     delay(200);
  }
  //delay(200);
  if(analogRead(c2)==HIGH)
  {
     Serial.println("10");
     lcd.setCursor(0,2);
    lcd.println("10");
     c2=LOW;
     delay(200);
  }
  //delay(200);
  if(analogRead(c3)==HIGH)
  {
     Serial.println("11");
     lcd.setCursor(0,3);
    lcd.println("11");
     c3=LOW;
     delay(200);
  }
  //delay(200);
if(analogRead(c4)==HIGH)
  {
     Serial.println("12");
     lcd.setCursor(0,4);
    lcd.println("12");
     c4=LOW;
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
     lcd.setCursor(0,1);
    lcd.println("13");
     c1=LOW;
     delay(200);
  }
  //delay(200);
  if(analogRead(c2)==HIGH)
  {
     Serial.println("14");
     
     lcd.setCursor(0,2);
    lcd.println("14");
    c2=LOW;
     delay(200);
  }
  //delay(200);
  if(analogRead(c3)==HIGH)
  {
     Serial.println("15");
    
     lcd.setCursor(0,3);
    lcd.println("15");
    c3=LOW;
     delay(200);
  }
  //delay(200);
if(analogRead(c4)==HIGH)
  {
     Serial.println("16");
     lcd.setCursor(0,4);
    lcd.println("16");
    c4=LOW;
     delay(200);
  }
  //delay(200);
}
