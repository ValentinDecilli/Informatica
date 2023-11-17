

#define boton1 11
#define boton2 12

int timecounter = 0;
int timecounter2 = 0;

unsigned long timertreshhold = 100;
unsigned long timertreshhold2 = 100; 

int unidad = 0;
int decena = 0;

byte numeros[] = {B1111111,B00001100,B10110110,B10011110,B11001100,B11011010,B11111010,B00001110,B11111110,B11001110};
byte cifra[] = {B00000010,B00000100};

int i;

void setup(){
  
  DDRD = B11111110;
  DDRB = B000110;
  
  pinMode(boton1,INPUT);
  pinMode(boton2,INPUT);  
}


void loop(){
  
  actualizar_numero(unidad, 0);
  delay(10);
  actualizar_numero(decena, 1); 
  delay(10);
  
  if (digitalRead(boton1) == 1){  
    aumentar();  
  }
  
   if (digitalRead(boton2) == 1){  
    disminuir();  
  }
}



void actualizar_numero(int valor,int lugar){
  
  PORTD = numeros[valor];
  PORTB = cifra[lugar];

}
  

void aumentar(){
  
    if (millis() > timecounter + timertreshhold){
    unidad++;
      if(unidad > 9){
      unidad = 0;
      decena++; 
        if(decena > 9)
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
      if(unidad < 0)
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
