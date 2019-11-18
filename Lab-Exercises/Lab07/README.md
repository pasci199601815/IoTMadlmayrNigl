# The Workflow - Lab Outline

[Project 1](https://github.com/pasci199601815/IoTMadlmayrNigl/tree/master/Project1)

## Scale
+ We got the scale and some weights from Urlich
+ At first we had to figure out how to connect the scale to the wemos because it was very hard to read the pins on the scale
+ After connecting we read the docu
+ We tried then to display the weight on our node-red UI
+ At first it did not work so we tried different version for the mqtt nodes because we thought there was the problem
+ Later we found out that our nodes were correct at the beginning, but our problem were the pins
+ We used the D2 & D3 pins of the WEMOS which did not work with our scale
+ When we switched to D5 & D6 we got finally values
+ Ulrich then showed us how to calibrate the scale with mqtt because we didn't saw that part in the docu
+ We calibrated the scale and got the correct values on our weights
