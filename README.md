Description: Displays numbers 1–9 on a 3×3 LED grid, cycling through each number every 3 seconds. Useful for learning Arduino GPIO control and timing.

Technologies: C++ (Arduino), Arduino Uno or compatible board.

Setup/Usage:
    Connect 9 LEDs to digital pins 2–10 (anodes) and GND (cathodes through resistors).
    Upload the Arduino sketch (3x3led.ino) using the Arduino IDE.
    On power-up, the LEDs light up patterns for numbers 1–9, each shown for 3 seconds.

Sample Code with Comments

int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10}; // Arduino pins for the 9 LEDs
void setup() {
  for (int i = 0; i < 9; i++) {
    pinMode(ledPins[i], OUTPUT); // Set each pin as an output
  }
}
void loop() {
  // Example pattern for number 1 (only bottom-left LED on)
  digitalWrite(ledPins[6], HIGH);  // Turn on one LED (index 6)
  delay(3000);                     // Wait 3 seconds
  // (Remaining code would turn off the previous pattern and show the next number)
}
