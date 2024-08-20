//#include <LiquidCrystal.h>
//LiquidCrystal lcd(7, 6, 5, 4, 3, 2);//RS,EN,D4,D5,D6,D7

const int s0 = 8;  
const int s1 = 9;  
const int s2 = 10;  
const int s3 = 11;  
const int out = 12;   
// LED pins connected to Arduino
int redLed = 7;  
//int greenLed = 15;  
//int blueLed = 14;
// Variables  
int red = 0;  
int green = 0;  
int blue = 0;  
    
void setup()   
{  
  Serial.begin(9600); 
  //lcd.begin(16, 2);
  pinMode(s0, OUTPUT);  
  pinMode(s1, OUTPUT);  
  pinMode(s2, OUTPUT);  
  pinMode(s3, OUTPUT);  
  pinMode(out, INPUT);  
  pinMode(redLed, OUTPUT);  
  //pinMode(greenLed, OUTPUT);  
  //pinMode(blueLed, OUTPUT);  
  digitalWrite(s0, HIGH);  
  digitalWrite(s1, HIGH);  
}  
    
void loop() 
{  
   //lcd.setCursor(0, 0);
  //lcd.print(" Color Detected ");//printing name 
  color(); 
  Serial.print("R Intensity:");  
  Serial.print(red, DEC);  
  //Serial.print(" G Intensity: ");  
  //Serial.print(green, DEC);  
  //Serial.print(" B Intensity : ");  
  //Serial.print(blue, DEC);  
  //Serial.println();  

  if (red < blue && red < green && red < 20)

  {  
   Serial.println(" - (Red Color)");
    //lcd.setCursor(0, 1);  
   //lcd.print("    RED Color   ");
   delay(500);
   digitalWrite(redLed, HIGH); // Turn RED LED ON 
   //digitalWrite(greenLed, LOW);  
   //digitalWrite(blueLed, LOW);  
  }  
/*
  else if (blue < red && blue < green)   
  {  
   Serial.println(" - (Blue Color)"); 
   lcd.setCursor(0, 1);
   lcd.print("   Blue Color   ") ;
   delay(500);
   digitalWrite(redLed, LOW);  
   digitalWrite(greenLed, LOW);  
   digitalWrite(blueLed, HIGH); // Turn BLUE LED ON  
  }  

  else if (green < red && green < blue)  
  {  
   Serial.println(" - (Green Color)"); 
   lcd.setCursor(0, 1); 
   lcd.print("   Green Color   ");
   delay(500);
   digitalWrite(redLed, LOW);  
   digitalWrite(greenLed, HIGH); // Turn GREEN LED ON 
   digitalWrite(blueLed, LOW);  
  }  
  else{
  Serial.println();
  lcd.setCursor(0, 1); 
  lcd.print(" Can't Identify"); 
  delay (500); 
  }   
  digitalWrite(redLed, LOW);  
  digitalWrite(greenLed, LOW);  
  digitalWrite(blueLed, LOW);  
 }*/}  
    
void color()  
{    
  digitalWrite(s2, LOW);  
  digitalWrite(s3, LOW);  
  //count OUT, pRed, RED  
  red = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  
  //digitalWrite(s3, HIGH);  
  //count OUT, pBLUE, BLUE  
  //blue = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  
  //digitalWrite(s2, HIGH);  
  //count OUT, pGreen, GREEN  
  //green = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  
}
