/*  
 *  Humidity sensor to water on plants
 */

// pins to use
const int buzzer = 11;
const int sensor = A0;

// When we'll consider the land dry enought to water it
const int checkpoint = 700;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensor);

  if (sensorValue > checkpoint) {
    // makes a screechy sound to alert us
    tone(buzzer, 40, 400);
  } else {
    // makes a light sound just so we know it's reding and bellow the checkpoint
    tone(buzzer, 3000, 100);
  }

  // log
  Serial.print("Checkpoint: ");
  Serial.print(checkpoint);
  Serial.print(" Sensor: ");
  Serial.println(sensorValue);

  // halt and go
  delay(1000);
}
