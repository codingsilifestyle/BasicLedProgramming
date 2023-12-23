#include <FastLED.h>

#define NUMLEDS 30
#define DATAPIN 13

CRGB Leds[NUMLEDS];
//we using unit8_t to rane between 0 - 255
uint8_t hue = 0;
void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812B,DATAPIN,GRB>(Leds,NUMLEDS);
  FastLED.setBrightness(10);
}


void loop() {
  // put your main code here, to run repeatedly:
for (int x = 0 ; x < NUMLEDS; x++) {
  //CHSV 
 // H for hue 
//S for light
//e for darkness
Leds[x] = CHSV(hue + (x*10), 255,255);
FastLED.show();

}
//BuildINfUNCATION
EVERY_N_MILLISECONDS(15){
hue++;
}
FastLED.show();
}