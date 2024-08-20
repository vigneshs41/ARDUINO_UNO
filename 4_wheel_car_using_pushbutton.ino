int w1f=2;//motor 1
int w1r=3;//motor 1
int w2f=4;//motor 2
int w2r=5;//motor 2
String value;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(w1f,OUTPUT);
  pinMode(w1r,OUTPUT);
  pinMode(w2f,OUTPUT);
  pinMode(w2r,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  if (Serial.available())
    {
      value=Serial.readString();
      Serial.println(value);
   
      if(value=="up")
      {//forward
      digitalWrite(w1f,HIGH);
      digitalWrite(w1r,LOW);
      digitalWrite(w2f,HIGH);
      digitalWrite(w2r,LOW);
      Serial.print("forward");
      }
      if(value=="left")
      {//left
      digitalWrite(w1f,HIGH);
      digitalWrite(w1r,LOW);
      digitalWrite(w2f,LOW);
      digitalWrite(w2r,LOW);
      Serial.print("left");
      }
    
    //right
    if(value=="right")
    {
      digitalWrite(w1f,LOW);
      digitalWrite(w1r,LOW);
      digitalWrite(w2f,HIGH);
      digitalWrite(w2r,LOW);
      Serial.print("right");
      }
    
    if(value=="stop")//STOP
    {
      digitalWrite(w1f,LOW);
      digitalWrite(w1r,LOW);
      digitalWrite(w2f,LOW);
      digitalWrite(w2r,LOW);
      Serial.print("STOP");
    }
   
    if(value=="back")
    {
      digitalWrite(w1f,LOW);
      digitalWrite(w1r,HIGH);
      digitalWrite(w2f,LOW);
      digitalWrite(w2r,HIGH);
      Serial.print("backward");
     }
}
}
