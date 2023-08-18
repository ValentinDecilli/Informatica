
#include <math.h>
#include <stdio.h>


int xtotal;
int ytotal;
float distancia;

int operacion(int x1, int x2, int y1, int y2){
	
	xtotal = x2 - x1;
	ytotal = y2 - y1;
	
	distancia = sqrt(pow(xtotal,2)+pow(ytotal,2));
	
	printf("el valor de la distancia es: %f", distancia);
	return 0;
}


int main() {
	
	printf("Crear una función que devuelva la distancia entre 2 puntos en el plano, ingresando las coordenadas x e y de cada punto como argumentos de la función.\n");
	
	int x1, y1, x2, y2;
	
	printf("ingrese los dos valores de x e y: \n");
	printf("x1:");
	scanf("%d", &x1);
	printf("\ny1:");
	scanf("%d", &y1);
	printf("\nx2:");
	scanf("%d", &x2);
	printf("\ny2:");
	scanf("\n%d", &y2);
	
	operacion(x1,x2,y1,y2);
}

