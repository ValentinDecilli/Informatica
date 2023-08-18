
#include <stdio.h>
#include <math.h>

int resolvente();
float a;
float b;
float c;
float discriminante;
float x1;
float x2;

int main(void) {
	
	printf("Crear una función que devuelva las raíces de la ecuación cuadrática pasando a la función"
		   "los coeficientes a, b, c como argumentos de la función. Agregar un argumento adicional para"
		   "seleccionar una de las dos raíces.\n");
	
	printf("ingrese el valor de a: \n");
	scanf("%f", &a);
	printf("ingrese el valor de b: \n");
	scanf("%f", &b);	
	printf("ingrese el valor de c: \n");
	scanf("%f", &c);
	
	resolvente();
}


resolvente(){
	

	discriminante = pow(b,2) - 4*a*c;
	
	if(discriminante > 0){
		
		x1= (-b + sqrt(discriminante))  /(2*a);
		x2= (-b - sqrt(discriminante))  /(2*a);	
		
		printf("el valor de sus raicez son: %f %f", x1, x2);
	}
	
	else if(discriminante = 0){
		x1= -b/(2*a);
		printf("el valor de sus raicez son: %f", x1);
	}
	
	else{
		printf("no existen raicez\n");
	}
	
	return 0;
}		
		
		
		
		
		
		
		
		
		
		
