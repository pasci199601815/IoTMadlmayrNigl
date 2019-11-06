# Reasearch these things
## Cloud
computing is the delivery of computing services—including servers, storage, databases, networking, software, analytics, and intelligence—over the Internet (“the cloud”). You typicall pay only for cloud services you use.
### Example
+ Online-Storages
+ Server farms
## Edge
Edge Computing is the delivery of computing services on the edge of a network, so on the end device
### Example
+ Gateway
+ Router
+ Mobile devices
## Fog
Fog happens between Cloud and Edge, it delivery computing services on more devices between the central server and the end device.
### Example
+ Wind Farms
+ Oil Wells
## Relation?
They are layers that tells where the magic happens
# Research for Controller
## RS232
+ Very Old
+ Max length is 15m
+ With special cable 300m
+ Used for mouse, keyboard and modems.
+ Serial Communication
+ Not used anymore really
## RS485
+ Twistet Pair cable, with 2 full duplex
+ Speed up to 10Mbit/s
+ Max length 1200m with low speed
+ Huge fall of large distance
+ Physical layer for ICs Modbus, and on that there is a other protocol.
+ Vehicle bus
## I2C
Inter-Integrated Circuit

synchronous, multi-master, multi-slave, packet switched, single-ended, serial computer bus
attaching lower-speed peripheral ICs to processors and microcontrollers in short-distance, intra-board communication. 
I²C is appropriate for peripherals where simplicity and low manufacturing cost are more important than speed.

### Length
I2C link is about 1 meter at 100 Kbaud, or 10 meters at 10 Kbaud
### Speed
Common I²C bus speeds are the 100 kbit/s standard mode and the 400 kbit/s Fast mode. There is also a 10 kbit/s low-speed mode, but arbitrarily low clock frequencies are also allowed. Recent revisions of I²C can host more nodes and run at faster speeds (400 kbit/s Fast mode, 1 Mbit/s Fast mode plus, 3.4 Mbit/s High Speed mode, and 5 Mbit/s Ultra Fast-mode). These speeds are more widely used on embedded systems than on PCs.
### Example
+ Integrated circles
+ Accessing real-time clocks and NVRAM chips that keep user settings.
+ Reading hardware monitors and diagnostic sensors, e.g. a fan's speed.
+ Turning on and turning off the power supply of system components. 
## SPI
Used to send data between micro controllers or peripherals
### Wiring
+ Four wiring bus
+ Signal modes
+ SCK (serial clock)
+ SDI (serial data in)
### Speed
+ Clock: 1,5MHz 
### Length
3 meters
### Examples
+ Sensors
+ SD cards
