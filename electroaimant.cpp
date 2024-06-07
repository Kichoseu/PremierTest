#include <Arduino.h>
#include <LibRobus.h>

 
/*
  Turns on an Electromagnet on for one second, then off for one second, repeatedly.
  This example code is in the public domain.
*/

//#define Electromagnet uint8_t J21
//const uint8_t Electromagnet = 21;
//const uint8_t COUNTER_FLAG_PIN[2] =  {PIN_J21, A15};
const uint8_t Electromagnet[2] = {SCL, SDA};

// the setup routine runs once when you press reset:
void setup() {
    // Initialize the digital pin as an output.
    pinMode(Electromagnet, OUTPUT);
    // Initialize serial communication at 9600 bits per second:
    Serial.begin(9600);
    BoardInit();
}

// the loop routine runs over and over again forever:
void loop() {
    digitalWrite(Electromagnet, HIGH);  // Turn the Electromagnet on (HIGH is the voltage level)
    //Serial.println("Electromagnet is ON"); // Use Serial to print messages
    delay(5000);                        // Wait for five seconds
    digitalWrite(Electromagnet, LOW);   // Turn the Electromagnet off by making the voltage LOW
    //Serial.println("Electromagnet is OFF"); // Use Serial to print messages
    //delay(5000);                        // Wait for five seconds
}
