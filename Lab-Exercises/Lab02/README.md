# The Workflow - Lab Outline
+ Discuss what to do
+ Discuss what story we should write
+ Tried Story
+ Uli validated our story and gave some tips
+ Then we tried to message telegram with ifttt
+ This took lots of time to research how to work with ifttt
+ We send a message successful but never received it
+ At home we noticed we configured out ifttt false

# Temperatursensor (tried at Home, but failed :/)

````
int ThermistorPin = D5;
int Vo;
float R1 = 10000; // value of R1 on board
float logR2, R2, T;
float c1 = 0.001129148, c2 = 0.000234125, c3 = 0.0000000876741; //steinhart-hart coeficients for thermistor

void setup() {
  Serial.begin(9600);
}

void loop() {
    Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0); //calculate resistance on thermistor
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2)); // temperature in Kelvin
  T = T - 273.15; //convert Kelvin to Celcius
 // T = (T * 9.0)/ 5.0 + 32.0; //convert Celcius to Farenheit

  Serial.print("Temperature: "); 
  Serial.print(T);
  Serial.println(" C"); 
}
````
# First Story
## Home gateways 
Herbert is watching the news on his Xiaomi Mi Smart TV. It’s a late winter night and it’s getting colder. He opened the tilt windows in his living room before to get some fresh air. As the room temperature drops below 25 C°, the windows close automatically. The light changes accordingly to a deep white, because it’s getting warmer. He’s done watching TV, so he tells Alexa to shut down: “Alexa, shut down the TV”.  He’s hungry, he goes in the kitchen. He looks at the screen of his smart fridge and sees all the products in his fridge. On the list he sees that he needs more milk, so he presses order on the fridge, then the fridge sends a request to his amazon account to order. He goes to sleep. When his alarm goes off in the morning, all blinds open automatically, and the smart bulbs dimly light up. There plays annoying ring tone from his boxes. He turns off the alarm with his smart watch. His smart watch rings, so he knows his milk and eggs arrived. He looks at his phone and got a recipe from his amazon account. To get ready for work he starts his tesla on his phone, his tesla drives out of his garage.

# Second Story
Industry 4.0 Scenario
Overseer: Adam, Worker: John, Bob

Adam works and lives in Linz, Austria. He keeps his House simple, no extra Gadgets or Toys that may help to live an easier life. He takes public transportations to get to his work, where he is responsible for a handful of workers for example Bob.
John lives very close to the factory he works at and every morning, if it’s not too cold, he rides the bike to work, otherwise he takes the bus. In his house he and his fiancée have an amazon echo device which they use frequently even for the smallest things, like turning lights on or off.
Bob lives with his two roommates near the center of the city and drives his own car to work.
In the morning Adam gets new notifications of what he and his workers should accomplish that day. They finish most of their work from the day before, except one project. That project is still on the list for the new day, as top priority. Adam then chooses worker/workers for each project that is on his screen. For the started project from the day before, a bar on the screen showing, that it’s about 65% done.
Bob could not finish his last project from yesterday since some small parts were missing, but as he starts his system, he gets a notification, that the missing parts arrived and he can finish the project on addition he also gets 2 more for the day. Bob chooses the almost finished project and sees pulsing green light on the screen signifying him where the missing parts have arrived so he goes and picks them up. When he comes back, he records that he picked up the parts with the current time. Now he can see a model of the project and the areas where those parts have to be installed at are highlighted. After he has finished his work on that project, he sends a notification to his overseer Adam and to another worker from a different department, John, so he can deliver the project elsewhere. 
After working some time on his new project John gets a notification, that he can pick up a project that he was supposed to get yesterday. He immediately stops his current work and puts it aside to finish said project. After he picked it up, he records that he has the project now and starts working on it.
At the end of the day Adam looks up all the projects of the day and records them and their state in a table that is send to his supervisor so he could check if everything is going well.
