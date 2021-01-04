#include "FastLED.h"
#define NUM_LEDS 150  // # of LEDS in the strip
CRGB leds[NUM_LEDS];
#define DATA_PIN 7 // Output Pin to Data Line on Strip

int fadeAmount = 15;  // Set the amount to fade I usually do 5, 10, 15, 20, 25 etc even up to 255.
int brightness = 0;

void setup()
{
   FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop()
{
   for(int i = 0; i < NUM_LEDS; i++ )
   {
   leds[i].setRGB(255,255,255);  // setRGB functions works by setting
                             // (RED value 0-255, GREEN value 0-255, BLUE value 0-255)
                             // RED = setRGB(255,0,0)
                             // GREEN = setRGB(0,255,0)
   leds[i].fadeLightBy(brightness);
  }
  FastLED.show();
  brightness = brightness + fadeAmount;
  // reverse the direction of the fading at the ends of the fade:
  if(brightness == 0 || brightness == 255)
  {
    fadeAmount = -fadeAmount ;
  }  
  delay(20);  // This delay sets speed of the fade. I usually do from 5-75 but you can always go higher.
}