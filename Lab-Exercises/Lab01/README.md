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
# Homework:Using the Raspberry Pi as Gateway and the two ESP8266 Boards as Server and Client
## Task:
+ Both Client and Server connect to Raspberry Pi
+ Client pushes Button, sends an HTTP-GET Request with an message (/data/)
+ Server recognizes the Request, toggles the inbuilt LED

## How we achieved the Goal:

Down below we included the source code for both the Client and the Server

### The Client:

````
#include <ESP8266WiFi.h>

// define pin D5 to button, Users choice which pin to use
int button = D5;


const char* ssid = "iotempire-MadlmayrNigl";
const char* password = "madlmayrnigl";
 

void setup() {
  
  //Should be the same as board setting in Arduino IDE
  Serial.begin(115200);

  pinMode(button, INPUT);

  delay(10);

  // Use Wi-Fi Mode, not access point mode, problems occured when using access point mode
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting.....");
  }

}

void loop() {
 WiFiClient client;

  // IP Address depends on which IP the Server gets assigned by the Raspberry Pi Gateway
  const char * host = "192.168.12.209";
  const int httpPort = 1337;
  
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return;
  }

  // Unique message on which the server should react upon with toggling the led
  String url = "/data/";
  // Button gets pressed, Request is Sent to the Server
  if(digitalRead(button) != 1){ 
    // This will send the request to the server
    client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                 "Host: " + host + "\r\n" +
                 "Connection: close\r\n\r\n");
  }
  delay(100);
}
````

### The Server:
````
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

const char* ssid = "iotempire-MadlmayrNigl";
const char* password = "madlmayrnigl";

ESP8266WebServer server(1337); 

int state = 0;

void setup() {
  Serial.begin(115200);

  pinMode(LED_BUILTIN, OUTPUT);
  
  WiFi.begin(ssid, password);
Serial.println("ssid pw.....");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting.....");
  }
  
  // Print the IP address in the debug console to use it in the clients source code
  Serial.println(WiFi.localIP());

  server.on("/data/", HTTP_GET, SwitchLED); // server receives correct request contents, invokes SwitchLED-method
  server.begin();

}

void loop() {
  server.handleClient();

  delay(50);
}

void SwitchLED() {
  // switch LED between High and LOW upon receiving GET Request, effective toggle
  digitalWrite(LED_BUILTIN, (state)? HIGH : LOW);
  state = !state;
  delay(50);
  Serial.println("Toggle LED");
  
}
````
### Steps



