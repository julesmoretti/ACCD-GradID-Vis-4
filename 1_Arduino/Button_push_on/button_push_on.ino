const int buttonPin = 2;
const int LED = LED_BUILTIN;
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT); // Set button pin as input
  pinMode(LED, OUTPUT); // Set LED as output
}

void loop() {
  buttonState = digitalRead(buttonPin); // Read the state of the button
  if (buttonState == HIGH) { // If button is pressed
    digitalWrite(LED, HIGH); // set the LED to ON
  } else { // else if released
    digitalWrite(LED, LOW); // set the LED to OFF
  }
}