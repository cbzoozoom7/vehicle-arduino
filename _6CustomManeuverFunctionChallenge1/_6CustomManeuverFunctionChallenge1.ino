#include <Servo.h>
Servo servoLeft;
Servo servoRight;
void maneuver(int speedLeft, int speedRight, int msTime) {
  if(msTime ==-1) {
    servoLeft.detach();
    servoRight.detach();
  }
  servoLeft.writeMicroseconds(1500+speedLeft);
  servoRight.writeMicroseconds(1500-speedRight);
  delay(msTime);
}
void setup() {
  servoLeft.attach(13);
  servoRight.attach(12);
  for(int ramping=200;ramping>=0;ramping--) {
    maneuver(ramping,200,15);
  }
  for(int ramping=0;ramping<=200;ramping++){
    maneuver(ramping,200,15);
  }
  maneuver(0,0,-1);
}
void loop() {
}
