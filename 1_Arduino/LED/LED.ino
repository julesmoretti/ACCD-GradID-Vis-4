const int LED = 13; // External LED connected to pin 13

void setup() {
  pinMode(LED, OUTPUT); // Set built-in LED as an output
}

void loop() {
  digitalWrite(LED, HIGH); // Turn the LED on
  delay(1000); // Wait for a second
  digitalWrite(LED, LOW); // Turn the LED off
  delay(1000); // Wait for a second
}