
#include <math.h>
#include <stdio.h>


int xtotal;
int ytotal;
int ztotal;

float distancia;

int operacion(int x1, int x2, int y1, int y2, int z1, int z2){
	
	xtotal = x2 - x1;
	ytotal = y2 - y1;
	ztotal = z2 - z1;
	distancia = sqrt(pow(xtotal,2)+pow(ytotal,2)+pow(ztotal,2));
	
	printf("el valor de la distancia es: %f", distancia);
	return 0;
}
	
	
	int main() {
		
		/*Crear una funci�n que devuelva la distancia entre 2 puntos en el espacio, ingresando las coordenadas x, y, z de
		 cada punto como argumentos de la funci�n.*/
		
		int x1, y1, x2, y2, z1, z2;
		
		printf("ingrese los dos valores de x,y,z: \n");
		printf("x1:");
		scanf("%d", &x1);
		printf("\ny1:");
		scanf("%d", &y1);
		printf("\nz1:");
		scanf("%d", &z1);
		printf("\nx2:");
		scanf("%d", &x2);
		printf("\ny2:");
		scanf("\n%d", &y2);
		printf("\nz2:");
		scanf("\n%d", &z2);
		
		operacion(x1,x2,y1,y2,z1,z2);
	}
	
	
