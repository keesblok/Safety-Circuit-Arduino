# Safety-Circuit-Arduino

 ## Concept for a safety circuit for an Arduino. ##
 If there is water between the ground wire and the sensor wire, the Arduino shuts itself and the attached circuit down so it doesn't get damaged easily.
 
 ## Usage ##
 - Press the button for startup.
 - The button is a bypass for the relay. &rarr; Now the Arduino has current and starts up.
 - The Arduino puts 5V on the relay pin. &rarr; The relay goes on. (Now you can take away your finger from the button)
 - If the Arduino senses water between the two pins &rarr; It puts 0V on the relay pin. &rarr; The relay goes off &rarr; The Arduino (and the attached circuit) has no current &rarr; The circuit shuts down.
 
 
 ## Circuit ##
 ![Safety circuit Arduino.png](https://github.com/keesblok/Safety-Circuit-Arduino/blob/master/Safety%20circuit%20Arduino.png "Safety circuit Arduino")
