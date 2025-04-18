// 定義電位器和LED的接腳
const int potentiometerPin = A0; // 電位器接到模擬輸入 A0
const int ledPin = 9;           // LED 接到數位輸出 9 (PWM)

void setup() {
  // 初始化 LED 接腳為輸出模式
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // 讀取電位器的值 (範圍 0-1023)
  int potentiometerValue = analogRead(potentiometerPin);

  // 將電位器的值映射到 PWM 範圍 (0-255)
  int ledBrightness = map(potentiometerValue, 0, 1023, 0, 255);

  // 設定 LED 的亮度
  analogWrite(ledPin, ledBrightness);

  // 短暫延遲以穩定輸出
  delay(10);
}