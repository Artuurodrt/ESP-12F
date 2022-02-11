#include <Arduino.h>

	/*
	  ESP12F blinking_Led by Arturo de los Rios
	  Blink the blue LED on the Wemos D1 Mini module

	  The blue LED on the ESP-12F module is connected to GPIO2 - Pin D4
	*/
	#define USER_LED D4
	
	void setup() {
	  pinMode(USER_LED, OUTPUT);     // Initialize the USER_LED pin as an output
	}
	
	// the loop function runs over and over again forever
	void loop() {
	  digitalWrite(USER_LED, LOW);   // Turn the LED ON

	  delay(500);                      
	  digitalWrite(USER_LED, HIGH);  // Turn the LED OFF
	  delay(500);                       
	}