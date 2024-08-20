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
        for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
          // in steps of 1 degree
           myservo.write(pos);              // tell servo to go to position in variable 'pos'
            delay(15);                       // waits 15ms for the servo to reach the position
            }
        delay(2000);
    for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
      }
      else
      {
        Serial.println("sorry you cannot go in");
      }
      //Serial.println(value);
    

}
}
