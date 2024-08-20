int value=0;
int value1=0;
int value3=0;
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected t
void setup() {
  // set up the LCD's number of columns and rows
  // initialize the serial communications:
  Serial.begin(9600);
}

void loop() {
  // when characters arrive over the serial port...
  if (Serial.available()) {
    // wait a bit for the entire message to arrive
    delay(100);
    // clear the screen
    while (Serial.available() > 0) {
      // display each character to the LCD
      value=Serial.read();
      value1=Serial.read();
      value3=value*value1;
      Serial.println(value3);
    }
  }
}
