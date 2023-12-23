#include <FastLED.h>

#define DATAPIN 13
#define LEDNUM 30

CRGB Leds[LEDNUM];

void setup(){
  FastLED.addLeds<WS2812B,DATAPIN,GRB>(Leds,LEDNUM);
  FastLED.setBrightness(10);
}

void loop(){
  //We just test the Colors output is right based in GRB above  
  Leds[0] = CRGB::Red;
  Leds[1] = CRGB::Green;
  Leds[2] = CRGB::Blue;
  FastLED.show();
  
}