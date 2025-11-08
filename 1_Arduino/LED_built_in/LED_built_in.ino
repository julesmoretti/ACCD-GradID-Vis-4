void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Set built-in LED as an output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn the LED on
  delay(1000); // wait 1 second (1000 miliseconds)
  digitalWrite(LED_BUILTIN, LOW); // Turn the LED off
  delay(1000); // wait 1 second (1000 miliseconds)
}