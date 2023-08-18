
#include <string.h>
#include <stdio.h>
#include <math.h>

int numeros[10];
int promedio = 0;
int total = 0;

int main() {
	
	printf("Hacer un programa en C que lea diez números reales por teclado y obtenga el promedio de los mismos.\n");
		
	printf ("ingrese sus numeros:\n ");
	
	for(int i=0; i<9 ; i++){
		
		scanf("%d", &numeros[i]);
		
		total= total + numeros[i];
	}
	
	promedio = total / 10;
	
	printf ("el promedio es de:%d \n", promedio);

}

