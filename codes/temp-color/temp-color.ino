#define FASTLED_INTERRUPT_RETRY_COUNT 1
#include <FastLED.h>

#define LED_PIN     13
#define NUM_LEDS    16

CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);

}

void loop() {

  for (int i = 0; i <30; i++) {
    leds[i] = CRGB(248, 25, 3);
  }
  FastLED.show();    
}
