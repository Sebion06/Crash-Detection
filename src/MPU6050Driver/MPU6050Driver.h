#include <Arduino.h>
#include <Wire.h>
#include <MPU6050_light.h>

void printValues(float valueX, float valueY, float valueZ);
void DriverInit();
void MainFunction();
void GetAccelerationData();