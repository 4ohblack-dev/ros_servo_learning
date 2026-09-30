#include <Arduino.h>
#include<ESP32Servo.h>

Servo servo;

void setup(){
  Serial.begin(115200);
  servo.attach(13);
  servo.write(90);
}

void loop(){

}