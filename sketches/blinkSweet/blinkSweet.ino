/*
  Blink in a sweet way.
  Turns on an LED on progressively, then off progressively, with a
  short delay in between, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.
  Modified 27.11.2014 by Olivier Lange
*/

int ledPin = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode( ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    for (int brightness = 0; brightness < 255; brightness++) {
      analogWrite( ledPin, brightness);
      delay(2);
    }
    delay(250);
    for (int brightness = 255; brightness >= 0; brightness--) {
      analogWrite( ledPin, brightness);
      delay(2);
    }
    delay(250);
}
