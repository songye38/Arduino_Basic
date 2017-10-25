
void setup() {

  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  if(Serial.available() >0)
  {
    char rx_data = Serial.read(); 
    if(rx_data=='A') digitalWrite(13, HIGH);
    else if(rx_data=='B') digitalWrite(13,LOW);
  }
}
