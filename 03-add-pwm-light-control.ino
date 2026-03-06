#define RED 7
#define GREEN 8
#define BLUE 6

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

// Change lights power use PWM
void loop() {
  analogWrite(GREEN, 0);
  delay(1000);
  analogWrite(GREEN, 50);
  delay(1000);
  analogWrite(GREEN, 100);
  delay(1000);
  analogWrite(GREEN, 150);
  delay(1000);
  analogWrite(GREEN, 200);
  delay(1000);
  // max-pwm
  analogWrite(GREEN, 255);
}
