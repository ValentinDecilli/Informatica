
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

float a,b,c;
float x1, x2;
  
void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
 
}


void loop()
{  
  
  Serial.println("Ingrese el valor del componente a:");
    while(!Serial.available());
    a = Serial.parseFloat();
 
    Serial.println("Ingrese el valor del componente b:");
    while(!Serial.available());
    b = Serial.parseFloat();
      
    Serial.println("Ingrese el valor del componente c:");
    while(!Serial.available());
    c = Serial.parseFloat();
  
    lcd.clear();
 
  
    Serial.print("El valor de a es:");
    Serial.println(a);
    Serial.print("El valor de b es:");
    Serial.println(b);
    Serial.print("El valor de c es:");
    Serial.println(c);
     
    float discriminante = b*b - 4*a*c;
      
    if (discriminante >= 0)
    {    
      x1 = (-b + sqrt(discriminante)) / (2 * a);
      x2 = (-b - sqrt(discriminante)) / (2 * a);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("raicez:");
      lcd.setCursor(0,1);
      lcd.print("X1 ");
      lcd.setCursor(3,1);
      lcd.print(x1);
      lcd.setCursor(8,1);
      lcd.print("X2:");
      lcd.setCursor(10,1);
      lcd.print(x2);
      delay(10);               
    }
            
     else{
          Serial.println("Sus raices son imaginarias");
         }
  }

  
