//#include<LiquidCrystal.h>
int moter=9;
int led1=10;
int led2=12;
int pushbutton1=0;
int pushbutton2=0;
int p1=13;
int p2=11;
#include<LiquidCrystal.h>
const int rs=2,en=1,d4=6,d5=5,d6=4,d7=3;
  LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup(){
  pinMode(led1,OUTPUT);
   pinMode(led2,OUTPUT);
    pinMode(moter,OUTPUT);
     pinMode(p1,INPUT);
     pinMode(p2,INPUT);
     lcd.begin(16,2);
}
void loop()
{
  digitalWrite(led2,HIGH);
  pushbutton1=digitalRead(p1);
  pushbutton2=digitalRead(p2);
  if(pushbutton1==HIGH)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(moter,HIGH);
    //delay(500);
    lcd.setCursor(3,1); 
    lcd.println("moter on successfully");
    lcd.display();
    delay(500);
    for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(1000);}
    for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(1000);}
    for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(1000);}
  }
  //pushbutton2=digitalRead(p2);
    else if(pushbutton2==HIGH)
    {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    delay(500);
    digitalWrite(moter,LOW);
    digitalWrite(moter,HIGH);
    delay(500);
    lcd.begin(16,1); 
   lcd.setCursor(0,0);
    lcd.print("moter OFF successfully");
    delay(500);
    for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(1000);}
     for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(1000);}
    for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(1000);}

    
    }
    
    ///pushbutton2=digitalRead(p2);
  /*if(pushbutton2==HIGH)
  {
    digitalWrite(led1,  LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(moter,LOW);
    //delay(500);
    lcd.begin(16,1); 
   lcd.setCursor(0,0);
    lcd.print("moter OFF successfully");
    delay(500);
    for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(1000);}
     for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(1000);}
    for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(1000);}

}
else if(pushbutton2==LOW)
{
  lcd.println("moter off");
  lcd.noDisplay();
}*/
else
{
    lcd.noDisplay();
  
}
  }
