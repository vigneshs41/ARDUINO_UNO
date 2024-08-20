//String value;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}
void loop()
{
  if(Serial.available()>0)
  {
    int rx=Serial.read();
    Serial.println(rx);
    switch(rx)
    {
      case 49:
              digitalWrite(12,HIGH);
              break;
      case 48:
              digitalWrite(12,LOW);
              break;        
    }
  }
}
