#include <Arduino.h>
#include <WemosD1R1Pins.h>

void setup() 
{
  // initialize LED digital pin as an output.
  pinMode(BOARD_LED, OUTPUT);
}

void loop() 
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(BOARD_LED, HIGH);
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(BOARD_LED, LOW);
   // wait for a second
  delay(1000);
}
