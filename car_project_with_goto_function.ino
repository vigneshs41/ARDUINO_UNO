int a=2;
int b=3;
int c=4;
int d=5;

String valuee;
const int transmit=9;
const int receive=10;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(transmit,OUTPUT);
  pinMode(receive,INPUT);
  Serial.begin(9600);

}

void loop() 
{
if (Serial.available()>0)
{
  valuee=Serial.readString();
  
  if(valuee=="manula")
  {
    if (Serial.available()>0)
{
  valuee=Serial.readString();

  if(valuee=="up")
{
    Serial.println(valuee);
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
}
if(valuee=="left")
{
    Serial.println(valuee);
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);   
    
}
  if(valuee=="right")
{
    Serial.println(valuee);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
}
  if(valuee=="back")
{
    Serial.println(valuee);
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
}
  if(valuee=="summa")
{
    Serial.println(valuee);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
}
  }
  }
  
  if(valuee=="auto")
  {
    digitalWrite(transmit,LOW);
delayMicroseconds(2);
digitalWrite(transmit,HIGH);
delayMicroseconds(10);
digitalWrite(transmit,LOW);
duration=pulseIn(receive,HIGH);
distance=duration*0.034/2;
 if(distance<=50)
   {
    Serial.println(distance);
    Serial.println("back");
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
   }
   else
   {
    Serial.println(distance);
    Serial.println("up");
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
   }
  }
  }
} 
  
