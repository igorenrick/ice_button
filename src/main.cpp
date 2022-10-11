#include <Arduino.h>

#define BUTTON 2
#define RELE 9
#define MIX_MAX_TIME 300000
#define DELYA_TIME 3000

unsigned long mixLastTime;

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON, INPUT);
  pinMode(RELE, OUTPUT);
  mixLastTime = millis();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON) == HIGH) {
    // do something
    digitalWrite(RELE, HIGH);
  }

  if ((millis() - mixLastTime) > MIX_MAX_TIME) {
    delay(DELYA_TIME);
    mixLastTime = millis();
  }
}