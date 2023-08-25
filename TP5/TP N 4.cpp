

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
	
	//Crear una funci�n que devuelva el n�mero menor de 3 n�meros enteros ingresados como argumentos de la funci�n.
	
	printf("ingrese los numero que desee comparar: \n");
	scanf("%d %d %d",&num1, &num2, &num3);
	comparacion(num1, num2, num3);
	
	printf("el numero menor es: %d\n", menor);
}

 



