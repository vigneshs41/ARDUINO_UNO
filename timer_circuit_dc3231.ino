#include<DS3231.h>
#include<LiquidCrystal.h>
int value=0;
int value1=0;
DS3231 rtc(SDA,SCL);
LiquidCrystal lcd(1,2,6,5,4,3);
void setup() {
  // put your setup code here, to run once:
rtc.begin();
lcd.begin(16,2);
Serial.begin(9600);
rtc.setTime(9,0,0);

}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("time");
lcd.print(rtc.getTimeStr());
value=rtc.getTimeStr();
Serial.println(value);

lcd.setCursor(0,1);
lcd.print("date");
lcd.print(rtc.getDateStr());
value1=rtc.getDateStr();
Serial.println(value1);


delay(1000);
}
