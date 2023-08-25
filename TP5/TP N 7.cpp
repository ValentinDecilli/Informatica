
#include <math.h>
#include <stdio.h>

int valor;
int factor = 1;

int factorial(int valor){

	for(int i=1; i<=valor; i++){
		factor = factor*i;  
	}
	printf("el valor factorial es: %d", factor);
	return 0;
}


int main() {
	
	//Realizar una funci�n que devuelva el factorial de un n�mero entero, ingresando el n�mero como argumento.
	
	printf("ingrese su numero: ");
	scanf("%d",&valor);
	
	factorial(valor);
}

