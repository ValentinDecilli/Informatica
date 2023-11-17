
#include <LiquidCrystal.h>


#define boton2 3
LiquidCrystal lcd(8,9,4,5,6,7);


int timecounter = 0;
int timecounter2 = 0;
unsigned long timertreshhold = 100;
unsigned long timertreshhold2 = 100;

int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
String meses[] = {"ENE", "FEB", "MAR", "ABR", "MAY", "JUN", "JUL", "AGO", "SEP", "OCT", "NOV", "DIC"}; 
int segundos1 = 0;
int segundos2 = 0;
int minutos1 = 0;
int minutos2 = 0;
int horas1 = 0;
int horas2 = 0;
int x = 0;
int y = 0;
int anio = 2023;
int contdias = 0;
int flag = 1;


void setup()
{
  attachInterrupt(digitalPinToInterrupt(2), estado, RISING);

  pinMode(boton2, INPUT); 
  lcd.begin(16,2);
  Serial.begin(9600);
  
  cli();
  TCCR1A = 0;                       
  TCCR1B = 0;  
  OCR1A = 15624;
  TCCR1B |= (1 << WGM12);
  TCCR1B |= (1 << CS10);
  TCCR1B |= (1 << CS12);                                                   
  TIMSK1 |= (0 << OCIE1A);
  sei();

  Serial.begin(9600);
}


void loop()  
{

  imprimir();
  
  
  
  if(digitalRead(boton2) == HIGH)
  {
    clear();
  }
}


void imprimir(){
  
  lcd.setCursor(0,0);
  lcd.print(contdias);
  lcd.setCursor(3,0);
  lcd.print(meses[y]);
  lcd.setCursor(7,0);
  lcd.print(anio);
  lcd.setCursor(1,1);
  lcd.print(horas1);
  lcd.setCursor(0,1);
  lcd.print(horas2);
  lcd.setCursor(2,1);
  lcd.print(":");
  lcd.setCursor(4,1);
  lcd.print(minutos1);
  lcd.setCursor(3,1);
  lcd.print(minutos2);
  lcd.setCursor(5,1);
  lcd.print(":");
  lcd.setCursor(7,1);
  lcd.print(segundos1);
  lcd.setCursor(6,1);
  lcd.print(segundos2);
}

ISR(TIMER1_COMPA_vect)
{ 
  segundos1++;
    if(segundos1 > 9)
    {
      segundos1 = 0;
      segundos2++;
        if(segundos2 >= 6)
        {
          segundos2 = 0;
          minutos1++;
            if(minutos1 > 9)
            {
              minutos1 = 0;
              minutos2++;
                if(minutos2 >= 6)
                {
                  minutos2 = 0;
                  horas1++;
                    if(horas1 >= 4)
                    {
                      horas1 = 0;
                      horas2++;
                        if(horas2 = 2)
                        {
                          horas2 = 0;
                            dia();
                        }
                    }
                } 
            }
        }
    }  
}


void dia()
{
  switch(y)
  {
    case 0:
     contdias++;
    if(contdias > dias[0])
    {
      contdias = 0;
      y++;
    }
    
    case 1:
    contdias++;
    if(contdias > dias[1])
    {
      contdias = 0;
      y++;
    }  
   
    case 2:
    contdias++;
    if(contdias > dias[2])
    {
      contdias = 0;
      y++;
    }
    
    case 3:
    contdias++;
    if(contdias > dias[3])
    {
      contdias = 0;
      y++;
    }
    
    case 4:
    contdias++;
    if(contdias > dias[4])
    {
      contdias = 0;
      y++;
    }
    
    case 5:
    contdias++;
    if(contdias > dias[5])
    {
      contdias = 0;
      y++;
    }
    
    case 6:
    contdias++;
    if(contdias > dias[6])
    {
      contdias = 0;
      y++;
    }
    
    case 7:
    contdias++;
    if(contdias > dias[7])
    {
      contdias = 0;
      y++;
    }
    
    case 8:
    contdias++;
    if(contdias > dias[8])
    {
      contdias = 0;
      y++;
    }
    case 9:
    contdias++;
    if(contdias > dias[9])
    {
      contdias = 0;
      y++;
    }
    case 10:
    contdias++;
    if(contdias > dias[10])
    {
      contdias = 0;
      y++;
    }
    case 11:
    contdias++;
    if(contdias > dias[11])
    {
      contdias = 0;
      y = 0;
    anio++;
     
    }

  }
}

void estado()
{
    if (millis() > timecounter + timertreshhold) 
    { 
      if (flag == 1)
      {
        Serial.println("Estoy aca");
        flag = 0;
    TIMSK1 &= ~(1 << OCIE1A);
      }
      else if(flag == 0) 
      {
        flag = 1;
        TIMSK1 |= (1 << OCIE1A);
      }
    } 
     timecounter = millis(); 
}



void clear()
{
  if (millis() > timecounter2 + timertreshhold2) 
  {  
    segundos1 = 0;
    segundos2 = 0;
    minutos1 = 0;
    minutos2 = 0;
    horas1 = 0;
    horas2 = 0;
    x = 0;
    y = 0;
    anio = 2023;
    contdias = 0;

  }
  timecounter2 = millis();  
}
