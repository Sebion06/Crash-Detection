#include <CrashDetectionAlgorithm.h>
#include <SystemStateManager.h>

#include <Arduino.h>
#include <Wire.h>
float accXSamples[FRONTAL_MIN_NB_ACC_SAMPLES];
float accYSamples[LATERAL_MIN_NB_ACC_SAMPLES];

extern int crash_type=0;
extern int crash_severity=0;

int CrashDetectionAlgorithm_GetCrashSeverity(){
    return crash_severity;
}

int CrashDetectionAlgorithm_GetCrashType(){
    return crash_type;
}

void DetectCrash(float acc, int crash, float *samples, int samples_count, float small_threshold, float high_threshold){
    int i;
    if (abs(acc) > small_threshold){
        for (i=0; i < samples_count; i++)
            if (abs(samples[i]) < small_threshold)
            {
                samples[i] = abs(acc);
                break;
            }
        if (i == samples_count) //crash and samples cleanup
        {
            //Serial.print(String(crash_type)+"crash ");
            if (crash == 1)
               crash_type = FRONTAL_CRASH;
            else{
                if (acc > 0)
                   crash_type = LATERAL_RIGHT_CRASH;
                else{
                    if (acc < 0)
                        crash_type = LATERAL_LEFT_CRASH;
                }
            }
            if (abs(acc) >= high_threshold )
                crash_severity = SEVERE_CRASH;
            else
                crash_severity = EASY_CRASH;   
            for (i=0; i < samples_count; i++)
                samples[i] = 0;
        }
    }
    else{
        for (i=0; i < samples_count; i++)
            samples[i] = 0;
    }
}

void CrashDetectionAlgorithm_MainFunction(float accX, float accY, float accZ){
    crash_type=0;
    crash_severity=0;
    DetectCrash(accY, 1, accYSamples, FRONTAL_MIN_NB_ACC_SAMPLES, FRONTAL_CRASH_LOW_ACC_THRESHOLD, FRONTAL_CRASH_HIGH_ACC_THRESHOLD);
    SystemStateManager_UpdateState(crash_type, crash_severity);
    DetectCrash(accX, 2, accXSamples, LATERAL_MIN_NB_ACC_SAMPLES, LATERAL_CRASH_LOW_ACC_THRESHOLD, LATERAL_CRASH_HIGH_ACC_THRESHOLD);
    SystemStateManager_UpdateState(crash_type, crash_severity);
    
}

