//#include <EEPROM.h>

String value;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);

}

void loop() {
    if (Serial.available())
    {
      value=Serial.readString();
      Serial.println(value);
      if(value=="on"){
      digitalWrite(2,HIGH);
      //Serial.print("led on");
      }
      if(value=="off")
        digitalWrite(2,LOW);
      }
    
    if(value=="led to off")
    {
      digitalWrite(3,LOW);
    }
    if(value=="led to on")
    {
      digitalWrite(3,HIGH);
    }

}
