// /* Get all possible data from MPU6050
//  * Accelerometer values are given as multiple of the gravity [1g = 9.81 m/s²]
//  * Gyro values are given in deg/s
//  * Angles are given in degrees
//  * Note that X and Y are tilt angles and not pitch/roll.
//  */
// #include <Arduino.h>
// #include <Wire.h>
// #include <MPU6050_light.h>

//  MPU6050 mpu(Wire);

// long timer = 0;

// void printValues(float valueX, float valueY, float valueZ)
// {
//     Serial.print("X: ");
//     if (valueX >= 0) 
//         Serial.print((String)" " + valueX); //(Serial.print(mpu.getGyroX());
//     else
//         Serial.print((String)valueX);

//     Serial.print("\tY: ");
//     if (valueY >= 0) 
//         Serial.print((String)" " + valueY); //Serial.print(mpu.getGyroY());
//     else
//         Serial.print((String)valueY);
//     Serial.print("\tZ: ");

//     if (valueZ >= 0) 
//         Serial.print((String)" " + valueZ); //Serial.print(mpu.getGyroY());
//     else
//         Serial.print((String)valueZ);
// }

// void GetAccelerationData(){
//     mpu.update();
//     if(millis() - timer > 100){
//         printValues(mpu.getAccX(),mpu.getAccY(),mpu.getAccZ());
//         //printValues(mpu.getGyroX(),mpu.getGyroY(),mpu.getGyroZ());
//         Serial.println("");
//         timer = millis();
//     }
// }

//  void DriverInit(){
//    Serial.begin(9600);
//    Wire.begin();
  
//    byte status = mpu.begin();
//    Serial.print(F("MPU6050 status: "));
//    Serial.println(status);
//    while(status!=0){ } // stop everything if could not connect to MPU6050
  
//     Serial.println(F("Calculating offsets, do not move MPU6050"));
//     delay(1000);
//     mpu.calcOffsets(true,true); // gyro and accelero
//     Serial.println("Done!\n");
// }

// void MainFunction()
// {
//     DriverInit();
// }