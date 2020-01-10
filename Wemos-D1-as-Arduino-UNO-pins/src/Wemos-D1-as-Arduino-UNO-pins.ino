#include <Arduino.h>
#include <WemosD1R1Pins.h>

void setup() 
{
  // initialize LED digital pin as an output.
  pinMode(D9, OUTPUT);
}

void loop() 
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(D9, HIGH);
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(D9, LOW);
   // wait for a second
  delay(1000);
}
