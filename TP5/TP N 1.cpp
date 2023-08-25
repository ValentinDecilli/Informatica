
#include <stdio.h>

float numero;
int exponente;
int base;
int i;

int main(void) {
	
	/*Crear una funci�n que permita calcular la potencia en�sima (exponente entero) de un n�mero real (float). 
	No utilizar la funci�n de la librer�a math.*/
	
	printf("ingrese el valor que desea elevar a una potencia: \n");
	scanf("%f", &numero);
	
	printf("ingrese el valor del exponente: \n");
	scanf("%d", &exponente);
	
	operacion();
		
	printf("el valor de la operacion es: %f\n", numero);
	
}

	int operacion(){
		
		base = numero;
		
		for(i = 1 ; i < exponente ; i++){
			
			numero = numero * base;
		}
		
		return numero;
	}

		
		
		
		
		
		
		
		
		
		
		
		
		
		
