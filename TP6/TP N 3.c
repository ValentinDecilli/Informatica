
#include <stdio.h>
#include <math.h>

float x1,x2;

int change(float *pa ,float *pb){
	
	float ma = *pb;
	*pb = *pa;
	*pa = ma;
	
	printf("el valor de x1 es: %.2f", *pa);
	printf("\nel valor de x2 es: %.2f", *pb);
	
	return 0;
}
	
	// Realizar un programa que utilice una función que intercambie los valores de X1 y de X2.

int main() {

	printf("ingrese los valores de\nx1: ");
	scanf("%f", &x1);
	printf("\nx2:");
	scanf("%f", &x2);
	
	float *p1 = &x1;
	float *p2 = &x2;
	
	change(p1,p2);
}

