#define FASTLED_INTERRUPT_RETRY_COUNT 1
#include <FastLED.h>

#define LED_PIN     13
#define NUM_LEDS    16

const int hAnalogInPin = A0;
float hSensorValue = 1;
int hOutputValue = 1;  

const int sAnalogInPin = A1;
float sSensorValue = 1;
int sOutputValue = 1;  

const int vAnalogInPin = A2;
float vSensorValue = 1;
int vOutputValue = 1;  

const int musicAnalogInPin = A3;
float musicSensorValue = 1;

const int buttonPin = 2;
int buttonState = 0; 

CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);

}

void loop() {

  button();
  
  if (buttonState == 0){
    hueDial();
    saturationDial();
    valueDial();

  
    for (int i = 0; i <30; i++) {
      leds[i] = CHSV(hOutputValue, sOutputValue, vOutputValue);
    }
    FastLED.show();


  } else {
    Serial.println("hurry!!");
  }
  delay(50);

  // determine if the session end
    // yes: end task, send result to computers
  
  // update all dials' information

  // set LEDs HSL by RGB

  // set music on computer
  
}

void hueDial(){
  hSensorValue = analogRead(hAnalogInPin);
  hOutputValue = int(float(hSensorValue / 1023) * 255);
}

void saturationDial(){
  sSensorValue = analogRead(sAnalogInPin);
  sOutputValue = int(float(sSensorValue / 1023) * 255);
}

void valueDial(){
  vSensorValue = analogRead(vAnalogInPin);
  vOutputValue = int(float(vSensorValue / 1023) * 255);
}

void musicDial(){
  musicSensorValue = analogRead(musicAnalogInPin);
  //Serial.println(String(musicSensorValue));
}

void button(){
  buttonState = digitalRead(buttonPin);
}
