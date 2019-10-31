

# What we did
+ We got our Hardware
+ Installed the Image
+ Installed Arduino Software
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
