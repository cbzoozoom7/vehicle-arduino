#include <Servo.h>
Servo servoLeft;
Servo servoRight;
void stopServos() {
  Serial.println("Stopping!");
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}
void forward(int time) {
  Serial.println("Going forward...");
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(time);
  stopServos();
}
void backward(int time) {
  Serial.println("Going backward...");
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(time);
  stopServos();
}
void turnLeft(int time) {
  Serial.println("Turning left...");
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1300);
  delay(time);
  stopServos();
}
void turnRight(int time) {
  Serial.println("Turning right...");
  servoRight.writeMicroseconds(1500);
  servoLeft.writeMicroseconds(1700);
  delay(time);
  stopServos();
}
void setup() {
  Serial.begin(9600);
  Serial.println("Attaching Servos...");
  servoLeft.attach(13);
  servoRight.attach(12);
  Serial.println("Servos Attached!");
  forward(2000);
  delay(2000);
  turnLeft(600);
  delay(600);
  turnRight(600);
  delay(600);
  backward(2000);
  delay(2000);
  Serial.println("Done!");
  Serial.println("Detaching servos...");
  servoLeft.detach();
  servoRight.detach();
  Serial.println("Servos Detached!");
}
void loop() {

}
