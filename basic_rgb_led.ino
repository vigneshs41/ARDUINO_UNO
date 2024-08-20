int a=A0;
int b=A1;
int c=A2;
void setup() {
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(a,(255,168,123));
delay(500);
analogWrite(b,(65,255,231));
delay(500); 
analogWrite(c,(87,127,255));
delay(500); 

}
