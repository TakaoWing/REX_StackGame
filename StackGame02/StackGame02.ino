/*積み上げゲームをつくろう その2
   内容
   圧力センサの値をLEDで表す
*/

const int ledPin = 13; // LEDを13ピンに接続
const int forcePin = A0; // 圧力センサをアナログ0ピンに接続
int force = 0; // 圧力センサが計測する力

// 初期設定:最初に1回だけ実行する
void setup() {
  Serial.begin(9600); // シリアルポートの設定
  pinMode(ledPin, OUTPUT); // LEDを出力に設定
}

// ずっと繰り返し実行する
void loop() {
  force = analogRead(forcePin); // アナログピン0番から値を読み取る．
  Serial.println(force); // シリアルポートにforce出力する．printlnは改行あり
  analogWrite(ledPin, force/4); // powerをアナログ出力としてLEDを点灯
  delay(1000); // 1000ms（1秒）待つ
}
