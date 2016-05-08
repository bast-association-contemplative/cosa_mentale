/* ----------------------------------------------------------------------------------------------------
 * COSA MENTALE, 2016
 * Update: 04/05/16
 *
 * Drawing with one hand and txo brains
 *
 * Code send Electrostimulation via TENS device with a relay
 * 
 * V1.0
 * Written by Bastien DIDIER
 * more info : http://one-billion-cat.com
 *
 * ----------------------------------------------------------------------------------------------------
 */ 

#define RELAY_PIN 3

void setup(){
  Serial.begin(115200);
  pinMode(RELAY_PIN, OUTPUT); 
  digitalWrite(RELAY_PIN, HIGH);
}

void loop(){}

void serialEvent() {
  while (Serial.available()) {
    char inChar = Serial.read();
    Serial.print("Received :");
    Serial.println(inChar);

    if( inChar == 'P' || inChar == '{' ){
      digitalWrite(RELAY_PIN, LOW);
      delay(50);
    } else {
      digitalWrite(RELAY_PIN, HIGH);
    }
    digitalWrite(RELAY_PIN, HIGH);
  }
}
