#include <Wire.h>

const int ledPin = 13;

void setup() {
  Wire.begin(9);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  delay(100);
}

void receiveEvent() {
  while (Wire.available()) {
    char c = Wire.read();
    if (c == '1') {
      digitalWrite(ledPin, HIGH);
      Serial.println("LED on Slave 2 turned ON");
    } else if (c == '0') {
      digitalWrite(ledPin, LOW);
      Serial.println("LED on Slave 2 turned OFF");
    }
  }
}
