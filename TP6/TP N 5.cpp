

#include<math.h>
#include <stdio.h>
#include <ctype.h>

char cadena_1[100];
char cadena_2[100];
	
int main() {
	
	printf("Realizar una funci�n que reciba como argumento dos cadenas de caracteres y obtenga otra que sea la uni�n de la primera con la segunda cadena.\n");
	
	printf("ingrese su primer cadena:\n");
	gets(cadena_1);
	
	printf("ingrese su segunda cadena:\n");
	gets(cadena_2);

	char resultado = char cadenas(cadena_1,cadena_2);
	
	printf ("la union de ambas cadenas es %c",resultado);
}


	char cadenas(char texto1,char texto2){
		
	return texto1 + texto2;
		
}
	
	
	
