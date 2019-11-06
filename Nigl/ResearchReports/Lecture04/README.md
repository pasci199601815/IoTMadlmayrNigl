## What will be issues scaling?
+ More overhead
+ harder to manage
+ harder error handling, documentation, fast connection
## How can we do testing?
+ Unit tests
+ some testers (user)
+ simulation
## What would you to see for scaling up?
+ Dedicated support teams 
## What role will play
### Simulator(-components)?
Its easier to build a simulator then the real sing
### MQTT
Saves human resources (M2M)
### Stories
See problems before building the real product
## What are the key challenges of IoT and why?
+ Network of physical components
+ all must work with each other
+ Hard integration, without integration there is no IoT
+ Latency of connectivity is significant
+ Lots of standards for different levels
## What is/are the generic solution(s) for it?
+ MQTT
+ CoaP
+ OPC
+ Hybrid integration platform
## Two examples for used patterns.
+ Application Integration
+ Edge integration
## Definition/relation of cloud, edge, fog.
Devices <-> Gateway <-> Cloud
## Two advantages of edge/fog computing.
+ Often you have Device to device connection
+ you can have the logic in the edge and don’t need a cloud
+ Local control	
+ Less traffic to the cloud
## What are the different categories of the presented frameworks?
+ Dataflow Pipeline
+ Stream Processing
+ Process Engine
## What are the main features of each category?
+ Dataflow: Throughput A-B
+ Stream Processing: Corelation between Streams
+ Process Engine: Integration on the Edge
### Four or more examples of applications.
+ Apachi kura
+ IBM
+ Storm
+ Flogo
## Four or more examples of available tools.
+ Predictive maintenance 
+ Apachi kura
+ IBM
+ Storm
+ Flogo
## Three common features
+ Web UI for visual 
+ Open source frameworks
+ Deployable at the edge
## Target audience
+ Eclipse Kura: Developers
+ Nodered: Easy to use
+ Flogo: Low Power Devices
## Advantages and disadvantages of each.
### Eclipse Kura
+ Java
+ Can be run on a variety of platforms
- Not easy to setup
- More for developers
### Nodered
+ free
+ great visual designer
+ easy to install
+ Can be run on a variety of platforms
- No Binarys to share
-	Not a tool for powerful integrations
### Flogo
+ easy to install
+ very lightweight edge application
+ open source
+ can be export as binary and run on any device	
