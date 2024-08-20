int led=11;
int led1=10;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  // put your setup code here, to run once:
  }

void loop() {
 
 for(int i=0;i<=255;i++)
 {
  analogWrite(led,i);
  delay(50);
}

for(int j=255;j>=0;j--)
{
  analogWrite(led1,j);
  delay(50);
}
}
