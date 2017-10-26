#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUM_LEDS 7
#define BRIGHTNESS 50

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  strip.setBrightness(BRIGHTNESS);  //밝기를 결정하는 것 
  strip.begin();   //시리얼 모니터처럼 비긴하는 것 
  strip.show(); // Initialize all pixels to 'off'  //

}

void loop() {
  
   if(Serial.available()>0){
    char rx_data = Serial.read();
    if(rx_data =='r') red_out();
    else if(rx_data =='b') blue_out();
    else if(rx_data =='g') green_out();
    else if(rx_data=='x') all_off();
    else if(rx_data=='w') white_out();
   }

}
//함수로 만들기 
void red_out()
{
  for(int i=0; i<7; i++){
        strip.setPixelColor(i, 255,0,0,0);
        strip.show();   //데이터를 밀고 나서 show켜주어야 led가 켜진다 지정한 색깔을 보여주는 것 strip.show();  //데이터를 밀고 나서 show켜주어야 led가 켜진다 지정한 색깔을 보여주는 것
        delay(100); 
      }
  
}
void green_out()
{
  for(int i=0; i<7; i++){
        strip.setPixelColor(i, 0,255,0,0);
        strip.show();   //데이터를 밀고 나서 show켜주어야 led가 켜진다 지정한 색깔을 보여주는 것 strip.show();  //데이터를 밀고 나서 show켜주어야 led가 켜진다 지정한 색깔을 보여주는 것
        delay(100); 
      }
}
void blue_out()
{
  for(int i=0; i<7; i++){
        strip.setPixelColor(i, 0,0,255,0);
        strip.show();   //데이터를 밀고 나서 show켜주어야 led가 켜진다 지정한 색깔을 보여주는 것 strip.show();  //데이터를 밀고 나서 show켜주어야 led가 켜진다 지정한 색깔을 보여주는 것
        delay(100); 
      }
}
//void blue_out()
//{
//  for(int i=0; i<7; i++){
//        strip.setPixelColor(i, 0,0,255,0);
//        strip.show();   //데이터를 밀고 나서 show켜주어야 led가 켜진다 지정한 색깔을 보여주는 것 strip.show();  //데이터를 밀고 나서 show켜주어야 led가 켜진다 지정한 색깔을 보여주는 것
//        delay(100); 
//      }
//}
//한번에 꺼지도록 
void all_off()
{
  for(int i=0; i<7; i++){
        strip.setPixelColor(i, 0,0,0,0); 
      }
      strip.show();
}
//흰색으로 천천히 켜지도록 만들기 
void white_out()
{
  for(int brightness = 0; brightness <=255; brightness++)
  {
    for(int i=0; i<7; i++){
    
        strip.setPixelColor(i, 0,0,0,brightness); 
   }
      strip.show();
      delay(10);
    
  }
}




