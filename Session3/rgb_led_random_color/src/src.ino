int blue = 9;
int green = 10;
int red = 11;
int _speed = 10;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(red, random(100,200));
  analogWrite(green, random(100));
  analogWrite(blue, random(100));
  delay(1000);
}
