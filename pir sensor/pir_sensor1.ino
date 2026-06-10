const int pirPin = 2;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (digitalRead(pirPin) == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH); // Motion detected
  } else {
    digitalWrite(LED_BUILTIN, LOW);  // No motion
  }
}