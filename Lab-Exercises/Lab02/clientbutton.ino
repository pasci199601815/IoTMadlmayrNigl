#include <ESP8266WiFi.h>

// define pin D5 to button, Users choice which pin to use
int button = D5;


const char* ssid = "<dei wlan ssid here>";
const char* password = "dei wlan pw";

const char * host = "maker.ifttt.com";
 
WiFiClient client;

void setup() {
  
  //Should be the same as board setting in Arduino IDE
  Serial.begin(115200);

  pinMode(button, INPUT);

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
// WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting.....");
  }
  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

}

void loop() {
 
  const int httpPort = 80;
  
  
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return;
  }
  
  // We now create a URI for the request
  String url = "http://maker.ifttt.com/trigger/button_pressed/with/key/<dei key>/";
  // Button gets pressed, Request is Sent to the Server
  if(digitalRead(button) != 1){ 
     
  Serial.print("Requesting URL: ");
  Serial.println(url);

    // This will send the request to the server
    client.print(String("POST ") + url + " HTTP/1.1\r\n" +
                 "Host: " + host + "\r\n" +
                 "Content-Length: 0" +"\r\n" +
                 "Connection: close\r\n\r\n");
                 Serial.println("Post Request sent!");
                 delay(3000);
  }
  
 // while(client.available()){
 //   String line = client.readStringUntil('\r');
 //   Serial.print(line);
  // }

  //Serial.println();
  //Serial.println("closing connection");
 delay(5000);
}
