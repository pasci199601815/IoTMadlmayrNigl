# The Workflow - Lab Outline
## Temperature sensor
+ We searched some time for the temperature sensor, until we realised that he wasn't in our blue box
+ After we got him from Ulrich we tried to recreate our code in arduino

[Arduino Code](Pascal pls link und Fotos)

## Node-red
+ First we looked at our node-red example we did in the lecture
+ Then we tried it with our temperature sensors and it worked really well

### Our flow
![](https://github.com/pasci199601815/IoTMadlmayrNigl/blob/master/Lab-Exercises/Lab04/node_red_tempChart.PNG)
### Function after Testerino
````
if (msg.payload > 25) {
    msg.payload = "on";
}
else {
    msg.payload = "off";
}
return msg;
````
### Function after Turn on/off AC
````
var state = context.get("toggle_state");
if (msg.payload === "on") {
  if(state === "on") {
    state = "off";
  } else {
    state = "on";
  }
  context.set("toggle_state", state);
}
msg.payload = state;
return msg;
````
### TempUI
![](https://github.com/pasci199601815/IoTMadlmayrNigl/blob/master/Lab-Exercises/Lab04/node_red_tempChartUI.PNG)

+ Then we tried the rgb-led
+ The node-red part was easy, but we struggeld on how to parse the incoming rgb message and sending it to the rgb-led
+ After some tries and help from Ulrich we got it to work

[Arduino Code](https://github.com/pasci199601815/IoTMadlmayrNigl/blob/master/Lab-Exercises/Lab04/mqtt_rgb_changer.ino)

Here are the node-red flows in json to test on your own machine:
+ [TempChart](https://github.com/pasci199601815/IoTMadlmayrNigl/blob/master/Lab-Exercises/Lab04/flow_tempChart.json)
+ [Colorpicker](https://github.com/pasci199601815/IoTMadlmayrNigl/blob/master/Lab-Exercises/Lab04/flow_colorpicker.json)

