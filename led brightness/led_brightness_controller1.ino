int potPin = A0;
int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);   // 0 to 1023
  int brightness = map(potValue, 0, 1023, 0, 255);

  analogWrite(ledPin, brightness);

  delay(10);
}