#include <Arduino.h>
void setup() {  // 初期設定
  pinMode(LED_BUILTIN, OUTPUT);     // LED端子を出力に設定
}
void loop() {   // メイン処理（繰り返し）
  digitalWrite(LED_BUILTIN, HIGH);  // LEDを点灯
  delay(500);                       // 0.5秒待つ
  digitalWrite(LED_BUILTIN, LOW);   // LEDを消灯
  delay(500);                       // 0.5秒待つ
}