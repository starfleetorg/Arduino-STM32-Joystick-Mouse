#include "Mouse.h"

void setup() {
  Serial.begin(115200);  // Start serial
  Mouse.begin();  // Start mouse
  pinMode(PB1, INPUT);  // Initialize the pins
  pinMode(PB0, INPUT);
  pinMode(PA0, INPUT_PULLUP);
}

void loop() {
  //Serial.println(analogRead(PB1));  // X
  //Serial.println(analogRead(PB0));  // Y
  Serial.println(digitalRead(PA0));  // Button

  Mouse.move(map(analogRead(PB1), 0, 1000, -10, 10), map(analogRead(PB0), 0, 1000, -10, 10));
  if (digitalRead(PA0) == 0) {
    Mouse.press(MOUSE_LEFT);
  }
  else {
    Mouse.release(MOUSE_LEFT);
  }

}
