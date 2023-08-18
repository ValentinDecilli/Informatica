

#include <stdio.h>
#include <math.h>
#define PI 3.141592
int radio;
char opcion;


	int operacion(int radio, int opcion){
		int valor;
		switch(opcion){
		case 'a':
			valor = 2*PI*radio;
			printf("la longitud de la circunferencia es: %d\n", valor);	
			break;
		case 'b':
			valor = PI*(pow(radio,2));
			printf("el area del circulo es: %d\n", valor);	
			break;
		case 'c':
			valor = 1.33*PI*(pow(radio,3));
			printf("el volumen de la esfera es: %d\n", valor);	
			break;
		default:
			printf("letra incorrecta");
			break;
		}
		return 0;
	}
		
int main() {
	
	printf("Crear una función que dado el radio devuelva la longitud de la circunferencia o el área"
		   "del círculo o el volumen de la esfera, través de un segundo parámetro que seleccione" 
		   "cualquiera de estas tres opciones.\n");
	
	printf("ingrese el valor del radio:\n");
	scanf("%d",&radio);
	
	printf("a)Longitud de la circunferencia\nb)Area del circulo\nc)Volumen de la esfera");
	printf("ingrese la operacion que desee realizar:\n");
	scanf(" %c",&opcion);
	
	operacion(radio, opcion);
}

