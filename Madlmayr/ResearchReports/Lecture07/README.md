## How can you install IoTempower locally in a Linux environment?
+ install dependencies: sudo apt install git mc mosquitto mosquitto-clients virtualenv iptables bridge-utils hostapd dnsmasq nodejs
+ disable the mosquitto server (you can skip this if you like the default password-less mosquitto setup, but be warned): sudo systemctl stop mosquitto; sudo systemctl disable mosquitto
+   setup iotempower: clone this repository
  - If you just want read-only access type in a folder of your choice: git clone https://github.com/iotempire/iotempower
  - If you are a IoTempower developer, use git clone git@github.com:iotempire/iotempower
+ make IoTempower runnable -> copy examples/scripts/iotempower into your bin folder and adapt the path in it to reflect the location where you cloned IoTempower. If you use tmux or byobu with bash consider sourcing lib/shell_starter/iotempower.bash in your .bashrc.
+ start IoTempower and agree and wait for dependencies to be downloaded (if packages are missing, fix dependencies and try to run iot install clean)
+ After successfully entering IoTempower (the prompt should have changed colors and show IoTempower in red, white, and black), start configuring your first IoT node, see First IoT Node.

## Where are the tools/scripts?
https://github.com/iotempire/iotempower/tree/master/bin
## Where is documentation?
https://github.com/iotempire/iotempower/blob/master/doc/index-doc.rst
## What is the role of the different folders in lib/node_types?
+ Because base libraries and special libraries for each board etc.

  - Accesspoint
  - Node-red
  - Cloudcommander
  - Ngix webserver
  - Dongle daemon
+ Integration Services
+ Deployment Services

## What topic needs to be called with what to
+ Switch on the coffee machine?
  - kitchen/coffee-machine/switch <toggle>
+ Set all lights in living room to blue?

  - living_room/leds1/rgb_strip (0,0,255)
  - Same for leds2

+ Turn the main power off?

+ Main/switch <off>

## What is the general rule for forming topics in IoTempower?
Forming a path to the devices/subtopics

## What is/needs to be running in an IoTempower system?
A hardware that has the dongle flashed and a hardware that has the nodes flashed.
Also the sensors you want to use.

## When does it make sense to change something in system.conf?
+ To have several participants in an ioTsystem
+ Make configs in your own system.conf
+ Then remote deploy

## What needs to/can go into node.conf?
The code to control the sensors and what they should do.

## How do config.txt, etc/iotempower.conf, system.conf, and node.conf influence environment variables for compiling? Give examples for when to change which.
+ they are responsible for the general structure of the project and it what order something gets executed
## What are the steps IoTempower executes, when you call deploy in a node-folder (or room or system folder)? What types of deploy are there?
You adabt the node on a Hardware, for example a wemos, and now the systems remembers this wemos and can always run the code of a node when you deploy the node (and it found it) on the wemos

## Why can only one deploy run at once?
Because it can talk to more systems at the same time or there will be some problems

## While lecturer demonstrates:
– What are the common functions, devices support?
In the lib folder  general  device.h
– What is the “fluent interface”?
A fluent interface provides an easy-readable, flowing interface, that often mimics a domain specific language. Using this pattern results in code that can be read nearly as human language.
– Which functions need to be overwritten?
https://github.com/iotempire/iotempower/tree/master/lib/node_types/esp/src
_ignore_case for case sensitivity
Set_pollrate

– In which order and when are the overwritten
functions called?
In output.h
– What is a Subdevice (look at output for example)?
– What generic filters would be nice?
Amperage filter

Ca 50% of the features are covered in the framework that I personally would like to see.



