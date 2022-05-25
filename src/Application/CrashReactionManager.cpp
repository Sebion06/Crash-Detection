#include <CrashReactionManager.h>
#include <CrashDetectionAlgorithm.h>
#include <Arduino.h>
#include <SystemStateManager.h>
long crash_reaction_timer = 0;

void CrashReactionManager_MainFunction(){
    int system_state = SystemStateManager_GetSystemState();
    if (system_state > 0 )
    {
        int pin;
        int crash_type = CrashDetectionAlgorithm_GetCrashType();
        int crash_severity = CrashDetectionAlgorithm_GetCrashSeverity();
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
}
void CrashReactionManager_GetDeploymentMask(){
}

void CrashReactionManager_Init(){
}
