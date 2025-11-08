const int potPin = A2;

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud
}

void loop() {
  int potValue = analogRead(potPin); // Read the value from the potentiometer
  Serial.println(potValue); // Print the value to the serial monitor
  delay(100); // Wait for 100ms
}