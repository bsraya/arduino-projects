#include "thunder.h"
#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

void setup() {
  Serial.begin(115200);

  matrix.loadSequence(thunder);
  matrix.begin();
  matrix.play(true);
}

void loop() {
  delay(5000);
  Serial.println(millis());
}