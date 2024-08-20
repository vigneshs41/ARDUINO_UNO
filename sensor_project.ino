#include "dht.h"
#define dht_apin A0
 dht DHT;
 const int transmit=9;
const int receive=10;
long duration;
int distance;
int sensor=A1;
int value=0;
int value1=0;
int IR = 6;
int led1=3;
int led2=4;
void setup(){
 
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
  pinMode(transmit,OUTPUT);
  pinMode(receive,INPUT);
  pinMode(sensor,INPUT);
  pinMode(IR,INPUT);
}//end "setup()"
 
void loop(){
  //Start of Program
  
  value=analogRead(sensor);
  value1=digitalRead(IR); 
  digitalWrite(transmit,LOW);
  delayMicroseconds(2);
  digitalWrite(transmit,HIGH);
  delayMicroseconds(10);
  digitalWrite(transmit,LOW);
  duration=pulseIn(receive,HIGH);
  distance=duration*0.034/2;
  DHT.read11(dht_apin);
     Serial.println("hum =");
     Serial.println(DHT.humidity);
     Serial.println("%  ");
     Serial.println("tem =");
     Serial.println(DHT.temperature); 
     Serial.println("C  ");
     delay(500);
     if(value>=500)
     {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
     }
     else
     {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
     }
    Serial.println("no object");
  if(distance<=10)
 {
     Serial.println("onject dedect distance is so go back");
     Serial.println(distance);
     delay(500);
 
  if(value1==LOW)
  {
     Serial.println("STOP and take left");
     delay(500);
  }
  else
  {
    Serial.println("no object on back");
    delay(500);
  }
 }
  delay(500);
 
    //Wait 5 seconds before accessing sensor again.
 
  //Fastest should be once every two seconds.
 
}// end loop() 
