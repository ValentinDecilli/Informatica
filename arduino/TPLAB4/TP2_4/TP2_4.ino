
struct Temperaturas
{
  float temp;
  bool botones;
};

int counter;
int i,j;
int timecounter1 = 0;
int timecounter2 = 0;
int timecounter3 = 0;
int timecounter4 = 0;
unsigned long timertreshhold1 = 150;
unsigned long timertreshhold2 = 150;
unsigned long timertreshhold3 = 150;
unsigned long timertreshhold4 = 150;

const int lamp[] = {11, 10, 9, 8};
const int numbotones[] = {5, 4, 3, 2};
const int numsensor[] = {A0, A1, A2, A3};

bool flag1 = 0;
bool flag2 = 0;
bool flag3 = 0;
bool flag4 = 0;

Temperaturas t1[4];
Temperaturas t2[4];



void setup()
{
  cli();
  TCCR1A = 0;                       
  TCCR1B = 0;  
  OCR1A = 15624;
  TCCR1B |= (1 << WGM12);
  TCCR1B |= (1 << CS10);
  TCCR1B |= (1 << CS12);                                                   
  TIMSK1 |= (1 << OCIE1A);
  sei();
  
  Serial.begin(9600);
  
  for (int k = 0; k < 4; k++)
  {
    pinMode(numbotones[k], INPUT);
    pinMode(lamp[k], OUTPUT);
  }
  
}

void loop()
{
  
  estado();

}                      
                            
  

void imptemp()
{   
  for (i = 0; i < 4; i++)
  {
    t1[i].temp = analogRead(numsensor[i]);  
  
    switch (i)
    {
    case 0:
      Serial.print("En el cuarto uno hay una temperatura de: ");
      Serial.println(t1[i].temp);
      break;
    case 1:
      Serial.print("En el cuarto dos hay una temperatura de: ");
      Serial.println(t1[i].temp);
      break;
    case 2:
      Serial.print("En el cuarto tres hay una temperatura de: ");
      Serial.println(t1[i].temp);
      break;
    case 3:
      Serial.print("En el cuarto cuatro hay una temperatura de: ");
      Serial.println(t1[i].temp);
      break;
    }
  } 
}

                            
      

int estado()
{
  
  for(j = 0 ; j < 4 ; j++)
  {
    t2[j].botones = digitalRead(numbotones[j]); 
  }     


    if(t2[0].botones == HIGH)
    {
      if (millis() > timecounter1 + timertreshhold1)
      {      
        if(flag1)
        {
          Serial.println("Se apago la lampara uno");        
          digitalWrite(lamp[0],LOW);
          flag1 = 0;
        }
        else
        {
          Serial.println("Se encendio la lampara uno");
          digitalWrite(lamp[0],HIGH);
          flag1 = 1;
        }
      }
      timecounter1 = millis(); 
    }  

  
  
  if(t2[1].botones == HIGH)
  {
    if (millis() > timecounter2 + timertreshhold2)
    {      
    if(flag2)
      {
        Serial.println("Se apago la lampara dos");        
        digitalWrite(lamp[1],LOW);          
        flag2 = 0;
      }
      else
      {
        Serial.println("Se encendio la lampara dos");
        digitalWrite(lamp[1],HIGH);
        flag2 = 1;
      }
      
    }
    timecounter2 = millis(); 
  } 
  
   
  if(t2[2].botones == HIGH)
  {
    if (millis() > timecounter3 + timertreshhold3)
    {      
    if(flag3)
      {
        Serial.println("Se apago la lampara tres");        
        digitalWrite(lamp[2],LOW);
        flag3 = 0;
      }
      else
      {
        Serial.println("Se encendio la lampara tres");
        digitalWrite(lamp[2],HIGH);
        flag3 = 1;
      }
      
    }
    timecounter2 = millis(); 
  } 
  
  
  
  if(t2[3].botones == HIGH)
  {
    if (millis() > timecounter4 + timertreshhold4)
    {
      
     if(flag4)
      {
        Serial.println("Se apago la lampara cuatro");        
        digitalWrite(lamp[3],LOW);
        flag4 = 0;
      }
      else
      {
        Serial.println("Se encendio la lampara cuatro");
        digitalWrite(lamp[3],HIGH);
        flag4 = 1;
      }
      
    }
    timecounter2 = millis(); 
  } 
}                        
                            
                            
  


  ISR(TIMER1_COMPA_vect)
  { 
    counter++;

    if(counter %10 == 0)
    {
      imptemp();
    }
  }           
      
