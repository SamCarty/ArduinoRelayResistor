int inputPotPin = A0;
int relayPins[] = { A1, A2, A3, A4, A5, 11, 12, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

int potVal;
int mappedVal;

void setup() {
  Serial.begin(9600);
  for (int pin: relayPins) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, HIGH);
  }
}

void loop() {
  potVal = analogRead(inputPotPin);
  mappedVal = map(potVal, 26, 160, 0, 16);

  if (mappedVal > 16) mappedVal = 16;
  else if (mappedVal < 0) mappedVal = 0;

  Serial.println("\nTHE FOLLOWING PINS ARE HIGH");
  for (int i = 16; i > mappedVal; i--) {
    digitalWrite(relayPins[i - 1], HIGH);
    Serial.print(i - 1);
    if (i > mappedVal + 1) Serial.print(", ");
  }

  Serial.println("\nTHE FOLLOWING PINS ARE LOW");
  for (int i = 0; i < mappedVal; i++) {
    digitalWrite(relayPins[i], LOW);
    Serial.print(i);
    if (i < mappedVal - 1) Serial.print(", ");
  }
  
  Serial.print("\nRAW: ");
  Serial.print(potVal);
  Serial.print(" => MAP: ");
  Serial.println(mappedVal);
  delay(100);
}
