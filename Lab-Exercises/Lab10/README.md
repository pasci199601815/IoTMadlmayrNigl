# The Workflow - Lab Outline

## Rgb-strip + animation on wemos led shield (in IoTempower)
– make 2x3 leds fade from one color to the other by command from mqtt
- these two animations can run/triggered by mqtt independently from each other
– all leds as lightning (random flashing in white) + thunder when triggering in node-red

````
#include "FastLED.h"
#define NUM_LEDS 6
CRGB leds[NUM_LEDS];
void setup() { FastLED.addLeds<NEOPIXEL, 2>(leds, NUM_LEDS); }
void loop() {
 leds[0] = CRGB::White; FastLED.show(); delay(200);
 leds[0] = CRGB::Black; FastLED.show(); delay(200);
}
````

we then used MQTT-Messages to communicate with our Node RED dashboard
+ Rainbow-Function
+ colour
+ amount of LEDs


![](https://github.com/pasci199601815/IoTMadlmayrNigl/blob/master/Lab-Exercises/Lab10/lab10nodered.png "Node RED LED Stripe")

