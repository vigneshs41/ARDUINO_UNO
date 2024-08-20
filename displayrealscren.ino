#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int led=13;
int moter=10;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // initialize the serial communications:
  Serial.begin(9600);
  pinMode(moter,OUTPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  // when characters arrive over the serial port...
  if (Serial.available()) {
    // wait a bit for the entire message to arrive
    delay(100);
    // clear the screen
    lcd.clear();
    // read all the available characters
    while (Serial.available() > 0) {
      digitalWrite(led,HIGH);
      digitalWrite(moter,HIGH);
      lcd.write(Serial.read());    }
  }
  else 
  {
      digitalWrite(led,LOW);
      digitalWrite(moter,LOW);
      lcd.display();
      lcd.print("no input");
  }
}
