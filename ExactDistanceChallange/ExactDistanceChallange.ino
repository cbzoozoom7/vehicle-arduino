#include <Servo.h>
Servo servoLeft;
Servo servoRight;
void setup() {
  // put your setup code here, to run once:
servoLeft.attach(13);
servoRight.attach(12);
servoLeft.writeMicroseconds(1700);
servoRight.writeMicroseconds(1300);
delay(3429);
servoRight.writeMicroseconds(1500);
delay(990);
servoRight.writeMicroseconds(1300);
delay(5053);
servoLeft.detach();
servoRight.detach();
}
void loop() {
  // put your main code here, to run repeatedly:

}
