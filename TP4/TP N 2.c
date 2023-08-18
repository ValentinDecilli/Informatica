
#include <stdio.h>
#include <math.h>

int numeros[10];

int par =0;
int impar =0;

float flagpar =0;
float flagimpar =0;

int main() {
	
	printf("Realizar un programa donde se ingresen 10 números reales a un arreglo y luego se calcule la suma y el promedio de los elementos de índice par y lo mismo para los elementos de índice impar\n\n");
	
	printf("ingrese sus numeros:\n");
	
	for(int i=0 ; i<10 ; i++){
		printf("%d \n",i);
		scanf("%d", &numeros[i]);
		
		if(numeros[i] %2 == 0){
			par = par+numeros[i];
			flagpar++;
		}
		
		else{
			impar = impar+numeros[i];
			flagimpar++;
		}

	}
	
	float promediopar = par/flagpar;
	float promedioimpar = impar/flagimpar;
	
	printf("la suma de los numeros par es: %d y el promedio es: %f \n", par,promediopar);
	printf("la suma de los numeros impar es: %d y el promedio es: %f \n", impar,promedioimpar);
	
}
