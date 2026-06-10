int tempPin = A0;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  int value = analogRead(tempPin);

  if (value > 170) {   // adjust if needed
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }

  delay(100);
}