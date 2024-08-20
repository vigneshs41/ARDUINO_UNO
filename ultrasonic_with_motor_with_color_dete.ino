
#define trigPin 13
#define echoPin 12
#define motorPin 8
const int s0 = 8;  
const int s1 = 9;  
const int s2 = 10;  
const int s3 = 11;  
const int out = 12;   
int redLed = 7;  
int red = 0;  
int green = 0;  
int blue = 0;  
    
void setup()   
{  
  Serial.begin(9600); 
  pinMode(s0, OUTPUT);  
  pinMode(s1, OUTPUT);  
  pinMode(s2, OUTPUT);  
  pinMode(s3, OUTPUT);  
  pinMode(out, INPUT);  
  pinMode(redLed, OUTPUT);  
  digitalWrite(s0, HIGH);  
  digitalWrite(s1, HIGH); 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motorPin, INPUT); 
}  
    
void loop() 
{  
  color(); 
  Serial.print("R Intensity:");  
  Serial.print(red, DEC);  
  if (red < blue && red < green && red < 20)

  {  
   Serial.println(" - (Red Color)");
   delay(500);
   digitalWrite(redLed, HIGH);
   // Turn RED LED ON 
  }
    int duration, distance;
   digitalWrite (trigPin, HIGH);
   delayMicroseconds (1000);
   digitalWrite (trigPin, LOW);
   duration = pulseIn (echoPin, HIGH);
   distance = (duration/2) / 29.1;
   if (distance < 20) {  // Distance from sensor
   digitalWrite (motorPin, HIGH); // When in range, motor should start high
}
  else {
    digitalWrite(motorPin, LOW);
  }
   if  (distance > 20) {  // Distance from sensor
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}  
  
    
void color()  
{    
  digitalWrite(s2, LOW);  
  digitalWrite(s3, LOW);  
  red = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  
}
