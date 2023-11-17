

#include <LiquidCrystal.h>


#define red     A0
#define green   A1
#define boton   8

int i, contador;
int flag = 0;

int timecounter = 0;
int timecounter2 = 0;
unsigned long timertreshhold = 100;
unsigned long timertreshhold2 = 100;


LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

byte arriba[8] = {
  B11111,
  B10001,
  B10001,
  B10001,
  B11111,
  B00100,
  B00100,
  B01110
};

byte abajo[8] = {
  B10101,
  B10101,
  B00100,
  B01010,
  B10001,
  B10001,
  B10001,
  B10001
};


void setup() {

  lcd.begin(16, 2);
  lcd.createChar(7, arriba);
  lcd.createChar(8, abajo);
  pinMode(boton, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);

  cli();
  TCCR1A = 0;
  TCCR1B = 0;
  OCR1A = 15624;
  TCCR1B |= (1 << WGM12);
  TCCR1B |= (1 << CS10);
  TCCR1B |= (1 << CS12);
  TIMSK1 |= (0 << OCIE1A);
  sei();

}

void loop()
{


  if (digitalRead(boton) == 1)
  {
    alto();
  }

  if (flag)
  {
    peaton();
  }

  else
  {
    nopeaton();
  }


}


void alto()
{
  if (millis() > timecounter + timertreshhold)
  {
    flag = 1;
  }
  timecounter = millis();
}


void nopeaton()
{
  analogWrite(red, 255);
  analogWrite(green, 0);
}

void peaton()
{

  TIMSK1 |= (1 << OCIE1A);

  for (i = 0 ; i <= 15 ; i++)
  {
    lcd.setCursor(i, 0);
    lcd.write(7);
    lcd.setCursor(i, 1);
    lcd.write(8);
    delay(150);
    lcd.clear();
  }
  i = 0;

  analogWrite(green, 255);
  analogWrite(red, 0);

  if (contador > 5)
  {
    flag = 0;
    TIMSK1 |= (0 << OCIE1A);
    contador = 0;
  }
}


ISR(TIMER1_COMPA_vect)
{
  contador++;
}
