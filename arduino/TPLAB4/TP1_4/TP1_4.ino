struct Temperaturas
{
  float temp;
};

const int numsensor[] = {A0, A1, A2, A3};
Temperaturas t1[4];

void setup()
{

  Serial.begin(9600);
}

void loop()
{
  for (int i = 0; i < 4; i++)
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
  delay(10000); 
}
       
