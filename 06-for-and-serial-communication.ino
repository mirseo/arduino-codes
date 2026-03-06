void setup(){
  Serial.begin(9600);
}

void loop() {
  for(int VALUE = 0; VALUE <= 10; VALUE++){
    Serial.print("Hello World\n");
    Serial.print(VALUE);
    delay(1000);
  }
}
