#include <Arduino.h>

struct Crash_Data
{
    byte nr_of_crashes;
    int crash_type;
    float acc_x[8], acc_y[8], acc_z[8];
    float gyro_x[8], gyro_y[8], gyro_z[8];
    float acc_t0_x, acc_t0_y, acct0_z;
    float gyro_t0_x, gyro_t0_y, gyro_t0_z;
    int severity;

};

void CrashDataRecorder_TriggerRecording();
void CrashDataRecorder_GetRecordedData();
void CrashDataRecorder_MainFunction();
void CrashDataRecorder_Init();