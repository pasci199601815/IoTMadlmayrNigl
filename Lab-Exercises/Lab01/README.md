# Test commmit
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