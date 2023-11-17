
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

float x,y;

void setup() {
 
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop()
{

  Serial.println("Ingrese el valor de la componente x: ");  
  while(!Serial.available());
  float x = Serial.parseFloat();
  
  Serial.println("Ingrese el valor de la componente y: ");  
  while(!Serial.available());
  float y = Serial.parseFloat();
  
  lcd.clear();
      
  Serial.println("El valor de x es: ");
  Serial.println(x);
  
  Serial.println("El valor de y es: ");
  Serial.println(y);
  
  float modulo = sqrt(x*x + y*y); 
  
  float angulo = atan2(y, x) * 180.0 / PI;
  
  lcd.setCursor(0,0);
  lcd.print("modulo");
  lcd.setCursor(6,0);
  lcd.print("=");
  lcd.setCursor(7,0);
  lcd.println(modulo);
  
  lcd.setCursor(0,1);
  lcd.print("angulo");
  lcd.setCursor(6,1);
  lcd.print("=");
  lcd.setCursor(7,1);
  lcd.println(angulo); 
  
}
