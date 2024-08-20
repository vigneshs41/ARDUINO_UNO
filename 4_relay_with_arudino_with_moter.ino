//#include <EEPROM.h>
int a=2;
int b=3;
String value;
void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  Serial.begin(9600);

}

void loop() {
    if (Serial.available())
    {
      value=Serial.readString();
      Serial.println(value);
      if(value=="GO STRAIGHT"){
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      delay(1000);
      //Serial.print("led on");
      }
      if(value=="GO LEFT")
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        delay(1000);
      }
    
    if(value=="GO RIGHT")
    {
      digitalWrite(b,LOW);
      digitalWrite(a,HIGH);
      delay(1000);
    }
    if(value=="STOP")
    {
      digitalWrite(b,LOW);
      digitalWrite(a,LOW);
      delay(1000);
    }

}
