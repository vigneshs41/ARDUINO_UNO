#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2)
#define fan 7
#define light 9
#define tv 7
int tem=0;
int i=0;
int let=13;
char str[15];
void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(fan,OUTPUT);
  pinMode(light,OUTPUT);
  pinMode(tv,OUTPUT);
  lcd.setCursor(0,0);
  lcd.print("gsm control home");
  lcd.setCursor(0,1);
  lcd.print("vicky");
  delay(2000);
  lcd.print("automation");
  delay(1000);
  lcd setCursor(0,1);
  lcd.print("system"):
  Serial.println("at+cnml=2,2,0,0,0");
  delay(500);
  Serial.println("at+cnml=1");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd,print("fan light tv");
  lcd.setCursor(0,1);
  lcd.print("off off off");
}
void loop() {
  lcd.setCursor(0,0);
  lcd.print("fan light tv");
  if(temp==1)
  {
    check();
    temp=0;
    i=0;
    delay(1000);
  }
}
void serialEvent()
{
  while(serialEvent()){
    if(Serial.find("#A.")
    {
      digitalWrite(led,HIGH);
      delay(1000);
      digitalWrite(led,LOW);
      delay(1000);
      while(Serial.available())
      {
        char inchar=Serial.read();
        str[i++]=inchar;
        if(inChar=='*')
        {
          temp=1;
          return;
        }
      }
    }
  }
}
 void check()
 {
  if(!(strcmp(str,"tv on",5)))
  {
    digitalWrite(tv,HIGH);
    lcd.setCursor(13,1);
    lcd.print("on");
    delay(200);
  }
  else if(!(strcmp(str,"tv on",6)))
  {
    digitalWrite(tv,LOW);
    lcd.setCursor(13,1);
    lcd.print("oFF");
    delay(200);
  }
  else if(!(strcmp(str,"fan on",6)))
  {
    digitalWrite(fan,HIGH);
    lcd.setCursor(0,1);
    lcd.print("on");
    delay(200);
  }
  if(!(strcmp(str,"fan on",7)))
  {
    digitalWrite(tv,LOW);
    lcd.setCursor(0,1);
    lcd.print("oFF");
    delay(200);
  }
  else if(!(strcmp(str,"light on",8)))
  {
    digitalWrite(light,HIGH);
    lcd.setCursor(7,1);
    lcd.print("on");
    delay(200);
  }
  else if(!(strcmp(str,"light off",9)))
  {
    digitalWrite(tv,HIGH);
    lcd.setCursor(7,1);
    lcd.print("on");
    delay(200);
  }
  else if(!(strcmp(str,"all on",6)))
  {
    digitalWrite(tv,HIGH);
    digitalWrite(fan,HIGH);
    digitalWrite(light,HIGH);
    lcd.setCursor(0,1);
    lcd.print("on on on ");
    delay(200)
    //delay(200);
  }
  else if(!(strcmp(str,"all off",7)))
  {
    digitalWrite(tv,LOW);
    digitalWrite(fan,LOW);
    digitalWrite(light,LOW);
    lcd.setCursor(0,1);
    lcd.print("oFF OFF oFF ");
    delay(200)
    //delay(200);
  }
  
  }
