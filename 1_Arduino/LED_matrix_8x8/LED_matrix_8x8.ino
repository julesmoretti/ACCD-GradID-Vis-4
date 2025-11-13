#include <Adafruit_NeoPixel.h>

#define PIN 6          // Pin connected to the NeoPixel matrix data line
#define NUMPIXELS 64   // 8x8 matrix has 64 pixels
#define BRIGHTNESS 50  // Set brightness (0-255, keep low to reduce power draw)

// Initialize the NeoPixel matrix
Adafruit_NeoPixel matrix = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  matrix.begin();              // Initialize the NeoPixel matrix
  matrix.setBrightness(BRIGHTNESS); // Set brightness level
  matrix.show();               // Clear the matrix (all pixels off)
}

void loop() {
  // Color wipe with red
  colorWipe(matrix.Color(255, 0, 0), 50); // Red, 50ms delay per pixel
  delay(500); // Pause for 0.5 seconds

  // Color wipe with green
  colorWipe(matrix.Color(0, 255, 0), 50); // Green, 50ms delay per pixel
  delay(500);

  // Color wipe with blue
  colorWipe(matrix.Color(0, 0, 255), 50); // Blue, 50ms delay per pixel
  delay(500);
}

// Function to fill the matrix with a color, one pixel at a time
void colorWipe(uint32_t color, uint8_t wait) {
  for (int i = 0; i < NUMPIXELS; i++) {
    matrix.setPixelColor(i, color); // Set pixel color
    matrix.show();                  // Update the matrix
    delay(wait);                    // Delay for smooth animation
  }
}