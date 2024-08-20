#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "dht.h"
#define dht_apin A0
#define OLED_MOSI   9
#define OLED_CLK   10
#define OLED_DC    11
#define OLED_CS    12
#define OLED_RESET 13

Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
#define SSD1306_LCDHEIGHT 64
#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif*/
dht DHT;

void setup()
{
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC);
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(1.5);
}
void loop()
{
  DHT.read11(dht_apin);  // Read apin on DHT11
  display.clearDisplay();
  display.setTextSize(1.5);
  display.setCursor(30,10);
  display.print("Welcome To");
  display.setCursor(20,20);
  display.print("IPCS AUTOMATION");
  display.display();
  delay(2000);
  
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
  delay(5000);
  // Delay of 5sec before accessing DHT11 (min - 2sec)
}
