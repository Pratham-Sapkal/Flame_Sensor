
//OLED
#include  <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
//flame sensor
int flame_sensor = 7;
int flame_detected;
//OLED  define
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT  64 // OLED display height, in pixels
// Declaration for an SSD1306 display connected  to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,  &Wire, -1);

void setup()
{
  pinMode(flame_sensor, INPUT);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); 
   display.clearDisplay();
   delay(1000); 

}
void loop()
{
  flame_detected = digitalRead(flame_sensor);
  if (flame_detected == 0)// '0' depend upon your sensor 
  {
     display.setTextSize(1);
     display.setTextColor(WHITE);
     display.setCursor(20,30);
     display.print("Flame detected");
     display.display();
     display.clearDisplay();
     delay(100);
  }
  else
  {
    display.setTextSize(1);
    display.setTextColor(WHITE); 
    display.setCursor(15, 30);
    display.print("No flame detected");
    display.display();
    display.clearDisplay();
  }
  delay(100);
}
