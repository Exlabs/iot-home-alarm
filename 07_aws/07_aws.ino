#include "aws.h"
#define ARMED_SIGNAL_PIN 2
#define ALARM_SIGNAL_PIN 5
#define SENSOR_INPUT_PIN 21

int previous_door_state = 0;


void setup() {
  pinMode(ARMED_SIGNAL_PIN, OUTPUT);
  pinMode(ALARM_SIGNAL_PIN, OUTPUT);
  pinMode(SENSOR_INPUT_PIN, INPUT);
  Serial.begin(9600);
  
  awsConnect();
}

void loop() {
  // Determine if doors are open
  int door_opened = digitalRead(SENSOR_INPUT_PIN);
  
  // Control alarm led
  digitalWrite(ALARM_SIGNAL_PIN, door_opened);  
  
  // Blink armed signal led
  digitalWrite(ARMED_SIGNAL_PIN, HIGH);
  delay(100);
  digitalWrite(ARMED_SIGNAL_PIN, LOW);
  delay(100);

  if (!previous_door_state && door_opened) {
  
     awsPublishMessage("Door opened");
  }

  previous_door_state = door_opened;
}