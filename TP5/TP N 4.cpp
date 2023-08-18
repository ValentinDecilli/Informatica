

#include <math.h>
#include <stdio.h>
	
	int num1;
	int num2;	
	int num3;	
	int menor;	
	
	int comparacion(int num1, int num2, int num3){
		
		menor = num1;
		
		if (num2 <= menor){
			menor = num2;
			if(num3 <= menor){
				menor = num3;
			}
		}		
		else if(num3 <= menor){
			menor = num3;
		}
		
		return 0;
	}

int main() {
	
	printf("Crear una función que devuelva el número menor de 3 números enteros ingresados como argumentos de la función.\n");
	
	printf("ingrese los numero que desee comparar: \n");
	scanf("%d %d %d",&num1, &num2, &num3);
	comparacion(num1, num2, num3);
	
	printf("el numero menor es: %d\n", menor);
}

 



