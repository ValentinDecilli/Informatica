#include <stdio.h>
#include <string.h>

	int numeros[9];
	
int main() {
	
	printf("Hacer un programa en C que lea 10 números enteros y determine la cantidad de ellos que son divisibles por 3.\n");
	
	printf("seleccione los numeros a ingresar\n");
		
	for(int i = 0 ; i<10 ; i++){
		printf("ingrese el numero: \n");
		scanf("%d", &numeros[i]);
	}
	printf("los numeros divisibles por 3 son\n");
	
		for(int j = 0 ; j<10 ; j++){
			
		if (numeros[j]%3 == 0){
			printf("%d\n", numeros[j]);
		}
	}
}

