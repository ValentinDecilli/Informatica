
#define boton1 2
#define boton2 3
#define boton3 4
#define boton4 5

#define lamp1 8
#define lamp2 9
#define lamp3 10
#define lamp4 11

int timecounter1 = 0;
int timecounter2 = 0;
int timecounter3 = 0;
int timecounter4 = 0;
unsigned long timertreshhold1 = 150;
unsigned long timertreshhold2 = 150;
unsigned long timertreshhold3 = 150;
unsigned long timertreshhold4 = 150;

int flag1, flag2, flag3, flag4 = 0;

int aviso = 1;

bool lamps[4] = {0, 0, 0, 0};
bool *plamps[4];

int i;


void setup()
{
  Serial.begin(9600);

  for (i = 0 ; i <= 3 ; i++)
  {
    plamps[i] = &lamps[i];
  }

}


void loop()
{

  estado();

  if (aviso == 1)
  {
    aviso = 0;
    Serial.println("Estados de las lamparas: ");
    Serial.print(lamps[3]);
    Serial.print("-");
    Serial.print(lamps[2]);
    Serial.print("-");
    Serial.print(lamps[1]);
    Serial.print("-");
    Serial.println(lamps[0]);
  }

}



int estado()
{
  if (digitalRead(boton1) == HIGH)
  {
    if (millis() > timecounter1 + timertreshhold1)
    {
      if (flag1)
      {
        *plamps[0] = 1;
        flag1 = 0;
      }
      else
      {
        *plamps[0] = 0;
        flag1 = 1;
      }
      aviso = 1;
    }
    digitalWrite(lamp1, lamps[0]);
    timecounter1 = millis();
  }



  if (digitalRead(boton2) == HIGH)
  {
    if (millis() > timecounter2 + timertreshhold2)
    {
      if (flag2)
      {
        *plamps[1] = 1;
        flag2 = 0;
      }
      else
      {
        *plamps[1] = 0;
        flag2 = 1;
      }
      aviso = 1;
    }
    digitalWrite(lamp2, lamps[1]);
    timecounter2 = millis();
  }



  if (digitalRead(boton3) == HIGH)
  {
    if (millis() > timecounter3 + timertreshhold3)
    {
      if (flag3)
      {
        *plamps[2] = 1;
        flag3 = 0;
      }
      else
      {
        *plamps[2] = 0;
        flag3 = 1;
      }
      aviso = 1;
    }
    digitalWrite(lamp3, lamps[2]);
    timecounter2 = millis();
  }



  if (digitalRead(boton4) == HIGH)
  {
    if (millis() > timecounter4 + timertreshhold4)
    {
      if (flag4)
      {
        *plamps[3] = 1;
        flag4 = 0;
      }
      else
      {
        *plamps[3] = 0;
        flag4 = 1;
      }
      aviso = 1;
    }
    digitalWrite(lamp4, lamps[3]);
    timecounter2 = millis();
  }
}
