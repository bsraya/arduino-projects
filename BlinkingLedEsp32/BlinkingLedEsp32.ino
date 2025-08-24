const int ledPin = 2;

void setup() {
  // Initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
}

// This function runs over and over again in a loop.
void loop() {
  digitalWrite(ledPin, HIGH);   // Turn the LED on
  delay(2000);                  // Wait for 1 second
  digitalWrite(ledPin, LOW);    // Turn the LED off
  delay(2000);                  // Wait for 1 second
}