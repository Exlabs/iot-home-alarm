
void setup() {
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(21, INPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  int button_state = digitalRead(21);
  int door_opened = abs(1 - button_state);
  digitalWrite(5, door_opened);  
  delay(100);
  digitalWrite(2, LOW);
  delay(100);
}
