
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

float modulo,angulo;

void setup() {
 
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop()
{

  Serial.println("Ingrese el valor del modulo: ");  
  while(!Serial.available());
  float modulo = Serial.parseFloat();
  
  Serial.println("Ingrese el valor del angulo: ");  
  while(!Serial.available());
  float angulo = Serial.parseFloat();
  
  lcd.clear();
      
  Serial.println("El valor del modulo es: ");
  Serial.println(modulo);
  
  Serial.println("El valor del angulo es: ");
  Serial.println(angulo);
  
  float x = cos(angulo) * modulo;
  
  float y = sin(angulo) * modulo;
  
  lcd.setCursor(0,0);
  lcd.print("x");
  lcd.setCursor(2,0);
  lcd.print("=");
  lcd.setCursor(3,0);
  lcd.println(x);
  
  lcd.setCursor(0,1);
  lcd.print("y");
  lcd.setCursor(2,1);
  lcd.print("=");
  lcd.setCursor(3,1);
  lcd.println(y); 
  
}
