# The Workflow - Lab Outline
+ Setup Raspberry Pi iot gateway based on IoTempower image
+ Setup key and ssh into it or use web access
+ Learn to blink an (if exists the onboard) LED on ESP8266 with Arduino IDE
+ Login to WiFi of iot gateway from ESP8266
+ Switch on/off blinking remotely
+ Program second esp8266, connect to same network, connect button, use
button to switch on/off the blinking on other ESP8266
+ work in pairs
+ Document everything also (especially) failures → in portfolio git folder,
“just” link to shared work, after lecture, re-visit at home and reflect on
lecture and lab (train your memory AND critical thinking skill)


# What we did
+ We got our Hardware
+ Downloaded the Image
+ Installed Arduino Software
+ Downloaded Flasher Software
+ Flashed SD-Card
+ Tried connecting to Raspberry Pi with wlan (success)
+ Wrote our first Arduino Programm to light a LED
+ First mistake: we used an led that can't pe turned on or off
+ Second mistake: we compiled our code but didn't use the upload button, took us some time to recognise
````
#define led_pin 2
#define led_interval 100

void setup() {
  pinMode(led_pin, OUTPUT);
}

void loop() {
  while(true){
    digitalWrite(led_pin, HIGH);
    delay(led_interval);
    digitalWrite(led_pin, LOW);
    delay(led_interval);
   }
}
````
+ We did the button per Wifi at home
