#include "GlobalScheduler.h"
#include "../../MPU6050Driver/MPU6050Driver.h"

long timer = 0;
void TK_1(){

}

void TK_2(){
    GetAccelerationData();

}

void TK_3(){

}

void MainTaskScheduler(){
    
    if(micros() - timer > 500){ //TK_2
        TK_2();
        timer = micros();
    }
    // if(micros() - timer > 1000){ //TK_3
    //     Serial.println("test");
    //     timer = micros();
    // }
    // if(micros() - timer > 5000){ //TK_1
    //     Serial.println("test");
    //     timer = micros();
    // }
}

void TK_init()
{
    MainFunction();
}