#include <Servo.h>  //サーボのライブラリを使う準備
Servo servo;        //プログラム上でサーボを使うための入れ物

//Arduinoを起動したら一度だけセットアップする
void setup() {
  servo.attach(9);  //サーボの信号線がArduinoのどのピンに繋がっているか指定
}

//Arduinoが起動している間ループする
void loop() {
  servo.write(0);
  delay(1000);
  servo.write(90);
  delay(1000);
  servo.write(180);
  delay(1000);
  servo.write(90);
  delay(1000);
}
