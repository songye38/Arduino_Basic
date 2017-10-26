//버튼을 한번씩 누를때마다 숫자를 한번씩 증가시키는 모드

int mode =0;
int sw = 8;
int led = 13;
int sw_status = 0; 
int blue = 9;
int green = 10;
int red = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sw, INPUT_PULLUP);
  pinMode(led, OUTPUT);

}
//다시 처음으로 돌아가는 모드 추가 여기에 나중에 부저를 추가하면 더 좋다 
void loop() {
  if(digitalRead(sw)==LOW) //스위치가 눌리면 ..... 
  {
    if(sw_status==0){
      mode ++;
      if(mode>3) mode=1;
      Serial.println(mode);
      if(mode==1) {
        red_out();
        tone(7,1800,50);
      }
      else if(mode==2)
      {
        green_out();
        tone(7,2000,50);
      }
      else if(mode==3)
      {
        blue_out();
        tone(7,2200,50);
      }
    }
    sw_status = 1;
    delay(20);
  }
  else  //스위치가 안눌렸을 때 
  {
    sw_status = 0;
    delay(20);
    all_out();
  }
}

void red_out()
{
  for(int i=0; i<=255; i++){
    analogWrite(red,i);
  }
}
void green_out()
{
  for(int i=0; i<=255; i++){
    analogWrite(green,i);
  }
}
void blue_out()
{
  for(int i=0; i<=255; i++){
    analogWrite(blue,i);
  }
}
void all_out()
{
  analogWrite(red,0);
  analogWrite(green,0);
  analogWrite(blue,0);
}

