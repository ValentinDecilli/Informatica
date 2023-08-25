

#include <stdio.h>
#include <math.h>

int contar = 0;
int condicion = 0;
int contador = 0;
int arreglo[19]; 
int i = 0;
int j = 0;


int main() {
	
	//Realizar un programa donde se rellene un arreglo con los 20 primeros n�meros primos. Mostrar en pantalla los elementos del arreglo.
	
	while(condicion <=20){
		
		contador = contador + 1;
		
		if (contador %2 == 0 || contador %3 == 0 || contador %5 == 0 || contador %7 == 0){
			
		if (contador == 1 || contador == 2 || contador == 3 || contador == 5 || contador == 7){
				
				arreglo[i] = contador; 
				i = i + 1;	
				condicion = condicion + 1;
			}
		}
		
		else{
			arreglo[i] = contador; 
			i = i + 1;	
			condicion = condicion + 1;
		}
		
		
	}
	
	printf("los primeros 20 numeros primos son:\n");
	
	for(j = 0 ; j <= 19 ; j++){
		
		printf("%d \n",arreglo[j]);
	}
}
























