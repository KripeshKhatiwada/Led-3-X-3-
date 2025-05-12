# 3x3 LED Grid Number Display Timer (Arduino Project)

This Arduino project displays the numbers 1 through 9 on a 3x3 LED grid. The LEDs light up in a pattern that represents each number, cycling every 3 seconds. Once 9 is displayed, it loops back to 1.

## 🛠 What You Need

- Arduino Uno (or compatible board)
- 9 LEDs
- 9 resistors (220–330 ohms recommended)
- Breadboard and jumper wires
- USB cable for power

## ⚡ Circuit Setup

- Connect each LED anode (long leg) to **Arduino digital pins 2–10**.
- Connect each LED cathode (short leg) to **GND through a resistor**.
- You can combine ground wires into a shared line connected to any GND pin on the Arduino.

## 🧠 How It Works

The sketch uses an array of binary patterns to represent numbers 1 through 9 on a 3x3 grid of LEDs. Each number is shown for 3 seconds before moving to the next.

### 💡 Code Snippet

```cpp
int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

void setup() {
  for (int i = 0; i < 9; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Display numbers using LED patterns (see full code)
}
