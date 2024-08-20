int pushbutton1=12;
int pushbutton2=11;
int pushbutton3=10;
int pushbutton4=9;
int buttonstate1=0;
int buttonstate2=0;
int buttonstate3=0;
int buttonstate4=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pushbutton1,INPUT);
   pinMode(pushbutton2,INPUT);
    pinMode(pushbutton3,INPUT);
     pinMode(pushbutton4,INPUT);
  

}

void loop() {
  buttonstate1=digitalRead(pushbutton1);
  buttonstate2=digitalRead(pushbutton2);
  buttonstate3=digitalRead(pushbutton3);
  buttonstate4=digitalRead(pushbutton4);
  
  
  if(buttonstate1==HIGH)
  {
     Serial.println("hi...");
     buttonstate1=LOW;
     delay(500);
  }

  if(buttonstate2==HIGH)
  {
     Serial.println("bye");
     buttonstate2=LOW;
     delay(500);
  }

  if(buttonstate3==HIGH)
  {
     Serial.println("poda");
     buttonstate3=LOW;
     delay(500);
  }

if(buttonstate4==HIGH)
  {
     Serial.println("vada");
     buttonstate4=LOW;
     delay(500);
  }
}
