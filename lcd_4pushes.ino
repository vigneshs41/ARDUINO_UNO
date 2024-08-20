//#include <LiquidCrystal.h>

#include<LiquidCrystal.h>
int pushbutton=12;
int a=7;
int b=8;
int c=9;
int pushbuttonstate = 0;
const int rs=13,en=11,d4=6,d5=5,d6=4,d7=3;
  LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  lcd.begin(16,2);
  
  pinMode(pushbutton,INPUT);
    pinMode(a,INPUT);
      pinMode(b,INPUT);
        pinMode(c,INPUT);
  Serial.begin(9600);
  
  
  // put your setup code here, to run once:

}

void loop() {
  if(digitalRead(pushbutton)==HIGH)
  {
    //Serial.println(pushbutton);
    lcd.setCursor(0,1);
    lcd.println("welcome");
    lcd.display();
  }
    else if (pushbutton=LOW)
    {
      lcd.println("wellcom");
      lcd.noDisplay();
    }
  
  if(digitalRead(a)==HIGH)
  {
    //Serial.println(pushbutton);
    lcd.setCursor(1,1);
    lcd.println("hi....");
    lcd.display();
  }
     else if (a=LOW)
    {
      lcd.println("wellcom");
      lcd.noDisplay();
    }
  
  if(digitalRead(b)==HIGH)
  {
    //Serial.println(pushbutton);
    lcd.setCursor(2,1);
    lcd.println("world");
    lcd.display();
  }
     else if (b=LOW)
    {
      lcd.println("wellcom");
      lcd.noDisplay();
    }
  
  if(digitalRead(c)==HIGH)
  {
    //Serial.println(pushbutton);
    lcd.setCursor(3,1);
    lcd.println("hello");
    lcd.display();
  }
     else if (c=LOW)
    {
      lcd.println("wellcom");
      lcd.noDisplay();
    }
  
}  
    
 
