#include "Adafruit_NeoPixel.h"
#define LED_COUNT 150
#define LED_PIN 7
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
void setup()
{
strip.begin();
}
void loop()
{
for (int i = 0; i < LED_COUNT; i++)
{
strip.setPixelColor(i, strip.Color(255, 255, 255));
}
strip.show();
}
