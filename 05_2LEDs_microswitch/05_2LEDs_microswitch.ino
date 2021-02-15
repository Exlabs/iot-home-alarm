
void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(21, INPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  int button_state = digitalRead(21);
  digitalWrite(4, button_state);
  delay(100);
  digitalWrite(2, LOW);
  delay(100);
}
