//#include<LiquidCrystal.h>
int moter=10;
int led1=11;
int led2=12;
int pushbutton1=0;
int pushbutton2=0;
int p1=13;
int p2=9;
#include<LiquidCrystal.h>
const int rs=8,en=7,d7=6,d6=5,d5=4,d4=3;
LiquidCrystal lcd (rs,en,d7,d6,d5,d4);
void setup(){
  pinMode(led1,OUTPUT);
   pinMode(led2,OUTPUT);
    pinMode(moter,OUTPUT);
     pinMode(p1,INPUT);
     pinMode(p2,INPUT);
     digitalWrite(led2,HIGH);
  pushbutton1=digitalRead(p1);
  if(pushbutton1==HIGH)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(moter,HIGH);
    lcd.begin(16,2); 
    lcd.println("moter on successfully");
    delay(500);
    for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);}
    pushbutton2=digitalRead(p2);
  if(pushbutton2==HIGH)
  {
    digitalWrite(led1,  LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(moter,LOW);
    lcd.begin(16,1); 
    lcd.println("moter OFF successfully");
    delay(500);
    for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);}

}
  }
}
void loop()
{
  
}
