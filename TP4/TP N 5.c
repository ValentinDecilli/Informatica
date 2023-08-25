
#include <math.h>
#include <stdio.h>

int numeros[9];
int orden[9];
int i = 0;  
int j = 0;
int contador = 0;
int x;
int main() {
	
	/*Realizar un programa en C que lea 10 n�meros enteros, los cargue en un arreglo"
		y luego los ordene en el arreglo de manera ascendente. (Investigar sobre m�todos" 
		de ordenaci�n de n�meros).*/
	
	printf("ingrese los 10 numeros\n");
	
	for(i = 0 ; i < 10 ; i++){
	scanf("%d", &numeros[i]);
	}
	
	for(j = 0 ; j  < 10 ; j++){  
	contador = 0;
	for(i = 0 ; i  < 10 ; i++){
		if (numeros[j] < numeros[i]){
		contador = contador+1;
			}
		}
	orden[contador] = numeros[j];
	}
	
	printf("sus numeros ordenados son: \n");
	
	for(i = 0 ; i < 10 ; i++){
		printf("%d\n", orden[i]);
	}
	
}

	
