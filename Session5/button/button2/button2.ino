//버튼을 한번씩 누를때마다 숫자를 한번씩 증가시키는 모드

int mode =0;
int sw = 8;
int led = 13;
int sw_status = 0; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sw, INPUT_PULLUP);
  pinMode(led, OUTPUT);

}
//이 프로그램은 바운싱 문제를 해결하지 못한다 그래서 해결방안 필요 
void loop() {
  if(digitalRead(sw)==LOW) //스위치가 눌리면 ..... 
  {
    if(sw_status==0){
      mode ++;
      Serial.println(mode);
    }
    sw_status = 1;
    delay(20);
  }
  else  //스위치가 안눌렸을 때 
  {
    sw_status = 0;
    delay(20);
  }
}
