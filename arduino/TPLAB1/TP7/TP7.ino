
#include <LiquidCrystal.h>
#include <Keypad.h>

#define boton A5

LiquidCrystal lcd(0, 1, 2, 3, 4, 5);

byte f[4] = {13, 12, 11, 10};
byte c[4] = {9, 8, 7, 6};

int i, j;

int timecounter = 0;

unsigned long timertreshhold = 100;


char keys[4][4] = {{'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

Keypad keypad = Keypad(makeKeymap(keys), f, c, 4, 4);


void setup()
{

  pinMode(boton, INPUT);
  lcd.begin(16, 2);
}

void loop()
{
  lcd.cursor();

  if (digitalRead(boton) == 1)
  {
    limpiar();
  }

  char c = keypad.getKey();

  if (c)
  {
    if (i < 15)
    {

      lcd.print(c);
      i++;
    }
    else
    {
      j++;
      i = 0;
      if (j == 2)
      {
        j = 0;
      }
    }
  }
}

void limpiar() {

  if (millis() > timecounter + timertreshhold) {

    lcd.clear();
    i = 0;
    j = 0;

  }
  timecounter = millis();
}
