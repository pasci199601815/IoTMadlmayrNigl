# Lecture 2
## Architecture and Terminology of IoT
### TO-DO
- Research IoT in respect to:
  - Cloud (-computing)
  - Edge (-computing)
  - Fog (-computing)
  
### Cloud:
the practice of using a network of remote servers hosted on the Internet to store, manage, and process data, rather than a local server or a personal computer.
#### Examples:
Online-Storage, Server farms

### Edge (gateway, router):
The word edge in this context means literal geographic distribution. Edge computing is computing that's done at or near the source of the data, instead of relying on the cloud at one of a dozen data centers to do all the work. It doesn't mean the cloud will disappear. It means the cloud is coming to you
#### Examples:
- Smart Street Lights
- Automated Industrial Machines
- mobiles devices
- smart homes
- automated vehicles like cars , drones etc.

### Fog:
Fog computing is a term created by Cisco that refers to extending cloud computing to the edge of an enterprise's network. Also known as Edge Computing or fogging, fog computing facilitates the operation of compute, storage and networking services between end devices and cloud computing data centers
Swarm describes the theology of decentralized computing.

#### Examples:
- Mining
- Wind Farms
- Oil Wells

## Low Level Buses:
I got assigned Number 4 to research: SPI (Serial peripheral Interface):

###  What is SPI?
Serial Peripheral Interface (SPI) is an interface bus commonly used to send data between microcontrollers and small peripherals such as shift registers, sensors, and SD cards. It uses separate clock and data lines, along with a select line to choose the device you wish to talk to.
### Wiring?
Serial Peripheral Interface (SPI) is a four-wire bus. It consists of a serial clock, master output/slave input, master input/slave output, and a device select pin. The speed of the bus range is much higher than that found in I2C or SMBus; speeds up to 80 MHz are not uncommon.
### Maximum Length:
Many experts agree that the maximum of amount of distance, that can be covered by  Serial Peripheral Interfaces is around 3 metres (10 feet)
### The different signals of SPI:
- SCK (Serial Clock) - Shift cycle
- MISO (Master In <- Slave Out) also SDI (Serial Data In) or DI
- MOSI (Master Out -> Slave In) also SDO (Serial Data Out) or DO
- Slave select
### Examples:
- Sensors
- embedded systems
### Clock:
1.5 MHz up to 68 MHz
### Transfering data using the master-slave-principle (bidirectional data transfers):
With SPI, the terms 'sender' and 'receiver' lose their meaning. The transmission principle works in such a way that 1 bit is transmitted from master to slave and 1 bit from slave to master at the same time. The transmission is to be described rather with the term "exchange of bits", than that it concerns a sending or receiving. Depending on your point of view, you could also say that both master and slave are both transmitters and receivers at all times. The only difference between the bus participants is that with the SPI bus all communication always starts from the master. It manages the SCK line and if the master does not generate SCK pulses, a slave cannot transmit anything. The generation of SCK pulses is usually triggered by the master simply being instructed to output 1 byte via SPI. Furthermore, a slave cannot delay an SPI transmission, as is the case with the I2C bus. If the SCK pulses come from the master, then a slave must serve the MISO line. He has no possibility not to do this, even if he has no result for the master yet. Even if the slave does not operate the MISO line, the master will evaluate the polarity of the MISO line at the time set by the mode and determine the next bit from this.
### Further Details:
If a request is made from a master to a slave in such a way that the master sends a command to the slave to which the slave has to respond with a result, then at least 2 transmissions are always necessary. In the first byte exchange, the master transmits its command to the slave (which will logically not have a result at this point in time, as it does not yet know the command) and in the second byte exchange, the master simply transmits only 1 byte (in most cases, any byte value is sufficient) in order to give the slave the opportunity to transmit the previously requested result to the master. It should be noted that a slave will often need some time to evaluate a command it has just received and provide the corresponding results. A master will therefore do well to take a short pause after the byte exchange for the purpose of command transmission, before picking up the result with the second byte exchange. 

## Combining Results in Group:
### RS232
- very old
- maximum length
- with special cable: 300m
- used for peripherals
- serial communication
- deprecated nowadays

### RS485
#### Wiring:
- Twisted pair cables, more than one possible
- full-duplex: 2 twisted pair cables necessary
- speed: 10 mBits/s
- Huge falloff over large distances
- Industrial Standard
  - Physical Layer for modbus: is used for ICs

### I2C
- integrated circuit, is used to connect other controllers, very low level
- quite cheap
#### Speed:
- Up to a metre 10 kilobouts
- Up to 10 metres 1 kilobouts
- Maximum transfer speed: 100 kbit/s
- fast speed mode is 4x as fast
#### Examples:
Accessing Real Time Clock of NVRAM and is used to turn on and off Power supply.

# Recap of this lecture:
- next lab looks to be quite a chellenge
- self-researching and comparing results is information-rich
- I got to know new low level buses
# Recap of the lab:
- Instead of using the Webhooks library I hardcoded the POST Request
- It worked after realising i need to refresh in the IFTTT- Interface
