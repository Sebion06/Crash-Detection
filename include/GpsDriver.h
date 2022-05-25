#include <TinyGPSPlus.h>
#include <SoftwareSerial.h>

#include <Arduino.h>
#include <Wire.h>
#define RXPin 19
#define TXPin 18
#define GPSBaud 9600


void GpsDriver_IsProveoutComplete();
void GpsDriver_getPosition();
void GpsDriver_GetDate();
void GpsDriver_GetTime();
void GpsDriver_MainFunction();
void GpsDriver_Init();