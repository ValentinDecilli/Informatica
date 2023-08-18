
#include <math.h>
#include <stdio.h>
#define PI 3.141592654

int pol_rect(float *ps, float *pd){
	
	float x = *ps * cos( *pd *(PI/180));	
	float y = *ps * sin( *pd *(PI/180));
	
	printf("su vector convertido a forma polar es: (%.2f,%.2f) ", x, y);
	return 0;
}
	
int rec_pol(float *pa, float *pb){
	
	float r = sqrt(pow(*pa,2)+pow(*pb,2));
	float o = atan((*pb / *pa)) * (180/PI);
	
	printf("su vector convertido a forma polar es: %.2f %.2f \f", r, o);
	return 0;
}

float x,y,m,l;
char n;

int main() {
	
	printf(" Realizar un programa donde se utilice una función de conversión de números complejos"
		   "de forma rectangular a polar y otra función de forma polar arectangular. Utilizar paso"
		   "de argumentos por referencia.\n"); 
	
	
	printf("que conversion desea realizar\n");
	printf("a)conversion de polar a rectangular\n");
	printf("b)conversion de rectangular a polar\n");
	scanf(" %c", &n);
	
	switch(n){
		
	case 'a':
		printf("ingrese el valor del\n");
		printf("modulo: ");
		scanf("%f", &m);
		printf("\nangulo: ");
		scanf("%f", &l);
		float *pr = &m;
		float *ph = &l;
		pol_rect(pr,ph);
		break;
		
	case 'b':	    
		printf("ingrese los valores de\n");
		printf("x: ");
		scanf("%f",&x);
		printf("\ny :");
		scanf("%f",&y);
		float *px = &x;
		float *py = &y;
		rec_pol(px,py);
		break;	
		
	}
	
}

