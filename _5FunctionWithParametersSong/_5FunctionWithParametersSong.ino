const int pezoPin =2;
void pezoTone(int pitchInHertz,int lengthInMs) {
  Serial.print("Frequency = ");
  Serial.print(pitchInHertz);
  Serial.println(" Hz");
  tone(pezoPin,pitchInHertz,lengthInMs);
  delay(lengthInMs +50);
}
void setup() {
  Serial.begin(9600);
  pezoTone(440,750);
  pezoTone(440,250);
  pezoTone(493,1000);
  pezoTone(440,1000);
  pezoTone(587,1000);
  pezoTone(523,2000);
  pezoTone(440,750);
  pezoTone(440,250);
  pezoTone(493,1000);
  pezoTone(440,1000);
  pezoTone(629,1000);
  pezoTone(587,2000);
  pezoTone(6424,5000);
}
void loop() {
}
