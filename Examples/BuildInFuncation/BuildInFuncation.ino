#include <FastLED.h>

#define NUMLEDS 30
#define DATAPIN 13

CRGB Leds[NUMLEDS];
void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812B,DATAPIN,GRB>(Leds,NUMLEDS);
  FastLED.setBrightness(10);
}


void loop() {
  // put your main code here, to run repeatedly:
//fill all leds with the same time
fill_solid(Leds,NUMLEDS,CRGB::Aquamarine);
FastLED.show();
delay(200);
//Another funcation take care on o=put color in takes only 2,4,...,etc even arg
fill_gradient_RGB(Leds,NUMLEDS,CRGB::DarkRed,CRGB::DarkSlateGray);
FastLED.show();
delay(200);
// fill_gradient_RGB(Leds,NUMLEDS,CRGB::Magenta,CRGB::YellowGreen);
// FastLED.show();
// delay(200);

/////////////////////////////
//Anthore funcation notice 0 for hue startfrom 
// this to make rainbow
fill_rainbow(Leds,NUMLEDS,0 , 255/NUMLEDS);
FastLED.show();
delay(100);
}
