#include <stdio.h>


int i;
int n;

int m = 0;
int nm = 0;
int nmi = 0;
int x;
int flag = 0;

int main() {
	
	//Hacer un programa en C para calcular el m�ximo y el m�nimo de N n�meros le�dos por teclado. 
	
	printf ("selecciones la cantidad de numeros que quiera comparar\n");
	scanf("%d", &n);
	
	printf("seleccione los numeros que quiera comparar:\n");
	
	for(i = 0 ; i<n ; i++){	
		
		x = i;
		scanf("%d", &m);
			   
		if (x == 0){
			nm = m;
			nmi = m;
		}
		
		if (m > nm){

		nm = m;
		}
			
		else if(m <= nmi){
				
		nmi = m;			
		}
	}

	printf("el numero mayor es: %d\n", nm);
	printf("el numero minimo es: %d\n", nmi);	
	
}

