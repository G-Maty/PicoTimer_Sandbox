#include <Arduino.h>
#include <stdio.h>

#define TIME_SET 1000
#define STBUTTON_PIN 2
#define CDOWN_PIN 16
#define CUP_PIN 18

void timer_test(){
  int i;
  for(i=0;i<TIME_SET;++i){

  }
  printf("1s");
  digitalWrite(LED_BUILTIN,1);
}

void setup() {  // 初期設定
  pinMode(LED_BUILTIN, OUTPUT);     // LED端子を出力に設定
  pinMode(STBUTTON_PIN, INPUT);
  pinMode(CUP_PIN, INPUT);
  pinMode(CDOWN_PIN, INPUT);

}
void loop() {
  /*   // メイン処理（繰り返し）
  digitalWrite(LED_BUILTIN, HIGH);  // LEDを点灯
  delay(500);                       // 0.5秒待つ
  digitalWrite(LED_BUILTIN, LOW);   // LEDを消灯
  delay(500);
  */
  if(digitalRead(STBUTTON_PIN) == 1){
    digitalWrite(LED_BUILTIN, 1);
  }else{
    digitalWrite(LED_BUILTIN, 0);
  }

  if(digitalRead(CUP_PIN) == 0){
    digitalWrite(LED_BUILTIN, 1);
  }else{
    digitalWrite(LED_BUILTIN, 0);
  }

  if(digitalRead(CDOWN_PIN) == 0){
    digitalWrite(LED_BUILTIN, 1);
  }else{
    digitalWrite(LED_BUILTIN, 0);
  }
}

