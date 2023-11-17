
#define digito1   8
#define digito1   9
#define temp      A0

byte numeros[] = {B1111111, B00001100, B10110110, B10011110, B11001100, B11011010, B11111010, B00001110, B11111110, B11001110};
byte cifra[] = {B00000001, B00000010};

int valor, digito, marca;
int temperatura1, temperatura2 = 0;
long temperatura;
char letra;

void setup()
{

  DDRD = B11111111;
  DDRB = B000011;

}



void loop()
{
  temperatura = map(analogRead(temp), 0, 1023, 0, 120);

  temper();

  actualizar_temp(temperatura1, 0);
  delay(5);
  actualizar_temp(temperatura2, 1);
  delay(5);

}


void temper()
{
  if (temperatura <= 9)
  {
    temperatura2 = 0;
    letra = 'a';
  }

  if (temperatura >= 10)
  {
    temperatura2 = 1;
    letra = 'b';
  }

  if (temperatura >= 20)
  {
    temperatura2 = 2;
    letra = 'c';
  }

  if (temperatura >= 30)
  {
    temperatura2 = 3;
    letra = 'd';
  }

  if (temperatura >= 40)
  {
    temperatura2 = 4;
    letra = 'e';
  }

  switch (letra)
  {
    case 'a':
      marca = 0;
      break;
    case 'b':
      marca = 10;
      break;
    case 'c':
      marca = 20;
      break;
    case 'd':
      marca = 30;
      break;
    case 'e':
      marca = 40;
      break;

  }

  for (int i = 0 ; i < 10 ; i++)
  {
    if (temperatura == marca + i)
    {
      temperatura1 = i;
    }
  }
}


void actualizar_temp(int numero, int digito)
{

  PORTB = cifra[digito];
  PORTD = numeros[numero];

}
