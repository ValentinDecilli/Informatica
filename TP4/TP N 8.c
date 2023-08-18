#include <math.h>
#include <stdio.h>

float y;
int x;
int funcionx [35];
float funciony [35];
int i;

int main() {
	
	printf("Realizar un programa donde se rellene dos arreglos de 36 elementos, uno que llamaremos"
		   "S(i)con los valores de la función y=seno(x) para x que varía en 10 grados sexagesimales"
		   ", y el otro arreglo A(i) conteniendo los valores de x. Mostrar los dos arreglos en forma"
		   "de tabla con una columna para el ángulo y otra para la función.\n");
	
	for(i = 1 ; i <= 36 ; i++){
	x = (10*i);
	funcionx[i] = x; 
	}
	
	for(i = 1 ; i <= 36 ; i++){
		
		y = sin(funcionx[i]);
		funciony[i] = y; 
	}
	
	printf("Los valores de la funcion son: \n");
		
	for	(i = 1 ; i <= 36 ; i++){
		
		printf("|%d| -- ",funcionx[i]);
		printf("|%.4f|\n",funciony[i]);	
	}
	
}























