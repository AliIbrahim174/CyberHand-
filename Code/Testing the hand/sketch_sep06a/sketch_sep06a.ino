#include <Servo.h>

Servo sevro1;
Servo sevro2;
Servo sevro3;
Servo sevro4;
Servo sevro5;

void setup() {
  sevro1.attach(3);
  sevro3.attach(5);
  sevro4.attach(7);
  
  
  Serial.begin(9600);

} 

void loop() {
  sevro1.write(180);
  sevro2.write(180);
  delay (2000);

  sevro3.write(180);
  delay (2000);
  sevro4.write(0);


  sevro1.write(0);
  sevro2.write(0);
   delay (2000);

  sevro3.write(0);
  delay(8000);
  sevro4.write(180);
  exit (0);

  
}
