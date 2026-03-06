#define YELLOW 7
#define RED 8
#define BLUE 9

void setup () {
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  Serial.begin(9600);
}

void loop (){
  if(Serial.available() > 0) {
    String readData = Serial.readStringUntil('\n');;

    if(readData == "r" | readData == "red") {
      digitalWrite(YELLOW, LOW);
      digitalWrite(RED, HIGH);
      digitalWrite(BLUE, LOW);
      Serial.print("\nread : ");
      Serial.print(readData);
    } else if (readData == "y" | readData == "yellow") {
      digitalWrite(YELLOW, HIGH);
      digitalWrite(RED, LOW);
      digitalWrite(BLUE, LOW);     
      Serial.print("\nread : ");
      Serial.print(readData);
    } else if (readData == "b" | readData == "blue") {
      digitalWrite(YELLOW, LOW);
      digitalWrite(RED, LOW);
      digitalWrite(BLUE, HIGH);   
      Serial.print("\nread : ");
      Serial.print(readData);  
    }
  }
}
