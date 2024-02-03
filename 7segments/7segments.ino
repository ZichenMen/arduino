// Define the binary patterns for each number on a 7-segment display
int numbers[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

// Define the pins for the segments of the 7-segment display
int pin[7] = {2, 3, 4, 5, 6, 7, 8}; // Example pin numbers

void setup() {
  // Set each pin as an output
  for (int a = 0; a < 7; a++) {
    pinMode(pin[a], OUTPUT);
  }
}

void loop() {
  // Loop through each number pattern
  for (int number = 0; number < 10; number++) {
    // Set the segments for the current number
    for (int segment = 0; segment < 7; segment++) {
      digitalWrite(pin[segment], numbers[number][segment]);
    }
    // Wait for half a second
    delay(500);
  }
}
