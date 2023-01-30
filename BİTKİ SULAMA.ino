#include <LiquidCrystal.h>
int sensorPin = 1;
int veri;
int rs = 12, en= 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd (rs, en, d4, d5, d6, d7);

void setup() {
 lcd.begin(16, 2);
 pinMode(sensorPin, INPUT);
}

void loop() {
  veri = analogRead(sensorPin);
 
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("nem miktari");
  lcd.setCursor(0, 1);
  lcd.print(veri);
  lcd.print(" birim");
}
