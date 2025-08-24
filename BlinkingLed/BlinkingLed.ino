#define led_pin1 9
#define led_pin2 10
#define led_pin3 11

void setup() {
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  pinMode(led_pin3, OUTPUT);
}

void loop() {
  for (int i=0; i<5; i++) {
    digitalWrite(led_pin1, HIGH);
    delay(200);
    digitalWrite(led_pin1, LOW);
    delay(200);
  }

  for (int i=0; i<5; i++) {
    digitalWrite(led_pin2, HIGH);
    delay(200);
    digitalWrite(led_pin2, LOW);
    delay(200);
  }

  for (int i=0; i<5; i++) {
    digitalWrite(led_pin3, HIGH);
    delay(200);
    digitalWrite(led_pin3, LOW);
    delay(200);
  }
}
