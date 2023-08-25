#include <stdio.h>

int a1= 1;
int a2= 1;
int a3;

int main() {
	
	/*La sucesi�n de Fibonacci se define de la siguiente forma: a1=1, a2=1 y an=an-1+an-2"
	para n>2, es decir los dos primeros son 1 y el resto cada uno es la suma de los dos"
	anteriores, los primeros son: 1, 1, 2, 3, 5, 8, 13, 21,... hacer un programa en C para" 
	calcular el en�simo t�rmino de la sucesi�n.*/
	
	printf("programa para calcular el enesimo termino de la sucesion fibonacci\n");
	
	for (int i = 0 ; i< 7 ; i++){
	a3 = a1 + a2;
	a1 = a2;
	a2 = a3;
	}
	printf ("el enesimo termino es:%d\n", a3);
			
}

