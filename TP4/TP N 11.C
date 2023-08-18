#include<math.h>
#include <stdio.h>
#include <ctype.h>

char cadena[100];
int contador = 0;
int j;

int main() {
	
	printf("Realizar un programa en C que lea una cadena e indique cuantas vocales hay. \n");
	
	printf("ingrese su texto:\n");
	gets(cadena);
	
	for(j = 0 ; j < 100 ; j++){

	switch(cadena[j]){
		
	case 'a': case 'A': contador++; break;
	case 'e': case 'E': contador++; break;
	case 'i': case 'I': contador++; break;
	case 'o': case 'O': contador++; break;
	case 'u': case 'U': contador++; break;
		}
	}
	printf("hay un total de: %d\n",contador);
	
}

