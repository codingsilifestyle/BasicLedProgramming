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
  //one led go to the end of strips and reverse in the second loop
 for(int x = 0 ; x < NUMLEDS ; x++){
   Leds[x] = CRGB::DarkBlue;
   FastLED.show();
   delay(100);
   Leds[x] = CRGB::Black;
 }

 for(int x = 29 ; x > 0 ; x--){
    Leds[x] = CRGB::DarkBlue;
   FastLED.show();
   delay(100);
   Leds[x] = CRGB::Black;
 }
}
