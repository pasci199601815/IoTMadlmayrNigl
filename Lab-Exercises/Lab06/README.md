# The Workflow - Lab Outline
+ Ulrich flashed our dongle on a WEMOS and 2 other esp's with the pre_flash
+ we researched the doku a bit and then tried to adobt our first node
+ this worked fine for the first one
+ we didn't realise at first that we need to create new folder for new nodes so we struggled a bit to flash the second esp
+ after that we got some problems with deploying so we worked with ssh and not the dashboard (help from Ulrich)
+ we created the switch with the onboard led (quiet easy because the demo example already does this but we recreated it for our second node)
+ we then tried the rgb, at first we had some problems because we didn't read the doku precisely so we always talked to the wrong node in mqtt
+ for the acoustic distanc sensor we to build an voltage divider, so we needed some resistors from Ulrich (and some help)
+ the buzzer alarm worked without problems


## In this Lab we successfully implemented the following 3 sensors:
+ RGB_LED
+ Ultrasonic (acoustic) distance sensor
+ buzzer

And the following code was in our setup.cpp of the corresponding node in IoTEmpower:

````
RGB_LED
rgb_single(RGB_LED, D5, D6, D7, true);

Ultra sonic
hcsr04(distance, D6, D5).with_precision(10);

buzzer
pwm(buzzer, D6, 0);
````
