#include <stdio.h>
#include <string.h>
#include <math.h>

#define PI 3.141592

int main(void) {
	float radio;
	char a;
	float total;
	int estado = 1;
	
	/*  Realizar un programa en C, donde se pida el ingreso del radio y luego se presente"
		un men� de 3 opciones de c�lculo: (a)-C�lculo de la longitud de la circunferencia,"
		(b)-C�lculo del �rea del c�rculo y (c)-C�lculo del volumen de la esfera, se pida el"
		ingreso de la opci�n elegida, se realice el c�lculo correspondiente y se muestre el"
		resultado. Utilizar la if-else-if.*/
		
	printf("ingrese el valor de radio: \n");
	scanf("%f", &radio);

	printf("seleccione que desea calcular \n(a)calculo de la longitud de la circunferencia \n(b)C�lculo del �rea del c�rculo\n(c)C�lculo del volumen de la esfera\n");
	
	scanf(" %c", &a);
	

	while(estado == 1){
	
	if(a == 'a'){
		total = 2*PI*radio;
		estado = 0;
	}
	else if(a == 'b'){
		total = PI*radio*radio;
		estado = 0;
	}
	else if(a == 'c'){
		total = 4/3*radio*radio*radio;
		estado = 0;
	}
	else{
		printf("letra no permitida\n");
		estado = 1;
		printf("ingrese su opcion nuevamente: \n");
		scanf(" %c", &a);
	}
	}
	if ( a == 'a' || a == 'b' || a == 'c'){
	printf ("el resultado de su operacion es: %f", total);
	}
}

