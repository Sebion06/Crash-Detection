#include <SystemStateManager.h>

int system_state = 0;

int SystemStateManager_GetSystemState(){
    return system_state;
}

void SystemStateManager_UpdateState(int crash_type, int crash_severity){
    if (crash_type > 0)
        system_state = 1;
    else
        system_state = 0;

}

void SystemStateManager_MainFunction(){
    
}

void SystemStateManager_Init(){
    system_state = 0;
}