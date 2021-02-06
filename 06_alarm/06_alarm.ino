
const int BUZZER = 2;
const int REED_SWITCH = 5;

void setup() {
  pinMode(REED_SWITCH, INPUT);
  pinMode(BUZZER, OUTPUT);
}


void loop() {
  int read_switch_state;
  int door_opened;
  while(1) {
    read_switch_state = digitalRead(REED_SWITCH);
    door_opened = abs(read_switch_state-1);
    digitalWrite(BUZZER, door_opened);
    delay(100);
  }
}
