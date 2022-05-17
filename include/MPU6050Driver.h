#include <Arduino.h>
#include <Wire.h>
#include <MPU6050_light.h>

void printValues(float, float, float);
void MPU6050Driver_Init();
void MPU6050Driver_MainFunction(float *);
void GetAccelerationData(float *);