#include <GpsDriver.h>

TinyGPSPlus gps;
SoftwareSerial SoftSerial(RXPin, TXPin);

void GpsDriver_MainFunction(){
    Serial.print(gps.encode(SoftSerial.read()));
    while (SoftSerial.available() > 0) {
 
        if (gps.encode(SoftSerial.read())) {
    
            if (gps.date.isValid())
            {
                Serial.print(gps.date.month());
                Serial.print(F("/"));
                Serial.print(gps.date.day());
                Serial.print(F("/"));
                Serial.print(gps.date.year());
            }
            else
            {
                Serial.print(F("INVALID"));
            }
        }
    }
}

void GpsDriver_Init(){
    SoftSerial.begin(9600);
    Serial.print(F("Testing TinyGPSPlus library v. ")); Serial.println(TinyGPSPlus::libraryVersion());
    Serial.println();

}