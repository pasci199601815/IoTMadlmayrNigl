### Cloud-Computing:
Bereitstellung von IT-Leistungen und IT-Infrastruktur als Service über das Internet
	Beispiele: Speicherplatz wie Dropbox, Google Drive...

### Edge-Computing:
Ähnlich wie Cloud-Computing, nur dass die Service vom Endgerät durchgeführt werden und nichts durch das Internet geschickt wird..
	Beispiele: 

### Fog-Computing:
in Kurz Cloud-Computing und Edge-Computing zusammen. Rechenleistung ist nicht mehr Zentral in der Cloud, sondern dezentral, am rand der Cloud.
	Beispiele

Fog und Edge-Computing sind Ansätze des Cloud-Computing. Sie unterscheiden sich an dem Ort, wo die Service stattfinden.


## RS-232:
+ Verbindung zwischen Terminal und Modem, Poit-to-Point (spannungspegel und Timing). Ursprünglich bis max. 15 M (19,2 kBd), 900m (2,4 kBd), <2m (115,2 kBd)
+ Höhere Leistung an geringere Leistung stecken
+ Geringere Übertragungsrate
+ Beispiele: PC's Verbindung zu modems, drucker, mäuse (alt)
		Modern: Industriemaschinen, Netzwerk-Equipment und Forschungsinstrumente (short-ragen, low-speed, point-to-point ausreichend)
+ Heutzutage wurde es von USb abgelöst. Nachteil: kabel länge ist kürzer als von RS-232
+ Beim Verbinden reicht es die dinge anzuschließen
+ Auf eine Geschwindigkeit einigen

## RS-485:
+ Automatisierung und Industrie 230 Reciever unterstützen
+ 12m 12mb/s

## I2C:
+ Serielles Protokoll
+ low-speed Geräte LCD-Displays anzusteuern
+ top 50mb ~ 150 kb
+ 1-10m 
+ 8bit pakete
+ eindeutige 7bit Adresse von Geräte
+ LOW-ACTIVE anschauen.

## SPI:
+ Serial Periphal Interface
+ Synchrones serial communication
+ Schlatungen Verbunden
+ Daten zwischen Mikrokontrollern übertragen
+ Kleine Dinge, Sensoren SD-Karten...
+ Unterschiedliche Anschlüsse
+ Einige Sachen zum einstellen
+ für 3 Meter ausgelegt
+ Clock frequencies bis in Mh Bereich

## Onewire:
+ low-speed 16,3 kb/s
+ easy to use, single contact
+ very energy-efficient and cost-efficient
+ only 1 Master neden to control slaves
+ Master sends Impulses
