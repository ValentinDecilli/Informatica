
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

#define temperatura A5

float valor;

void setup()
{

  lcd.begin(16, 2);
  pinMode(temperatura, INPUT);

}

void loop()
{

  temp();

  lcd.setCursor(0, 0);
  lcd.print("Temperatura:");
  lcd.setCursor(0, 1);
  lcd.print(valor);
  lcd.print(" C");
}


void temp()
{
  valor = map(analogRead(temperatura), 0, 1024, 0, 120);
}
