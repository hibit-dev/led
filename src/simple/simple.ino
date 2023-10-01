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
  digitalWrite(LED_PIN, HIGH); // Turn the LED on
  delay(1000);                 // Wait for one second
  
  digitalWrite(LED_PIN, LOW); // Turn the LED off
  delay(1000);                // Wait for one second
}

