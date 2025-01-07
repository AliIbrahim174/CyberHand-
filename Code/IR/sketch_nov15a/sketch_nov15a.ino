#include <Servo.h>
#include <IRremote.h>
IRrecv IR(3);
Servo servo1; //thumb 
Servo sevro2; // the smallest
Servo sevro3; // b middel and thumb 
Servo sevro4; // b middel and smallest 
Servo sevro5; // middle 

void setup() {
  IR.enableIRIn();
  Serial.begin(9600);

} 

void loop() {
   if(IR.decode()) {
    Serial.println(IR.decodedIRData.decodedRawData, HEX);
    delay(1500);
    IR.resume();
  
}

}
