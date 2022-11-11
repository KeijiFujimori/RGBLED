int led_pins[]={3,4,5};                       // RGBLEDライトのピンを定義、0をRed、1をGreen、2をBlue

void setup() {
  int i;                                      // 変数iを定義
  for(i=0;i<3;i++){
  pinMode(led_pins[i],OUTPUT);                // ピン出力
  }
}

void loop() {                                 // LOWでLEDを光らせる
  digitalWrite(led_pins[0],LOW);              // 赤色に光る
  digitalWrite(led_pins[1],HIGH);
  digitalWrite(led_pins[2],HIGH);
  delay(1000);
  
  digitalWrite(led_pins[0],HIGH);             // 緑色に光る
  digitalWrite(led_pins[1],LOW);
  digitalWrite(led_pins[2],HIGH);
  delay(1000);

  digitalWrite(led_pins[0],HIGH);             // 青色に光る
  digitalWrite(led_pins[1],HIGH);
  digitalWrite(led_pins[2],LOW);
  delay(1000);

  digitalWrite(led_pins[0],LOW);              // 黄色に光る
  digitalWrite(led_pins[1],LOW);
  digitalWrite(led_pins[2],HIGH);
  delay(1000);

  digitalWrite(led_pins[0],LOW);              // マゼンタ色に光る
  digitalWrite(led_pins[1],HIGH);
  digitalWrite(led_pins[2],LOW);
  delay(1000);

  digitalWrite(led_pins[0],LOW);              // シアン色に光る
  digitalWrite(led_pins[1],HIGH);
  digitalWrite(led_pins[2],LOW);
  delay(1000);

  digitalWrite(led_pins[0],LOW);              // 白色に光る
  digitalWrite(led_pins[1],LOW);
  digitalWrite(led_pins[2],LOW);
  delay(1000);

  digitalWrite(led_pins[0],HIGH);             // 光らない
  digitalWrite(led_pins[1],HIGH);
  digitalWrite(led_pins[2],HIGH);
  delay(1000);
  
}
