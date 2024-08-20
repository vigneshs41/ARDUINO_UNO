int analog=A0;
int value=0;
int buttonstate=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(analog,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonstate=analogRead(analog);
value=analogRead(analog);
if(value>=1023)
{
Serial.println("led on");
delay(200);
digitalWrite(13,HIGH);
}
