/* Get all possible data from MPU6050
 * Accelerometer values are given as multiple of the gravity [1g = 9.81 m/s²]
 * Gyro values are given in deg/s
 * Angles are given in degrees
 * Note that X and Y are tilt angles and not pitch/roll.
 */

#include <MPU6050Driver.h>

MPU6050 mpu(Wire);

void printValues(float valueX, float valueY, float valueZ)
{
    Serial.print("X: ");
    if (valueX >= 0) 
        Serial.print((String)" " + valueX); //(Serial.print(mpu.getGyroX());
    else
        Serial.print((String)valueX);

    Serial.print("\tY: ");
    if (valueY >= 0) 
        Serial.print((String)" " + valueY); //Serial.print(mpu.getGyroY());
    else
        Serial.print((String)valueY);
    Serial.print("\tZ: ");

    if (valueZ >= 0) 
        Serial.print((String)" " + valueZ); //Serial.print(mpu.getGyroY());
    else
        Serial.print((String)valueZ);
}

void GetAccelerationData(float *acc_data){
    mpu.update();
    acc_data[0] = mpu.getAccX();
    acc_data[1] = mpu.getAccY();
    acc_data[2] = mpu.getAccZ();
    // printValues(mpu.getAccX(),mpu.getAccY(),mpu.getAccZ());
    // //printValues(mpu.getGyroX(),mpu.getGyroY(),mpu.getGyroZ());
    // Serial.println("");
    
}

 void MPU6050Driver_Init(){
   Serial.begin(9600);
   Wire.begin();
  
   byte status = mpu.begin();
   Serial.print(F("MPU6050 status: "));
   Serial.println(status);
   while(status!=0){ } // stop everything if could not connect to MPU6050
  
    Serial.println(F("Calculating offsets, do not move MPU6050"));
    delay(1000);
    mpu.calcOffsets(true,true); // gyro and accelero
    Serial.println( "Done!\n");
}

void MPU6050Driver_MainFunction(float *acc_array)
{
    GetAccelerationData(acc_array);
    
}