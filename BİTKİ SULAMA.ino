#include <LiquidCrystal.h>
#include <Servo.h>
int servoPin = 10;
int hareket;
Servo motor;
int sensorPin = 1;
int veri;
int rs = 12, en= 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd (rs, en, d4, d5, d6, d7);

void setup() {
 lcd.begin(16, 2);
 pinMode(sensorPin, INPUT);
 motor.attach(servoPin);
}

void loop() {
  veri = analogRead(sensorPin);
  if(veri < 700){
    motor.write(180);
    delay(5000);
    if(veri > 750);{
      motor.write(180);
    }
  }
  else{
    motor.write(0);
  }
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("nem miktari");
  lcd.setCursor(0, 1);
  lcd.print(veri);
  lcd.print(" birim");
}
