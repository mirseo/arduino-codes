#define RED 7
#define GREEN 8
#define BLUE 6

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  // gold color
  analogWrite(RED, 230);
  analogWrite(GREEN, 180);
  analogWrite(BLUE, 0);
  delay(2000);

  // olive color
  analogWrite(RED, 150);
  analogWrite(GREEN, 160);
  analogWrite(BLUE, 0);
  delay(2000);
}
