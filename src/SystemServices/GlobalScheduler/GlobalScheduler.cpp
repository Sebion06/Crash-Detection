#include "GlobalScheduler.h"
#include "../../MPU6050Driver/MPU6050Driver.h"

long tk1_timer = 0;
long tk2_timer = 0;
long tk3_timer = 0;

void TK_1(){

}

void TK_2(){
    GetAccelerationData();

}

void TK_3(){

}

void MainTaskScheduler(){
    unsigned long current_timer = micros();
    if(current_timer - tk2_timer > 500){ //TK_2
        TK_2();
        tk2_timer=current_timer;
    }
    if(current_timer - tk3_timer > 1000){ //TK_3
        TK_3();
        tk3_timer=current_timer;
    }
    if(current_timer - tk1_timer > 5000){ //TK_1
        TK_1();
        tk1_timer=current_timer;
    }
}

void TK_init()
{
    MainFunction();
}