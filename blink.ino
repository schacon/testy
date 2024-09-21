/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);               // wait for a second
}

/*
this a python version of the code, incase if someone who likes python wanted to use it.
import time

# Simulating pin 13 (LED)
led = False

# Infinite loop to simulate blinking
while True:
    # Turn LED on
    led = True
    print("LED is ON")
    time.sleep(1)  # Wait for 1 second

    # Turn LED off
    led = False
    print("LED is OFF")
    time.sleep(2)  # Wait for 2 seconds

*/