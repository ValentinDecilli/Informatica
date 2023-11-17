int unidad = 0;
int valor;
int cifra = 0;
int timecounter=0;
int timetreshhold=150;
int timecounter1=0;
int timetreshhold1=150;
int flag = 0;

bool flagmode = 0;

int unidades[]= {0,0,0,0};

void setup() {
  
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2), Modonormal , RISING);
  attachInterrupt(digitalPinToInterrupt(3), Modosetup , RISING);
  // Establesco como entrada o salida los pines de los distintos puertos

  DDRB = B00001111;   // 0 REPRESENTA ENTRADA    1 REPRESENTA SALIDA       // PUERTO B  del pin 13 al pin 8
  DDRC = B00001111;                                                        // PUERTO C de A0 a A5
  DDRD = B11110000;   // PUERTO D  del pin 7 al pin 0
  
  cli(); /* funcion para detener las interrupciones*/
  TCCR1A=0; /* es un registro de entrada y salida*/
  TCCR1B=0; /* pone en 0 todas las variables del registro*/
  OCR1A=15624; /* este es el resultado de una operacion la cual me va a permitir obtener 1 Hz en la salida*/
  TCCR1B |= (1 << WGM12); /* se asigna el mode de trabajo en CTC*/
  TCCR1B |= (1 << CS10); /* se dividen los 15624 hZ por el valor que le sigue a los CS*/
  TCCR1B |= (1 << CS12); /* para aumentar o disminuir la velocidad del timer se cambiaron los valores de los CS*/
  TIMSK1 = (0 << OCIE1A); /* habilita o desabilita la interrupcion segun se coloque un 0 o un 1*/
  sei(); /* vulve a activar las interrupciones*/
}

void loop() {

  for (int i=3 ; i >= 0 ; i--){
    actualizar_numero(unidades[i], i);
    delay (5);    
  }
}

  void actualizar_numero (int valor, int cifra) {

  // array con la que voy a declarar cada numero en bytes

  byte numeroB[] = {B00000011, B00000000, B00000101, B00000100, B00000110, B00000110, B00000111, B00000000, B00000111, B00000110}; // Se selecciona que segmento se debe prender para cada                   
                                                                                                                                   // digito, en esta varialbe se colocan los pines conectados
                                                                                                                                   // al puerto B, utilizando los ultimos 4 numeros                                                                                                                               
  byte numeroD[] = {B11110000, B01100000, B10110000, B11110000, B01100000, B11010000, B11010000, B01110000, B11110000, B01110000};
  byte cifraC[] = {B00000001, B00000010, B00000100, B00001000};

  PORTB = numeroB[valor];
  PORTD = numeroD[valor];
  PORTC = cifraC [cifra];

}

ISR(TIMER1_COMPA_vect) {
  
      unidades[3]++;
    if (unidades[3] > 9) {
      unidades[3] = 0;
      unidades[2]++;
      if (unidades[2] > 5) {
        unidades[2] = 0,
        unidades[1]++;
        if (unidades[1] > 9) {
          unidades[1] = 0;
          unidades[0]++;
          if (unidades[0] > 5) unidades[0] = 0;
        }
      }
   } 
 }

 void Modonormal(){

 Serial.println("Modonormal");

 if (millis() > timecounter + timetreshhold){


  switch (flag) {

    case 0:
      TIMSK1 = (1 << OCIE1A);
      flag = 1;
      break; 
        
    case 1:
      TIMSK1 = (0 << OCIE1A);
      flag = 0;
      break;
      
   }
   
         if( millis() - timecounter < 400) {             
                                               
    unidades[0]= 0;
    unidades[1]= 0;
    unidades[2]= 0;
    unidades[3]= 0;
  

      }
    }
              timecounter = millis();
}








void Modosetup(){  

  if (millis() > timecounter1 + timetreshhold1){
    
     Serial.println("Modosetup");
   
  DDRB = B00001111;
  DDRC = B00001111;                                                       
  DDRD = B11110000; 
  
   for (int i=3 ; i >= 0 ; i--){
   actualizar_numero1(unidades[i], i);
   delay (5);  
        }
          timecounter1 = millis();   
  }
}
  void actualizar_numero1 (int valor, int cifra) {

  byte numeroB[] = {B00000011, B00000000, B00000101, B00000100, B00000110, B00000110, B00000111, B00000000, B00000111, B00000110};                                                                                                                              
  byte numeroD[] = {B11110000, B01100000, B10110000, B11110000, B01100000, B11010000, B11010000, B01110000, B11110000, B01110000};
  byte cifraC[] = {B00000001, B00000010, B00000100, B00001000};

  PORTB = numeroB[valor];
  PORTD = numeroD[valor];
  PORTC = cifraC [cifra];

}
