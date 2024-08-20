String value;
int led =3;
#include <Servo.h>
Servo myservo;
int pos = 0;
void setup() {
  // put your setup code here, to run once:
  //pinMode(2,OUTPUT);
  pinMode(led,OUTPUT);
  myservo.attach(9);
  Serial.begin(9600);
  

}

void loop() {
    if (Serial.available())
    {
      value=Serial.readString();
      if(value=="200068E2AA00")
      {
        Serial.println("wellcome");
        Serial.println("S.vicky");
        Serial.println("dore are open");
        for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
          // in steps of 1 degree
           myservo.write(pos);              // tell servo to go to position in variable 'pos'
            delay(15);                       // waits 15ms for the servo to reach the position
            }
        Serial.println("light on");
        digitalWrite(led,HIGH);
        delay(1000);
      }
      else if(value=="200068E2AB01")
      {
        Serial.println("Valila po da..");
        Serial.println("Servesh raj");
        Serial.println("dore are closed");
        Serial.println("light off");
        digitalWrite(led,LOW);
        delay(1000);
      }
      else
      {
        Serial.println("sorry");
      }
      //Serial.println(value);
    

}
}
