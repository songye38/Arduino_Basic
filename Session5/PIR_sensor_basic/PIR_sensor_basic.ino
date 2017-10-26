int sensor = 0;

void setup() {
 Serial.begin(9600);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = digitalRead(6);
  if(sensor==HIGH)
  {
    //랜덤하게 
  }
  else 
  Serial.println(digitalRead(6));
  delay(100);

}
