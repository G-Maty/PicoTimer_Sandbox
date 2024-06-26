#include <Arduino.h>
#include <stdio.h>

#define TIME_SET 1000
#define LED 16
#define BT1 21
#define BT2 20
#define BT3 10
#define BT4 11


void setup() {  // 初期設定
  pinMode(LED_BUILTIN, OUTPUT);     // LED端子を出力に設定
  /*
  内部のプルダウンを使用
  プルダウンを使用しないと閉回路が形成されず、
  動作不安定になる
  */
  pinMode(BT1, INPUT_PULLDOWN);
  pinMode(BT2, INPUT_PULLDOWN);
  pinMode(BT3, INPUT_PULLDOWN);
  pinMode(BT4, INPUT_PULLDOWN);

}
void loop() {
  if(digitalRead(BT1) == 1){
    digitalWrite(LED_BUILTIN, 1);
  }else{
    digitalWrite(LED_BUILTIN, 0);
  }
  if(digitalRead(BT2) == 1){
    digitalWrite(LED_BUILTIN, 1);
  }else{
    digitalWrite(LED_BUILTIN, 0);
  }
  if(digitalRead(BT3) == 1){
    digitalWrite(LED_BUILTIN, 1);
  }else{
    digitalWrite(LED_BUILTIN, 0);
  }
  if(digitalRead(BT4) == 1){
    digitalWrite(LED_BUILTIN, 1);
  }else{
    digitalWrite(LED_BUILTIN, 0);
  }
}

