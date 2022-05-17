#include <CrashReactionManager.h>
#include <Arduino.h>

long crash_reaction_timer = 0;

void CrashReactionManager_MainFunction(int crash_type, int crash_severity){
    int pin;
    if (crash_type == 1)
       pin=crash_type+2+crash_severity;
    if (crash_type == 2)
        pin=crash_type-1+crash_severity;
    if (crash_type == 3)
        pin=crash_type+2+crash_severity;
    Serial.print(crash_type);
    if (crash_type != 0){
        digitalWrite(pin,HIGH);
        delay(400);
        digitalWrite(pin,LOW);
        delay(400);
        digitalWrite(pin,HIGH);
        delay(400);
        digitalWrite(pin,LOW);
    }
}
