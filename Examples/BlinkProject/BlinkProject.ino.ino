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
  Leds[0] = CRGB::DarkRed;
  delay(200);
  FastLED.show();
  Leds[0] = CRGB::Black;
  FastLED.show();
  delay(200);
 
}
