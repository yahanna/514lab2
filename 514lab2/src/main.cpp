#include <Arduino.h>

const int analogPin = D1; 
const float vcc = 3.3;   
const int adcResolution = 4095; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  int rawValue = analogRead(analogPin);
  float voltage = (rawValue * vcc) / adcResolution; 

  Serial.print("Raw Value: ");
  Serial.print(rawValue);
  Serial.print(" - Voltage: ");
  Serial.println(voltage);

  delay(1000);  
}
