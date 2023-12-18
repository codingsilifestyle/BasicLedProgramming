#include <Adafruit_NeoPixel.h>

#define PIN 13         // input pin Neopixel is attached to
#define NUMPIXELS 30    // number of neopixels in strip

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 50;    // timing delay in milliseconds
int gapSize = 5;       // size of the gap between the snakes

void setup() {
  // Initialize the NeoPixel library.
  pixels.begin();
}

void loop() {
  for (int i = 0; i < NUMPIXELS; i++) {
    // Set the pixels for the first snake as red
    for (int j = 0; j < 5; j++) {
      int pixelIndex = (i + j) % NUMPIXELS;
      pixels.setPixelColor(pixelIndex, pixels.Color(32,32 , 32));
    }

    // Set the gap between the snakes as black
    for (int j = 5; j < 5 + gapSize; j++) {
      int pixelIndex = (i + j) % NUMPIXELS;
      pixels.setPixelColor(pixelIndex, pixels.Color(0, 0, 0));
    }

    // Set the pixels for the second snake (tail) as green
    for (int j = 5 + gapSize; j < 5 + gapSize + 5; j++) {
      int pixelIndex = (i + j) % NUMPIXELS;
      pixels.setPixelColor(pixelIndex, pixels.Color(153, 0, 0));
    }

    // Show the pixels
    pixels.show();

    // Delay for a period of time (in milliseconds).
    delay(delayval);

    // Erase the snake trails
    for (int j = 0; j < 5 + gapSize + 5; j++) {
      int pixelIndex = (i + j) % NUMPIXELS;
      pixels.setPixelColor(pixelIndex, pixels.Color(0, 0, 0));
    }
  }
}