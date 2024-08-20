int a=10;
int b=11;
int c=0;
void setup() {
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
c=digitalRead(b);
if(c==HIGH)
{
digitalWrite(a,HIGH);
}
else
{
digitalWrite(a,LOW);
}
}
