int sensor_value = 0;
float volt =0;
void setup() {
  Serial.begin(9600);  
  pinMode(13, OUTPUT);
}

void loop() {
  sensor_value = analogRead(A0); 
  volt = sensor_value * 5.0 / 1023;
  Serial.print("CDS: ");
  Serial.print(sensor_value);
  Serial.print(" volt: ");
  Serial.print(volt);
  Serial.println("v");

  if(sensor_value<500) digitalWrite(13,HIGH);
  else digitalWrite(13,LOW);
  delay(100);
}
