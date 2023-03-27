#define RELAY_PIN 18  //A4

void setup() {
  // initialize digital pin RELAY_PIN as an output.
  pinMode(RELAY_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RELAY_PIN, HIGH);   // turn the RELAY on 
  delay(10000);                     // wait for a second
  digitalWrite(RELAY_PIN, LOW);    // turn the RELAY off
  delay(5000);                     // wait for a second
}
