/* Concept for a safety circuit for an Arduino.
 * If there is water between the two wires, the Arduino shuts itself down so it doesn't get damaged easily.
 * 
 * Created by: Kees Blok
 * 
 * Circuit
 *   Place the sensorwire and the other wire next to each other at the bottom of the enclosure of the Arduino.
 *   (The place where the water probably stays first.)
 *   
 *   See https://github.com/keesblok/Safety-Circuit-Arduino for more information.
*/

// Declarations for the safety circuit
const int relay = 2;
const int sensorPin = A0;   // Attach the other wire to ground (GND)
const int treshold = 800;   // Adjust to sensitivity

// Put your declarations here:
const int ledPin = 13;


void setup() {
  // Setup for safety circuit
  pinMode(relay, OUTPUT);
  pinMode(sensorPin, INPUT_PULLUP);

  digitalWrite(relay, HIGH);
  
  // Put your setup here:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  while (analogRead(sensorPin) > treshold) {
    // Put the main code here
    
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  
  digitalWrite(relay, LOW);
}
