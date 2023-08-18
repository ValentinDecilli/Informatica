

#include <math.h>
#include <stdio.h>

float res1, res2, res3;

	float resequiv (float a, float b, float c){
	return 1/((1/a)+(1/b)+(1/c));
	}
	
int main(){
	
	printf("Crear una función que devuelva el valor de requivalente de esta expresión pasándole los valores de R1, R2 y R3.\n");
	
	printf("ingrese el valor de sus resistencias: \n");
	scanf("%f \n%f \n%f",&res1,&res2,&res3);
	float equiv = resequiv(res1,res2,res3); 
	
	printf("el valor de la resistenci equivalente es: %f",equiv);
}



