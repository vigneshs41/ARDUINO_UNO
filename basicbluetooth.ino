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
    }
    if(value=="all led on")
    {
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
    }
    if(value=="all led off")
    {
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
    }
    if(value=="green light on")
    {
      digitalWrite(2,HIGH);
    }
    if(value=="red light on")
    {
      digitalWrite(3,HIGH);
    }

}
