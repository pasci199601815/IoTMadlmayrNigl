# The Workflow - Lab Outline
## Repeat Node-RED parts with Flogo (if you can't install docker image, you need to program directly in json)
 – integrator
 – web-trigger for color setting
### install in flogo:
 - github.com/TIBCOSoftware/flogo-contrib/trigger/mqtt
 - github.com/project-flogo/edge-contrib/activity/mqtt
 
# Flogo

## Docker problem and fix
Thanks to our collegue, Michael Leister, I was able to run Flogo on a non-Pro Version of Windows.

The recreation of the node-red integrator looks as following:
 
![](https://github.com/pasci199601815/IoTMadlmayrNigl/tree/master/Lab-Exercises/Lab05/iotflogo.PNG)

It fullfills the same task of sending an MQTT-Message as soon as the temperature treshold is surpassed.
