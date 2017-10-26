
/*
 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe

 */

#include <Stepper.h>

const int stepsPerRevolution = 2048;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(13);  //1분에 10바퀴 도는 속도 rpm 스테퍼 모터는 최대 돌 수 있는 속도가 있다 
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {

  myStepper.step(2048);  //2048이 한바퀴 돌았을 때의 스텝 1024는 반바퀴 2048는 한 바퀴 
  delay(500);
  myStepper.step(-2048);
  delay(500);
}

