/*積み上げゲームをつくろう その3
   内容
   閾値を超えると，LEDが点灯する
   ルール:容器にビー玉を交互に入れて，LEDが光ったら負け
*/

const int ledPin = 9; // LEDを9ピンに接続
const int forcePin = A0; // 圧力センサをアナログ0ピンに接続
int force = 0; // 圧力センサが計測する力
int limit; // LEDが点灯する時の圧力センサの値

// 初期設定:最初に1回だけ実行する
void setup() {
  Serial.begin(9600); // シリアルポートの設定
  pinMode(ledPin, OUTPUT); // LEDを出力に設定
  limit = random(180,230); // 180~229の間でランダムに決定しLEDが点灯する圧力を変える
}

// ずっと繰り返し実行する
void loop() {
  force = analogRead(forcePin); // アナログピン0番から値を読み取る．
  Serial.println(force); // シリアルポートにforce出力する．printlnは改行あり
  if(force > limit){
    digitalWrite(ledPin, HIGH); // LEDを点灯
  }else{
    digitalWrite(ledPin, LOW); // LEDを消灯
  }
  delay(10); // 10ms（00.1秒）待つ
}
