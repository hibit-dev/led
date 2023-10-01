// -------------------------------------------------
// Copyright (c) 2023 HiBit <https://www.hibit.dev>
// -------------------------------------------------

#define LED_PIN 3

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  increaseLight(LED_PIN);
  decreaseLight(LED_PIN);
}

void increaseLight(int ledPin)
{
  for (int i = 0; i <= 255; i++) {
    analogWrite(ledPin, i);

    delay(10);
  }
}

void decreaseLight(int ledPin)
{
  for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);

    delay(10);
  }
}
