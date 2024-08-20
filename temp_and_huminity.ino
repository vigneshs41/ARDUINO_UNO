#include "dht.h"
#define dht_apin A0
#include<LiquidCrystal.h>
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
 
dht DHT;
 
void setup(){
 
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
  lcd.begin(16,2);
  
}//end "setup()"
 
void loop(){
  //Start of Program 
 
    DHT.read11(dht_apin);
    
   
    lcd.setCursor(0,0);
    lcd.print("hum =");
    lcd.print(DHT.humidity);
    lcd.print("%  ");
    lcd.setCursor(0,1 );
    lcd.print("tem =");
    lcd.print(DHT.temperature); 
    lcd.println("C  ");
    
    delay(1000);//Wait 5 seconds before accessing sensor again.
 
  //Fastest should be once every two seconds.
 
}// end loop() 
