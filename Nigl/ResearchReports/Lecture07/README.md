## How can you install IoTempower locally in a Linux environment?
https://github.com/iotempire/iotempower/blob/master/doc/installation.rst
## Where are the tools/scripts?
https://github.com/iotempire/iotempower/tree/master/bin
## Where is documentation?
https://github.com/iotempire/iotempower/blob/master/doc/index-doc.rst
## What is the role of the different folders in lib/node_types?
Compatibility for the listed Hardware and creating nodes for it
https://github.com/iotempire/iotempower/tree/master/lib/node_types

## What is/needs to be running in an IoTempower system?
A hardware that has the dongle flashed and a hardware that has the nodes flashed.
Also the sensors you want to use.

## What needs to/can go into node.conf?
The code to control the sensors and what they should do.

## How do config.txt, etc/iotempower.conf, system.conf, and node.conf influence environment variables for compiling? Give examples for when to change which.

## What are the steps IoTempower executes, when you call deploy in a node-folder (or room or system folder)? What types of deploy are there?
You adabt the node on a Hardware, for example a wemos, and now the systems remembers this wemos and can always run the code of a node when you deploy the node (and it found it) on the wemos

## Why can only one deploy run at once?
Because it can talk to more systems at the same time or there will be some problems
