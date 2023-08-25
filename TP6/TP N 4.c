


#include <math.h>
#include <stdio.h>

int n,m;
int matriz[3][3];


	//Realizar una función que reciba como argumento una matriz de números reales de 3x3 y calcule el determinante.

int determinante(int matr[]){
	
	printf(" %d %d %d \n %d %d %d \n %d %d %d\n",matr[0],matr[1],matr[2],matr[3],matr[4],matr[5],matr[6],matr[7],matr[8]);
	
	int i = matr[0]*((matr[4]*matr[8])-(matr[5]*matr[7])); 
	int j = matr[1]*((matr[3]*matr[8])-(matr[5]*matr[6]));
	int k = matr[2]*((matr[3]*matr[7])-(matr[4]*matr[6]));
	
	int deter = i - j + k;
	
	return deter;
	
	printf("%d",matr[2]);
}


int main(void) {
	
	printf("ingrese los valores de su matriz:\n");
	
	for(int j = 0 ; j < 3 ; j++){
		
		for(int i = 0 ; i < 3 ; i++){
			
			scanf("%d", &matriz[j][i]);
			
			printf ("valor de %d[%d][%d]\n",matriz[j][i],j,i);
		}
	}	
	
	int deter = determinante(*matriz);
	
	printf("el determinate de la matriz es: %d", deter);
}

