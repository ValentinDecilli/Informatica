
#include <stdio.h>

int promedios[9];
int flag = 0;
int flag1 = 0;
int i;
int main() {
	
	printf("Hacer un programa en C donde se lean las notas de 10 alumnos, ingresadas por teclado"
		   "y determine la cantidad de alumnos que tuvieron notas por encima del promedio y la"
		   "cantidad de alumnos por debajo del promedio.\n");
	
	printf("ingrese las notas: \n");
	
	for(i = 0 ; i < 10 ; i++){
	scanf("%d", &promedios[i]);
	}
	
	for( int i = 0 ; i < 10 ; i++){
		
		if(promedios[i] >= 6){
			flag = flag + 1;
		}
		else{
			flag1 = flag1 + 1;
		}
	}
	
	printf ("el total de alumnos aprobados es de: %d\n", flag); 
	printf ("el total de alumnos desaprobados es de: %d\n", flag1);
	
}

