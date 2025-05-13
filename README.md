# 3×3 LED Grid Number Display (Arduino Project)

This project displays numbers 1 to 9 on a 3×3 LED grid using Arduino. Each number is shown as a light pattern that updates every 3 seconds in a loop.

## 📦 Components
- Arduino UNO (or compatible board)
- 9 LEDs
- 9 resistors (220Ω)
- Breadboard & jumper wires

## 🔌 Wiring
- Connect LED anodes to Arduino pins 2–10
- Connect cathodes to GND through resistors

## 🚀 Usage
1. Open `3x3led.ino` in the Arduino IDE
2. Upload to your board
3. Observe the LED patterns

## 🧠 How It Works
Each digit (1–9) is represented by a pattern on the 3×3 grid. The program uses an array to store the patterns and displays them one by one using delays.

