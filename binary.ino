//char= a;
void setup() {
  Serial.begin(9600);
  //a=Serial.readString();
  char a[]="vicky";
  for(int i=0;i<=4;i++){
  String brinary =String(a[i],BIN);
  Serial.println(brinary);
  }
  }

void loop() {
  // put your main code here, to run repeatedly:

}
