#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <dht.h>
dht DHT;
#define DHT11_PIN 2
#define OLED_MOSI  13 //d7 -13---D1  oled
#define OLED_CLK   14 //d5 -14---D0  oled 
#define OLED_DC    4  //d2 -04---DC  oled
#define OLED_CS    15 //d8 -15---CS  oled
#define OLED_RESET 5  //d1 -05---RST oled

Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
#define SSD1306_LCDHEIGHT 64
#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif*/


void setup()
{
  display.begin(SSD1306_SWITCHCAPVCC);
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(1.5);
  Serial.begin(115200);
}
void loop()
{
  int chk = DHT.read11(DHT11_PIN);  // Read apin on DHT11
  /*display.clearDisplay();
  display.setTextSize(1.5);
  display.setCursor(30,10);
  display.print("Welcome To");
  display.setCursor(20,20);
  display.print("IPCS AUTOMATION");
  display.display();
  delay(2000);*/
  
  display.clearDisplay();
  display.setTextSize(1.7);
  display.setCursor(2,5);
  display.print("Temperature : ");
  display.setCursor(85, 5);  // set position
  display.print(DHT.temperature, 0);  // display temperature from DHT11
  display.setCursor(100,5);
  display.print("`C");
  
  display.setCursor(2,20);
  display.print("Humidity    : ");
  display.setCursor(85, 20);
  display.print(DHT.humidity, 0);  // display humidity from DHT11
  display.setCursor(100,20);
  display.print("%");
  display.display(); 
  delay(50);
  // Delay of 5sec before accessing DHT11 (min - 2sec)
}
