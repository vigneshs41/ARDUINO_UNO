int a=2;
int b=3;
int c=4;
int d=5;
String value;
void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if (Serial.available())
    {
      value=Serial.readString();
  if(value=="up")
  {
    Serial.println(value);
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
  }
  if(value=="left")
  {
    Serial.println(value);
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);   
    
  }
  if(value=="right")
  {
    Serial.println(value);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
  }
  if(value=="back")
  {
    Serial.println(value);
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
  }
  if(value=="summa")
  {
    Serial.println(value);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);

  }
}
}
