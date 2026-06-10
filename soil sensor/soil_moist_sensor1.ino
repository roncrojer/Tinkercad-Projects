int soilPin = A0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int value = analogRead(soilPin);

  if (value < 500) {      // Wet soil
    digitalWrite(LED_BUILTIN, HIGH);
  } else {                // Dry soil
    digitalWrite(LED_BUILTIN, LOW);
  }

  delay(100);
}