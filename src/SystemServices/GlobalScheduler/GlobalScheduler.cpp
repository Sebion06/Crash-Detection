#include "GlobalScheduler.h"
long timer = 0;
void TK_1(){

}

void TK_2(){
    
}

void TK_3(){

}

void MainTaskScheduler(){
    if(micros() - timer > 500){ //TK_2
        Serial.println("asdasd");
        timer = micros();
    }
    if(micros() - timer > 1000){ //TK_3
        Serial.println("asdasd");
        timer = micros();
    }
    if(micros() - timer > 5000){ //TK_1
        Serial.println("asdasd");
        timer = micros();
    }
}

void TK_init()
{
    MainTaskScheduler();
}