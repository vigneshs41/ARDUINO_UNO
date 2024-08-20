void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(12,OUTPUT);
}

void loop() {
  if(Serial.available()>0)
  {
    int rx=Serial.read();
    Serial.println(rx);
    
    switch(rx)
    {
      case 49:{
               digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
      }
      //delay(500);
      case 48:{
                digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
      }
      //delay(500);
      case 50:{
        
                digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
      }
      //delay(500);
      case 51:{
        
                digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
      }
      //delay(500);
      case 52:
      {
        
                digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
      }
      //delay(500);
      case 53:{
      
                digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;}
         //     delay(500);
       case 54:{
      
                digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;}
           //   delay(500);
      case 55:{
      
                digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;}
             // delay(500);
      case 56:{
      
                digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;}
              //delay(500);
              
      case 57:{
      
                digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;}
            //  delay(500);
      case 65:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
              //delay(500);
              case 66:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
            }
              //delay(500);
              case 67:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
             // delay(500);
              case 68:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
            }
             // delay(500);
              case 69:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
              //delay(500);
              case 70:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
            }
              //delay(500);
              case 71:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
            //  delay(500);
              case 72:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
            }
              //delay(500);
              case 73:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
            //  delay(500);
              case 74:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
            }
              //delay(500);
              case 75:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
           //   delay(500);
              case 76:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
            }
             // delay(500);
              case 77:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
            //  delay(500);
              case 78:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
            }
              //delay(500);
              case 79:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
           //   delay(500);
              case 80:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
            }
             // delay(500);
              case 81:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
        //      delay(500);
              case 82:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
            }
          //    delay(500);
              case 83:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
            //  delay(500);
              case 84:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
              //delay(500);
              case 85:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
        //      delay(500);
              case 86:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
            }
          //    delay(500);
              case 87:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
            //  delay(500);
              case 88:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
              //delay(500);
              case 89:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              break;
            }
         //     delay(500);
              case 90:{
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              digitalWrite(12,HIGH);
              delay(500);
              digitalWrite(12,LOW);
              delay(500);
              break;
            }
           //   delay(500);
            case 97:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
              break; 
            }
             // delay(500);
            case 98:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               break;
            }
      //        delay(500);
            case 99:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               break;
            }
        //      delay(500);
            case 500:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               break;
            }
          //    delay(500);
            
            case 101:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
              break;
            }
            //  delay(500);
            case 102:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
              break; 
            }
         //     delay(500);
            case 103:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
              break; 
            }
           //   delay(500);
            case 104:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
              break; 
            }
             // delay(500);
            case 105:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
              break; 
            }
     //         delay(500);
            case 106:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
              break;
              
              }
       //         delay(500);
            case 107:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
              break; 
            }
         //     delay(500);
            case 108:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
              break; 
            }
           //   delay(500);
            case 109:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
              break; 
            }
             // delay(500);
            case 110:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
              break; 
            }
 //             delay(500);
            case 111:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
              break; 
            }
   //           delay(500);
            case 112:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
              break; 
            }
     //         delay(500);
              
            case 113:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
              break; 
            }
       //       delay(500);
            case 114:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
              break; 
            }
         //     delay(500);
            case 115:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
              break;
               
            }
           //   delay(500);
            case 116:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
              break; 
            }
             // delay(500);
            case 117:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
              break; 
            }
              //delay(500);
            case 118:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
              break; 
            }
              //delay(500);
            case 119:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               break;
            }
              //delay(500);
            case 120:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
              break; 
            }
              //delay(500);
            case 121:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
              break;
               
            }
              //delay(500);
            case 122:{
              digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
               digitalWrite(12,HIGH);
              delay(500);
               digitalWrite(12,LOW);
              delay(500);
              break; 
            }
        default:
            {
              Serial.println("don't give any special character");
              break;
            }
    }
   
  }
  // put your main code here, to run repeatedly:

}
