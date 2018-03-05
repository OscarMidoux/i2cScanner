#include "i2cScan.h"   
#include <Wire.h>
#include <arduino.h>
     
void setup(){
    Wire.begin();
    SerialScan.begin(9600);
    //while (!SerialScan);             // Leonardo: wait for serial monitor
}
 
void loop(){
   i2cScan();
   delay(5000);           // wait 5 seconds for next scan
}

