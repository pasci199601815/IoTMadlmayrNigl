# Boat
## Sensors
### Temperature

|Trinkwasser|Schmutzwasser|Öl|
|---|---|---|
|22°C|22°C|22°C|

Temperature sensor is installed easily with IOTempore. We need just one line to deploy the sensor:
````
dht(temp, D7);
````
for power saving we can add sleep ability to our sensors:
````
sleep(dht(temp, D7));
````
Other option can be with arduino, but its little bit more code:
````
#include <OneWire.h>
#include <DallasTemperature.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>

const char* ssid = "iotempire-MadlmayrNigl";
const char* password = "madlmayrnigl";
const char* mqtt_server = "192.168.12.1";


WiFiClient espClient;
PubSubClient client(espClient);
long lastMsg = 0;
char msg[50];
int value = 0;

void setup_wifi() {

  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  randomSeed(micros());

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

// GPIO where the DS18B20 is connected to
const int oneWireBus = 4;     

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(oneWireBus);

// Pass our oneWire reference to Dallas Temperature sensor 
DallasTemperature sensors(&oneWire);

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
  // Switch on the LED if an 1 was received as first character
  if ((char)payload[0] == '1') {
    digitalWrite(BUILTIN_LED, LOW);   // Turn the LED on (Note that LOW is the voltage level
    // but actually the LED is on; this is because
    // it is active low on the ESP-01)
  } else {
    digitalWrite(BUILTIN_LED, HIGH);  // Turn the LED off by making the voltage HIGH
  }
}
void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Create a random client ID
    String clientId = "ESP8266Client-";
    clientId += String(random(0xffff), HEX);
    // Attempt to connect
    if (client.connect(clientId.c_str())) {
      Serial.println("connected");
      // Once connected, publish an announcement...
     
      // ... and resubscribe
    
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}
void setup() {
  // Start the Serial Monitor
  Serial.begin(115200);
  // Start the DS18B20 sensor
  sensors.begin();
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
}

void loop() {
  sensors.requestTemperatures(); 
  float temperatureC = sensors.getTempCByIndex(0);
  float temperatureF = sensors.getTempFByIndex(0);
  Serial.print(temperatureC);
  Serial.println("ºC");
  Serial.print(temperatureF);
  Serial.println("ºF");
   long now = millis();
  if (now - lastMsg > 2000) {
    lastMsg = now;
    ++value;
    
    Serial.print("Publish message: ");
    Serial.println(msg);
    client.publish("testerino", String(temperatureC).c_str());
  }
  delay(5000);
  
  if (!client.connected()) {
    reconnect();
  }
  client.loop();
}
````
### Raindropsensor

The raindrop sensor (see figure below) was used to measure different liquid levels.

![](https://github.com/pasci199601815/IoTMadlmayrNigl/blob/master/Project1/raindrop.jpg "Regentropfsensor")

## Regentropf Sensor Tabelle
|Trinkwasser|Schmutzwasser|Öl|
|---|---|---|
|~277 wet|~185 wet|921 dry|

Temperature sensor is installed easily with IOTempore. We need just one line:
````
analog(fluids).with_precision(10).with_threshold(500, "wet", "dry");
```` 
Other option can be with arduino, but its little bit more code:
````
/*
* Arduino Rain Sensor Alarm
* Realized using a pre-wired rain sensor module
* Author: T.K.Hareendran
* Prototyped &Tested at Technode Protolabz /1:04 AM 7/26/2015
* Source: https://www.electroschematics.com
*/
int rainSensePin= 0; // analog pin 0 - sensor i/p
int alertPin= 8; // digital pin 8 - alert o/p
int curCounter= 0; // current counter - goes up by 1 every second while sensing

void setup(){
   Serial.begin(9600);
   pinMode(alertPin, OUTPUT);
   pinMode(rainSensePin, INPUT);
}
void loop(){
   int rainSenseReading = analogRead(rainSensePin);
   Serial.println(rainSenseReading); // use this for serial monitoring if available
   delay(250);  // relax
   // check to see how long it is raining at the threshold level
   // rain strength value from 0 - 1023
   // heavy rain -to- no rain.
   if (curCounter >= 30){ // end of the time delay
      digitalWrite(alertPin, HIGH);  //raise an alert after x time
   }

   // If raining is continuing for x amount of time raise an alert
   // When raining is no longer detected, reset the counter
   if (rainSenseReading <300){ // while raining at threshold level - see text
      curCounter++; // increment sensing counter
   }
   else if (rainSenseReading >300) { // if not raining at threshold level
      digitalWrite(alertPin, LOW); // don't raise an alert
      curCounter = 0; // reset the counter to 0
   }
   delay(1000);
}
````
### Ultrasonic

# Ultraschall Sensor Tabelle


|Trinkwasser|Schmutzwasser|Öl|
|---|---|---|
|7,5cm|7,5cm|7,5cm|

The ultrasonic sensor provides correct values regardless of the type of liquid and is therefore suitable for measuring the level of a tank.

Ultrasonic sensor is installed easily with IOTempore. We need just one line:
````
hcsr04(distance, D6, D5).with_precision(10);
````

### Buzzer
Buzzer sensor is installed easily with IOTempore. We need just one line:
````
pwm(buzzer, D6, 0);
````
## Node RED
### How the Node RED interface looked like
![](https://github.com/pasci199601815/IoTMadlmayrNigl/blob/master/Project1/gg.jpg)
## Use Case - Story

### Robert checks his houseboat's fuel tank via a distance sensor and the power of IoT
It is a chill morning in the midst of July, 2019. Robert, an experienced engineer, wakes up on his house boat and his first thought is about checking his smart watch, whether it rained last night. His smart watch notifies him that it indeed rained last night, so Robert dresses up, grabs a towel and makes his way onto the deck. As he arrives he sees that the clouds already cleared up, but he still has to dry his Hollywood swing. He takes a seat, watches the beautiful sunrise and therefore decides, that it is indeed time for a little trip exploring Austrias biggest lake, Attersee. As he takes his seat on the starboard, his watch again pleads for his attention. He swiftly turns his wrist and sees that his fuel tank is running low, because the embedded distance sensor reports a low amount of fuel. He then decides to refill at the shore before continuing his trip. He sighs and makes his way back.

