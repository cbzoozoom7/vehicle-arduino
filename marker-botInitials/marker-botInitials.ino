#include <Servo.h>
Servo servoLeft;
Servo servoRight;
void maneuver(int speedLeft, int speedRight, int msTime) {
  if (msTime == -1) {
    servoLeft.detach();
    servoRight.detach();
  }
  servoLeft.writeMicroseconds(1500 + speedLeft);
  servoRight.writeMicroseconds(1500 - speedRight);
  delay(msTime);
}
void setup() {
  servoLeft.attach(13);
  servoRight.attach(12);
  maneuver(30, 200, 3000);
  maneuver(50, 200, 3000);
  maneuver(60, 200, 3000);
  maneuver(50, 200, 3000);
  maneuver(30, 200, 3000);
  maneuver(200, -200, 1200);
  maneuver(200, 200, 1800);
  maneuver(-200, 200, 900);
  maneuver(200, 200, 5700);
  maneuver(200, -200, 700);
  for (int bHumps = 0; bHumps < 2; bHumps++) {
    maneuver(200, 200, 700);
    maneuver(200, 100, 300);
    maneuver(200, 200, 700);
    maneuver(200,-200,1000);
  }
  maneuver(0, 0, -1);
}
void loop() {
}
