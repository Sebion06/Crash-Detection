
#include <Arduino.h>
#include <Wire.h>
#include "../GlobalScheduler/GlobalScheduler.h"


void setup() {
  Serial.begin(9600);
  Wire.begin();
  
}

void loop() {
  MainTaskScheduler();
}