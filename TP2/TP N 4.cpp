

#include <math.h>
#include <stdio.h>

int factorial = 1;
int n = 0;
int main() {
	
	//Hacer un programa en C para calcular el factorial de N (N!=1�2�3�...�N)
	
	printf("ingrese el numero factorial que desea calcular: \n");
	scanf("%d", &n);

		
	for (int i = 1; i<=n ; i++){
		
		factorial = factorial * i;
	}
	printf("el resultado de su factorial es:%d", factorial);
}

