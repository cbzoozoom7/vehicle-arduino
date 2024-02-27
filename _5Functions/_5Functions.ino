void function() {
  Serial.println("During function call.");
  delay(1000);
}
void setup() {
  Serial.begin(9600);
  Serial.println("Before function call.");
  delay(1000);
  function();
  Serial.println("After funtion call");
  delay(1000);
}
void loop() {
}
