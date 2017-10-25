

#include <Servo.h>
Servo myservo;
int pos =0;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(0);
  delay(500);
  myservo.write(90);
  delay(500);
  myservo.write(180);
  delay(500);
}
