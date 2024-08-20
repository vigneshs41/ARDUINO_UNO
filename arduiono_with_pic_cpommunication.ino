String valuee;
//int val =0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  //delay(100);
  
  delay(100);
  
    valuee=Serial.readString();
  Serial.println(valuee);
}
}
