
#include <stdio.h>

float numero;
int exponente;
int base;
int i;
int operacion();

int main(void) {
	
	printf("Crear una función que permita calcular la potencia enésima (exponente entero) de un número real (float). No utilizar la función de la librería math.\n");
	
	printf("ingrese el valor que desea elevar a una potencia: \n");
	scanf("%f", &numero);
	
	printf("ingrese el valor del exponente: \n");
	scanf("%d", &exponente);
	
	operacion();
		
	printf("el valor de la operacion es: %f\n", numero);
	
}


	operacion(){
		
		base = numero;
		
		for(i = 1 ; i < exponente ; i++){
			
			numero = numero * base;
		}
		
		return numero;
	}

		
		
		
		
		
		
		
		
		
		
		
		
		
		
