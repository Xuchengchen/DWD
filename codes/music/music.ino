#define FASTLED_INTERRUPT_RETRY_COUNT 1
#include <FastLED.h>

const int musicInPin = A4;
float musicSensorValue = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {

  musicSensorValue = analogRead(musicInPin);
  Serial.println(musicSensorValue);
  delay(50);

}
