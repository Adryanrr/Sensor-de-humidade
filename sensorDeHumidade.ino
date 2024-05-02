#include <LiquidCrystal.h>

int umi = 0;

LiquidCrystal lcd_1(0, 1, 2, 3, 4, 5);

void setup(){
  pinMode(A0, INPUT);
  lcd_1.begin(16, 2); 
}

void loop(){
  umi = map(analogRead(A0), 0, 1023, 0, 180);
  lcd_1.setCursor(0, 0);
  lcd_1.noAutoscroll();
  if (umi <= 45) {
    lcd_1.clear();
    lcd_1.print("Baixa humidade");
  } else {
    lcd_1.clear();
    lcd_1.print("Humidade adequada");
  }
  delay(10);
}