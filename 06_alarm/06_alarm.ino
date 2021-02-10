
const int LED_OUTPUT = 2;
const int BUZZER_OUTPUT = 4;
const int REED_INPUT = 21;


void setup() {
  pinMode(LED_OUTPUT, OUTPUT);
  pinMode(BUZZER_OUTPUT, OUTPUT);
  pinMode(REED_INPUT, INPUT);
}

void loop() {
  digitalWrite(LED_OUTPUT, HIGH);
  int button_state = digitalRead(REED_INPUT);
  int door_opened = abs(1 - button_state);
  digitalWrite(BUZZER_OUTPUT, door_opened);  
  delay(100);
  digitalWrite(LED_OUTPUT, LOW);
  delay(100);
}
