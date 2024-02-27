#include <Servo.h>
Servo servoLeft;
Servo servoRight;
void setup() {
  // put your setup code here, to run once:
servoLeft.attach(13);
servoRight.attach(12);
servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
}
void loop() {
  // put your main code here, to run repeatedly:

}
