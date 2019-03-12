#include <FastLED.h>

#define LED_PIN     13
#define NUM_LEDS    16

const int analogInPin = A0;
float sensorValue = 0;
int outputValue = 0;  

CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);

}

void loop() {

  sensorValue = analogRead(analogInPin);
  outputValue = float(sensorValue / 1023) * 255;
  for (int i = 0; i <30; i++) {
    leds[i] = CRGB(outputValue, 18, 25);
      FastLED.show();
  }

  //delay(1000);  
  // determine if the session end
    // yes: end task, send result to computers
  
  // update all dials' information

  // set LEDs HSL by RGB

  // set music on computer
  
}
