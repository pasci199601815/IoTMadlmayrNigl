# Lecture 4
## Scaling and Testing:
###  What will be issues scaling (system size, number of systems,management)?
- harder to manage 
- connections between systems becomes more complicated
- overhead
- documentation
### What would you like to see for scaling up? (What is not so great currently?)
- Dedicated support teams for fast error responses.
- clear-cut communication channels
### How can we do testing?
Unit-Tests, Integration-Tests, Test-Channels (Alpha, Beta, Canary)
### What role wil play?
#### Simulator(-components)?
- to save resources
- to cheapen testing
- to prepare for real world scenarios

## Watching the video
### MQTT:
- Chatting (M2M)
- Switches
### Stories:
Describe scenarios before they get applied/implemented (helps to outline specific scenarios)

- Think and discuss 10 minutes (with neighbor/s) – write down
at least 2 common points for each.
- Open discussion
#### What are the key challenges of IoT and why?
- Up to 20 billion devices near future 2020
- And 300+ IoT platforms to connect
- Devices are not connected to the cloud
- Have low bandwidth
- Latency of connectivity is significant
- Connectivity is not reliable
- Connectivity is not cost-effective

Without integration, no IoT.

#### What is/are the generic solution(s) for it?
- Hybrid integration architecture
- Connectors
- Process Design tools
- Result in integration processes

- Enterprise integration patterns

- Pervasie integration with different technologies and user roles
##### Two examples:
- Cloud ready: process integration…
- Cloud native: API managment

#### Definition/relation of cloud, edge, fog.
Very Similiar to what we have concluded, but they are intertwined heavily and can be interchanged

#### Two advantages of edge/fog computing.
- Keep data closer to the edge
- Locally connect

#### What are the different categories of the presentedframeworks?
- Dataflow pipeline
- Stream processing
- Process Engine

#### What are the main features of each category?
- Dataflow pipeline
  -Flow based programming, ingest data from various sources
  -Extract transform load
-Stream:
  -Continuous queries
  -Sliding windows
  -Filter aggregration

-Process engine:
  -real time processing logic at the edge
  -more process flow

#### Four or more examples of applications.

##### Stream: 
- matlab
- sas
- pmml
- spark ml


#### Four or more examples of available tools.
- Node-red 
- eclipse
- ibm kura
- flogo

#### Three common features
- Open source frameworks
- Connectivity to iot technologies mqtt coap rest
- Web ui for visual coding, testing, debugging
#### Target audience
- For developers, integration specialists, citizen integrators
#### Advantages and disadvantages of each.
- Eclipse kura:
	+ (+)combination of iot gateway and framework
	+ (+)can be run on variety of platforms
	- (-)for developers/integration specialists only
	- (-)complex to install

- Node-Red:
	+ (+)visual designer
	+ (+)developing in web ui
	+ (+)focus on integration on an iot getway
	+ (+)very easy to install
	+ (+)built on node.js
	+ (+Omature framework
-	(-)No binaries to share
-	(-)Resource heavy
-	(-)Not ideal for powerful things
- Flogo:
  - OSS – available on github
  - Easy to install
  - Intuitive to use
Focusses on iot geateways and very lightweight edge applications
Powered by go programming language
Visual coding via web designer
	+ web native step-back debugger
		- Simulate sensor events, change configs etc
- You can export it as binary, to run it on any edge device

- Flows can be shared as json strings

#### Relation to the cloud?
- Can be run on cloud
– What is available/characteristics?
	Hardware and Field abstraction
	Manage network and connectivity
– Where do these fit?
Mostly cloud, but can be interchangibly used