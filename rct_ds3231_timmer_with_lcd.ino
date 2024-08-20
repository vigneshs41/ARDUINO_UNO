#include <DS3231.h>
#include <LiquidCrystal.h>

int buzzer = 7;

DS3231  rtc(SDA, SCL);
Time t;
LiquidCrystal lcd(1,2,6,5,4,3);

const int OnHour = 12;
const int OnMin = 24;
const int onsec =00;
const int offsec =30;

void setup() {
  Serial.begin(9600);
  rtc.begin();
  lcd.begin(16,2);
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);
  rtc.setTime(9,10,00);
  rtc.setDate(22,03,2020);
  
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("time");
  lcd.print(rtc.getTimeStr());
  Serial.println(rtc.getTimeStr());

  lcd.setCursor(0,1);
  lcd.print("date");
  lcd.print(rtc.getDateStr());
  Serial.println(rtc.getDateStr());
  
  t = rtc.getTime();
  Serial.print(t.hour);
  Serial.print(" hour(s), ");
  Serial.print(t.min);
  Serial.print(" minute(s)");
  Serial.print(t.sec);
  Serial.print(" sec");
  Serial.println(" ");
  //delay (1000);
  
  if((t.hour == OnHour && t.min == OnMin  && t.sec >=onsec)&&(t.hour == OnHour && t.min == OnMin  && t.sec <=offsec)){
    digitalWrite(buzzer,HIGH);
    Serial.println("buzzer ON");
    }
    
    else{
      digitalWrite(buzzer,LOW);
      //Serial.println("buzzer OFF");
    }
    
}
