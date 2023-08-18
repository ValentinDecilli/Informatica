
#include <stdio.h>
#include <math.h>

	int valores[4];
	float promedio = 0;
	int error[4];
	float errortotal;
	int i;
	
int main() {
		
	printf("Hacer un programa en C que lea 5 valores de muestras de un ensayo, calcule el promedio y el valor cuadrático medio del error respecto al promedio.\n");
	
		printf("ingrese sus notas: \n");
		
		for(i = 0 ; i<5 ; i++){
			
		scanf("%d", &valores[i]);
		
		promedio = valores[i] + promedio; 
		
		error[i] = 10 - promedio;
		error[i] = pow(error[i], 2);
		error[i] = sqrt(error[i]/5); 
	}	 
		errortotal = error[i] + errortotal;
		
		promedio = promedio/5;
		
	printf("el promedio es:%f \n", promedio);
	
	printf("el error cuadratico medio es:%f \n", errortotal);
}
	
	

