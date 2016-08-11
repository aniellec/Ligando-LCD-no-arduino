#include<LiquidCrystal.h>
LiquidCrystal LCD(12,11,7,8,9,10);


void setup() {
  LCD.begin(16,2);
  LCD.clear();
  

}

void loop() {
  LCD.print("Oi ");
  delay(1500);
  

}