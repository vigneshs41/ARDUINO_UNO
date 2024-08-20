//#include <LiquidCrystal.h>

#include<LiquidCrystal.h>
int pushbutton=12;
int a=7;
int b=8;
int c=9;
int r;
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
  r=digitalRead(pushbutton);
   r=digitalRead(a);
    r=digitalRead(b);
     r=digitalRead(c);
  
  // put your setup code here, to run once:

}

void loop() {
  switch(digitalRead(r)==HIGH){
    case pushbutton{
      lcd.setCursor(0,1);
      lcd.println("key 1");
      lcd.display();
      pushbuutton=low;
      break;
      
    }
    case a{
      lcd.setCursor(0,1);
      lcd.println("key 2");
      lcd.display();
      a=low;
      break;
      
    }
    case b{
      lcd.setCursor(0,1);
      lcd.println("key 3");
      lcd.display();
       b=low;
       break;
    }
    case c{
      lcd.setCursor(0,1);
      lcd.println("key 3");
      lcd.display();
      c=low;
      break;
    }
  }
}  
    
    
 
