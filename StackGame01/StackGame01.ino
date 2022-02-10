/*積み上げゲームをつくろう その1
   内容
   圧力をシリアルモニタに表示しよう
*/

const int forcePin = A0; // 圧力センサに接続されたpin
int force = 0; // 圧力センサが計測する力

// 初期設定:最初に1回だけ実行する
void setup() {
  Serial.begin(9600); // シリアルポートの設定
}

// ずっと繰り返し実行する
void loop() {
  force = analogRead(forcePin); // アナログピン0番から値を読み取る．
  Serial.println(force); // シリアルポートにforce出力する．printlnは改行あり
  delay(1000); // 1000ms（1秒）待つ
}
