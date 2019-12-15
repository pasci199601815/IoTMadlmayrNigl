# Node-red
![](node_red.PNG)
![](node_redUI.PNG)

## Brief Introduction into Node-red
In this lecture Ulrich showed us how to work with node_red flows and how to incorporate them into the UI.


## State function
This shows how u can make an on/off-toggle with node_red

````
var state = context.get("toggle_state");
if (msg.payload === "on") {
	if(state === 1) {
		state = 0;
	} else {
		state = 1;
	}
	context.set("toggle_state", state);
}
msg.payload = state;
return msg;
````
## 2 small scenario ideas where such interfaces could be used
+ watching the temperature in your room on a screen
+ a whole dashboard for a system like a smarthome (turning on/off lights and AC, open/close windows ...)
 

# (TA) 

## Flogo
Anna Spiegelmayr gave me some very helpful tips, how to configure the In- and Out-Section and how to implement the integrator via branching (more in lab report)
