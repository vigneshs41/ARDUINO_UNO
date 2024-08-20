
void setup() {
  // set up the LCD's number of columns and rows:
  
  // initialize the serial communications:
  Serial.begin(9600);
}

void loop() {
  // when characters arrive over the serial port...
  if (Serial.available()) {
    // wait a bit for the entire message to arrive
    delay(100);
    // clear the scree
    // read all the available characters
    while (Serial.available() > 0) {
       String brinary =String(Serial.read(),BIN);
       Serial.println(brinary);
     
    }
  }
}
