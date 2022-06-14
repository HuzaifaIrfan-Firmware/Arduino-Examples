#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display;

#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2


#define LOGO16_GLCD_HEIGHT 128
#define LOGO16_GLCD_WIDTH  32
static const unsigned char PROGMEM logo16_glcd_bmp[] =
{ B00000000, B11000000,
  B00000001, B11000000,
  B00000001, B11000000,
  B00000011, B11100000,
  B11110011, B11100000,
  B11111110, B11111000,
  B01111110, B11111111,
  B00110011, B10011111,
  B00011111, B11111100,
  B00001101, B01110000,
  B00011011, B10100000,
  B00111111, B11100000,
  B00111111, B11110000,
  B01111100, B11110000,
  B01110000, B01110000,
  B00000000, B00110000
};



void setup()   {
  Serial.begin(115200);

  // by default, we'll generate the high voltage from the 5v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3D (for the 128x64)
  // init done
  // Show image buffer on the display hardware.

  display.display();
  //delay(2000);

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(10, 0);
  display.clearDisplay();
  display.println("INPUT YOUR TEXT HERE: ");

  // invert the display
  display.invertDisplay(true);
  //delay(1000);
  display.invertDisplay(false);
  //delay(1000);
  display.display();
  //delay(2000);
   display.clearDisplay();
}


void loop() {


      String s;
  if (Serial.available())
  {
    
    
    s = Serial.readString();  //getting string input in variable "s"
    Serial.println(s);
    
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setCursor(10, 0);
    display.clearDisplay();
    display.println("input:");
    display.println(s);
    display.display();

  }


}



  
