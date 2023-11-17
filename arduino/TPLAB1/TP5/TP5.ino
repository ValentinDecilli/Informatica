
#define boton1 8
#define boton2 9

#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);


int timecounter = 0;
int timecounter2 = 0;

unsigned long timertreshhold = 100;
unsigned long timertreshhold2 = 100;

int unidad = 0;
int decena = 0;


void setup()

{
  pinMode(boton1, INPUT);
  pinMode(boton2, INPUT);
  lcd.begin(16, 2);
}

void loop()
{

  lcd.setCursor(0, 0);
  lcd.print("cuenta:");
  lcd.setCursor(0, 1);
  lcd.print(decena);
  lcd.print(unidad);

  if (digitalRead(boton1) == 1)
  {
    aumentar();
  }

  if (digitalRead(boton2) == 1)
  {
    disminuir();
  }

}


void aumentar() {

  if (millis() > timecounter + timertreshhold) {
    unidad++;
    if (unidad > 9) {
      unidad = 0;
      decena++;
      if (decena > 9)
      {
        decena = 0;
      }
    }
  }
  timecounter = millis();
}



void disminuir()
{

  if (millis() > timecounter2 + timertreshhold2)
  {
    unidad--;
    if (unidad < 0)
    {
      unidad = 9;
      decena--;
      if (decena < 0)
      {
        decena = 9;
      }
    }
  }
  timecounter2 = millis();
}
