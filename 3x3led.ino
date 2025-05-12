int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

byte numbers[9][9] = {
  // 1
  {0, 1, 0,
   0, 1, 0,
   0, 1, 0},

  // 2
  {1, 1, 0,
   0, 1, 0,
   0, 1, 1},

  // 3
  {1, 1, 1,
   0, 1, 1,
   1, 1, 1},

  // 4
  {1, 0, 1,
   1, 1, 1,
   0, 0, 1},

  // 5
  {1, 1, 1,
   1, 1, 0,
   1, 1, 1},

  // 6
  {1, 1, 0,
   1, 1, 1,
   1, 1, 1},

  // 7
  {1, 1, 1,
   0, 1, 0,
   1, 0, 0},

  // 8
  {1, 1, 1,
   0, 1, 0,
   1, 1, 1},

  // 9
  {1, 1, 1,
   1, 1, 1,
   0, 0, 1}
};

void setup() {
  for (int i = 0; i < 9; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int n = 0; n < 9; n++) {
    for (int i = 0; i < 9; i++) {
      digitalWrite(ledPins[i], numbers[n][i] ? HIGH : LOW);
    }
    delay(3000);  // increased to 1 second to make digits visible
  }
}
