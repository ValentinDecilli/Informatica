
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

int i,j,k = 0;

void setup() {
 
  lcd.begin(16, 2);
}

void loop() {
  
  char texto[] = {' ','U','n','i','v','e','r','s','i','d','a','d',' ','T','e','c','n','o','l','o','g','i','c','a',' ','N','a','c','i','o','n','a','l',' ','F','a','c','u','l','t','a','d',' ','R','e','g','i','o','n','a','l',' ','S','a','n',' ','F','r','a','n','c','i','s','c','o',' '};
      
    for(i = 0 ; i < 50 ; i++)
    {
      lcd.clear();
      for(j = 0 ; j <= 16 ; j++)
      {
    lcd.setCursor(j,0);
      lcd.print(texto[i+j]);      
      }
      delay(50);
    }

}
