
#include <Arduino.h>
#include <Wire.h>
#include "../GlobalScheduler/GlobalScheduler.h"


void setup() {
  Serial.begin(9600);
  Wire.begin();
  TK_init();
}

void loop() {
  MainTaskScheduler();
}