#include <CrashDataRecorder.h>

long acc_data_timer = 0;
int counter = 0;
Crash_Data crashes[3];
void CrashDataRecorder_TriggerRecording(){

}


void CrashDataRecorder_GetRecordedData(){

}

void CrashDataRecorder_MainFunction(){
    long current_timer = micros();
    if(current_timer - acc_data_timer > 10000){
        counter = 0;
        acc_data_timer=current_timer;
    }
    if(current_timer - acc_data_timer > 2500){ 
        acc_data_timer=current_timer;
    }
}

void CrashDataRecorder_Init(){
    
}