//#include <LiquidCrystal.h>

#include<LiquidCrystal.h>
int pushbutton=12;
int pushbuttonstate = 0;
const int rs=13,en=11,d4=6,d5=5,d6=4,d7=3;
  LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  lcd.begin(16,2);
  
  pinMode(pushbutton,INPUT);
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
   // pushbutton==LOW;
  }
  else
  {
    digitalWrite(pushbutton,LOW);
    lcd.print("welcome");
    lcd.noDisplay();
   /* lcd.setCursor(0,0);
    lcd.blink();
    delay(500);
    lcd.noBlink();
    delay(500);
    */
  }
  /*else 
  {
    lcd.setCursor(0,0);
    lcd.blink();
    delay(500);
    lcd.noBlink();
    delay(500);
    
  }*/
}  
    
    
 
