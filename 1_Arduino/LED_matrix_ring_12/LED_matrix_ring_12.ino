#include <Adafruit_NeoPixel.h>

#define PIN 6          // Pin connected to the NeoPixel ring data line
#define NUMPIXELS 12   // 12-LED ring
#define BRIGHTNESS 50  // Set brightness (0-255, keep low to reduce power draw)

// Initialize the NeoPixel ring
Adafruit_NeoPixel ring = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  ring.begin();               // Initialize the NeoPixel ring
  ring.setBrightness(BRIGHTNESS); // Set brightness level
  ring.show();                // Clear the ring (all pixels off)
}

void loop() {
  // Color wipe with red
  colorWipe(ring.Color(255, 0, 0), 50); // Red, 50ms delay per pixel
  delay(500); // Pause for 0.5 seconds

  // Color wipe with green
  colorWipe(ring.Color(0, 255, 0), 50); // Green, 50ms delay per pixel
  delay(500);

  // Color wipe with blue
  colorWipe(ring.Color(0, 0, 255), 50); // Blue, 50ms delay per pixel
  delay(500);
}

// Function to fill the ring with a color, one pixel at a time (clockwise)
void colorWipe(uint32_t color, uint8_t wait) {
  for (int i = 0; i < NUMPIXELS; i++) {
    ring.setPixelColor(i, color); // Set pixel color
    ring.show();                  // Update the ring
    delay(wait);                  // Delay for smooth animation
  }
}