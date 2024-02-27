const int pezoPin =2;
void pezoTone(int pitchInHertz) {
  Serial.print("Frequency = ");
  Serial.println(pitchInHertz);
  tone(pezoPin,pitchInHertz,1000);
  delay(1000);
}
void setup() {
  Serial.begin(9600);
  pezoTone(3500);
  Serial.println("Playing High Pich tone...");
  delay(1000);
  pezoTone(2000);
  Serial.println("Playing lower pitch tone...");
}
void loop() {
}
