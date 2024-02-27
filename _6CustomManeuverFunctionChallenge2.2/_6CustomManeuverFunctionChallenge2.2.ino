#include <Servo.h>
Servo servoLeft;
Servo servoRight;
void maneuver(int speedLeft, int speedRight, int msTime){
  if(msTime ==-1){
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
  for(int triangle=0;triangle<3;triangle++){
    maneuver(200,200,5265);
    maneuver(200,0,1600);
  }
  maneuver(0,0,-1);
}
void loop() {
}
