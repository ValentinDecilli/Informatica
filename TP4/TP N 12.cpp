
#include<math.h>
#include <stdio.h>
#include <ctype.h>

char cadena[100];
int i = 0;

int main() {
	
	printf("Realizar un programa en C que lea una cadena y la encripte sumando 3 al código ASCII de cada carácter. Mostrar por pantalla.\n");
	
	printf("ingrese su texto: \n");
	gets(cadena);
		
	while(cadena[i] != '\0'){
		
		cadena[i] = cadena[i] + 3;
		i++;
	}
	
	printf("su texto encriptado es: %s\n",cadena);
	
}

