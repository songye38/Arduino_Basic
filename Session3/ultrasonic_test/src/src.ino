int trig = 2;
int echo = 3;


int _time = 0;
int distance =0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig, OUTPUT); 
  pinMode(echo , INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  _time = pulseIn(echo, HIGH);
  distance = _time/58;

  Serial.print("time : ");
  Serial.print(_time);
  Serial.print(" distance : ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(100);

}
