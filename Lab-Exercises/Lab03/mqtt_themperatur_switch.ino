#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>

#include <SPI.h>          // Serial Peripheral Interface
#include <Ethernet.h>     // Ethernet Bibliothek
#include <PubSubClient.h> // MQTT Bibliothek

// Tragen Sie hier die Parameter für Ihr Netzwerk ein:
//byte mac[]    = {  0xDE, 0xED, 0xBA, 0xFE, 0xFE, 0xED };
//IPAddress ip(192, 168, 178, 72);
IPAddress server(192, 168, 12, 1);
const char* ssid = "iotempire-MadlmayrNigl";
const char* password = "madlmayrnigl";
int tempsensor = D6;

/*
Die nachfolgende Methode wird aufgerufen, sobald eine Nachricht für das angegebene Topic eintrifft:
*/

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Nachricht eingetroffen [");
  Serial.print(topic);
  Serial.print("]: ");
  for (int i=0;i<length;i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
}

WiFiClient wifiClient;
PubSubClient client(wifiClient);


void reconnect() {
  // Solange wiederholen bis Verbindung wiederhergestellt ist
  while (!client.connected()) {
    Serial.print("Versuch des MQTT Verbindungsaufbaus...");

    //Verbindungsversuch:
    if (client.connect("arduinoClient")) {
      Serial.println("Erfolgreich verbunden!");
      // Nun versendet der Arduino eine Nachricht in outTopic ...
      // und meldet sich bei inTopic für eingehende Nachrichten an:
      // client.subscribe("inTopic");
    } else { // Im Fehlerfall => Fehlermeldung und neuer Versuch
      Serial.print("Fehler, rc=");
      Serial.print(client.state());
      Serial.println(" Nächster Versuch in 5 Sekunden");
      // 5 Sekunden Pause vor dem nächsten Versuch
      delay(5000);
    }
  }
}

void setup()
{
  Serial.begin(115200);
  Serial.println("HI");
  WiFi.begin(ssid,password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("WIFI Connecting");
  }
  Serial.println("WIFI Connectet");
  
  // Broker erreichbar über ip-Adresse = server, port = 1883
  client.setServer(server, 1883); // Adresse des MQTT-Brokers
  Serial.println("Server set");
  // client.setCallback(callback);   // Handler für eingehende Nachrichten
  // Ethernet-Verbindung aufbauen
  // Ethernet.begin(mac, ip);
  // Kleine Pause
  delay(1500);
}

void loop()
{  
  // Solange probieren bis es klappt:
  if (!client.connected()) {
    Serial.println("Connecting MQTT");
    reconnect();
    //reconnect();
  }
  
  
  


int a=digitalRead(tempsensor);
char b[16];
String str;
str=String(a);
str.toCharArray(b,16);
  client.publish("temperatureSens", str );
  delay(1000);
  client.loop();
}
