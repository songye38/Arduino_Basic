int sw = 8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sw, INPUT_PULLUP);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sw) ==LOW) Serial.println("버튼이 눌렸습니다");
  else  Serial.println("버튼이 아직 안눌렸습니다");
  delay(1000);
//  digitalWrite(13, !digitalRead(sw));
//  delay(100);

}
