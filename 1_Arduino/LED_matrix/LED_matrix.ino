// library natively in the Arduino IDE
#include "Arduino_LED_Matrix.h"

// establish a matrix element
ArduinoLEDMatrix matrix;

void setup() {
  matrix.begin(); // setup a matrix
}

// establish a data store for the matrix and sets them to off
// change internal values to 1 for on
uint8_t frame[8][12] = {
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};

void loop() {
  frame[2][2] = 1; // set the 3rd row and 3rd LED to on
  matrix.renderBitmap(frame, 8, 12); // writes to the matrix the new state
  delay(1000); // wait 1 second (1000 miliseconds)
  frame[2][2] = 0;  // set the 3rd row and 3rd LED to off
  matrix.renderBitmap(frame, 8, 12); // writes to the matrix the new state
  delay(1000); // wait 1 second (1000 miliseconds)
}