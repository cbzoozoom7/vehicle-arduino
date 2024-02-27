#include <Servo.h>
const int ledPin =2;
Servo servoLeft;
Servo servoRight;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  servoLeft.attach(13);
  servoRight.attach(12);
  servoRight.writeMicroseconds(1300);
  servoLeft.writeMicroseconds(1700);
  for(int servoSpeed = 200; servoSpeed > 0; servoSpeed-=1) {
    servoLeft.writeMicroseconds(1500 + servoSpeed);
    delay(10);
  }
  servoLeft.detach();
  servoRight.detach();
}

void loop() {
  // put your main code here, to run repeatedly:


}
