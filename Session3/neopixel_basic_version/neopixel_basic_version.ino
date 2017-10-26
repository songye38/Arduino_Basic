#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUM_LEDS 7
#define BRIGHTNESS 50

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  // put your setup code here, to run once:
  strip.setBrightness(BRIGHTNESS);  //밝기를 결정하는 것 
  strip.begin();   //시리얼 모니터처럼 비긴하는 것 
  strip.show(); // Initialize all pixels to 'off'  //

}

void loop() {
  // put your main code here, to run repeatedly:
    
      strip.setPixelColor(6, 255,0,0,100);
     
      strip.show();   //데이터를 밀고 나서 show켜주어야 led가 켜진다 
   

}
