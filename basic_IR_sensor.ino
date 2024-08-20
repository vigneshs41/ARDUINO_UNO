int a=3;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(a,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(a)==HIGH){
  Serial.println("object detect");
}
else
{
  Serial.println("object not detect");
}
}
