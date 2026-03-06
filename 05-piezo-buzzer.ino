#define BUZZER 3

void setup() {
}

void loop() {
  // tone 1
  tone(BUZZER, 261.6);
  delay(1000);
  noTone(BUZZER);
  
  tone(BUZZER, 293.6648);
  delay(1000);
  noTone(BUZZER);
}
