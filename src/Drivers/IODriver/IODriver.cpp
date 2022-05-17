#include <IODriver.h>
#define FRONTAL_CRASH 1
#define LATERAL_RIGHT_CRASH 2
#define LATERAL_LEFT_CRASH 3
#define EASY_CRASH 1
#define SEVERE_CRASH 2

void IOdriver_setPwm(){

}

char IOdriver_ReadPin(){}

void IOdriver_ToggePin(int pin,int mode){
    pinMode(pin,mode);
}

void IOdriver_WritePin(){}

void IOdriver_Init(){
    int rightLow=2;
    int rightHigh=3;
    int middleLow=4;
    int middelHigh=5;
    int leftLow=6;
    int leftHigh=7;

    IOdriver_ToggePin(rightLow,OUTPUT);
    IOdriver_ToggePin(rightHigh,OUTPUT);
    IOdriver_ToggePin(middleLow,OUTPUT);
    IOdriver_ToggePin(middelHigh,OUTPUT);
    IOdriver_ToggePin(leftLow,OUTPUT);
    IOdriver_ToggePin(leftHigh,OUTPUT);
    
}