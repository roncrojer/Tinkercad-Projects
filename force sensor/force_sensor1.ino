int fsrPin = A0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int force = analogRead(fsrPin);

  if (force > 100) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }

  delay(50);
}