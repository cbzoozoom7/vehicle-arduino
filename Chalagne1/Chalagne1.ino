#include <Servo.h>
Servo servoLeft;
Servo servoRight;
void setup() {
  // put your setup code here, to run once:
servoLeft.attach(13);
servoRight.attach(12);
servoLeft.writeMicroseconds(1700);
servoRight.writeMicroseconds(1300);
delay(4000);
servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
delay(2000);
servoLeft.writeMicroseconds(1300);
servoRight.writeMicroseconds(1700);
delay(4000);
servoLeft.detach();
servoRight.detach();
}
void loop() {
  // put your main code here, to run repeatedly:

}
