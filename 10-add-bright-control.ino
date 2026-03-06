#define YELLOW 7
#define RED 8
#define BLUE 9
#define BUTTON_1 3
#define BUTTON_2 4
#define BRIGHT_P A1

void setup() {
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(BUTTON_1, INPUT);
  pinMode(BUTTON_2, INPUT);
  Serial.begin(9600);
}

void loop(){
  int value_1 = digitalRead(BUTTON_1);
  int value_2 = digitalRead(BUTTON_2);
  int bb = analogRead(BRIGHT_P);

  Serial.print(value_1);
  Serial.print(", ");
  Serial.print(value_2);
  Serial.print(", ");
  Serial.print(bb);
  Serial.print("\n");

  if(value_1 > 0) {
    digitalWrite(YELLOW, HIGH);
    digitalWrite(RED, LOW);
  } else if (value_2 > 0) {
    digitalWrite(YELLOW, LOW);
    digitalWrite(RED, HIGH);    
  }

  if(bb >= 500) {
    digitalWrite(BLUE, HIGH);
  } else {
    digitalWrite(BLUE, LOW);
  }
}
