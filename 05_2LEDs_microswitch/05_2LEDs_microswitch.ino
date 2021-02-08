
void setup() {
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(21, INPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  int button_state = digitalRead(21);
  digitalWrite(5, button_state);
  delay(100);
  digitalWrite(2, LOW);
  delay(100);
}
