#include <stdint.h>
#include <Arduino.h>
#include <MPU6050Driver.h>
#include <IODriver.h>
#include <SystemStateManager.h>
#include <CrashDetectionAlgorithm.h>
#include <CrashReactionManager.h>

extern long tk1_timer;
extern long tk2_timer;
extern long tk3_timer;
void TK_1();
void TK_2();
void TK_3();
void MainTaskScheduler();
void TK_init();