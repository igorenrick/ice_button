#include <Arduino.h>

#define BUTTON 2
#define RELE 9

unsigned long mixLastTime;

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(RELE, OUTPUT);
  digitalWrite(RELE, LOW);
}

void loop() {
  if(digitalRead(BUTTON) == LOW) {
    digitalWrite(RELE, HIGH);
  }
}