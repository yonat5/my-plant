#include <LiquidCrystal.h>
int nemmiktari = 12;
int rs = 12, en= 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd (rs, en, d4, d5, d6, d7);

void setup() {
 lcd.begin(16, 2);

}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("nem miktari");
  lcd.setCursor(0, 1);
  lcd.print(nemmiktari);
  lcd.print(" birim");
}
