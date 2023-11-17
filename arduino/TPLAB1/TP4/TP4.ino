
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 4, 5, 6, 7, 8);


void setup()
{
lcd.begin(16,2);  
}


void loop()
{
  lcd.setCursor(0, 0);
  lcd.print("Ingenieria");
  lcd.setCursor(0, 1);
  lcd.print("Electronica");
}
