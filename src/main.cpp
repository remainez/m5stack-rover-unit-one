#include <M5Core2.h>

#include "GoPlus2.h"

GoPlus2 goPlus;

void Servo()
{
  // 前進
  goPlus.Servo_write_angle(SERVO_NUM0, 0);
}

void setup() {
  // 本体初期化
  M5.begin();
  Wire.begin(21,22);
  Serial.begin(115200);

  // GoPlus初期化
  goPlus.begin();

  M5.Lcd.setTextSize(6);
  M5.Lcd.println("GOGO!");
}

void loop() {
  Servo();
}