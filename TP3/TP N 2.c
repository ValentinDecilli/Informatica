#include <stdio.h>
#include <string.h>
#include <math.h>

#define PI 3.141592

int main(void) {
	float radio;
	char a;
	float total;
	int estado = 1;
	
	//Realizar el programa anterior pero con la instrucción switch-case.
	
	printf("ingrese el valor de radio: \n");
	scanf("%f", &radio);
	
	printf("seleccione que desea calcular \n(a)calculo de la longitud de la circunferencia \n(b)C�lculo del �rea del c�rculo\n(c)C�lculo del volumen de la esfera\n");
	
	scanf(" %c", &a);
	
	
	while(estado == 1){
		
	switch (a){
		
	case 'a':
		total = 2*PI*radio;
		estado = 0;
		break;
	case'b':
		total = PI*radio*radio;
		estado = 0;
		break;
	case 'c':
		total = 4/3*radio*radio*radio;
		estado = 0;
		break;
		
	default:
			printf("letra incorrecta\n");
			estado = 1;
			printf("ingrese su opcion nuevamente\n");	
			scanf(" %c", &a);
		}	
	}
			printf ("el resultado de su calculo es: %f", total);

}
