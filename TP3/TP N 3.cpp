
#include <stdio.h>
#include <math.h>

float x = 0;
float total[50];
int i;

int main() {
	
	printf("Realizar un programa en C, que muestre 50 valores de la función:  y=sen(x)+0.7cos(2x)+0.5sen(3x)"
		   "entre x=0 y x=4 p Copiar los valores en una planilla de Excel y graficar.\n");
	printf("los valores de la funcion son:");
	
	for( i=0 ; i<= 49 ; i++){
		total[i] = sin(x)+(0.7*cos(2*x))+(0.5*sin(3*x));
		printf("\nx=%f---",x);
		x = x + 0.251;
		printf("y=%f",total[i]);
	}
	
}

