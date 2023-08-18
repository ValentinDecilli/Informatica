

#include <stdio.h>
#include <math.h>

int arreglo[10];
int i = 0;
int j = 0;

int main() {
	
	printf(" Realizar un programa en C que lea una cadena y la muestre al revés.\n");
		
	printf("arreglo original:\n");
	
	for (i = 0 ; i <= 10 ; i++){
		arreglo[i] = i;
		printf("%d\n",arreglo[i]);
	}
	printf("arreglo al revéz:\n");
	for (j = 9 ; j >= 0 ; j--){
		printf("%d:\n",arreglo[j]); 
	}
}

