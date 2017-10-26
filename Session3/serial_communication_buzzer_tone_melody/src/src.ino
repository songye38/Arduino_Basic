#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
   if(Serial.available()>0){  //아두이노가 pc에게 보낸 데이터가 있다면 
      int rx_data = Serial.read();
      if(rx_data=='1') tone(8, NOTE_C7, 200);
      else if(rx_data=='2') tone(8, NOTE_D7, 300);
      else if(rx_data=='3') tone(8, NOTE_E7, 300);
      else if(rx_data=='4') tone(8, NOTE_F7, 300);
      else if(rx_data=='5') tone(8, NOTE_G7, 300);
      else if(rx_data=='6') tone(8, NOTE_A7, 300);
      else if(rx_data=='7') tone(8, NOTE_B7, 300);
      else if(rx_data=='8') tone(8, NOTE_C8, 300);
      delay(200);  
   }
}
