
#include <math.h>
#include <stdio.h>
#include <ctype.h>

char cadena_1[60];
char cadena_2[60];
char concatenacion[200];	
int i,j;

//Realizar una función que reciba como argumento dos cadenas de caracteres y obtenga otra que sea la unión de la primera con la segunda cadena.

int cadenas(char cadena_1[], char cadena_2[]){
			
	for (i = 0 ; cadena_1[i] != '\0' ; i++ ){

		concatenacion[i] = cadena_1[i]; 
		
	}

	for (j = 0 ; cadena_2[j] != '\0' ; j++){

		concatenacion[j+i] =  cadena_2[j];

	}
		printf(" %s ", concatenacion);


			return 0;
}

int main() {
	
	printf("ingrese su primer cadena:\n");
	gets(cadena_1);

	printf("ingrese su segunda cadena:\n");
	gets(cadena_2);

	
 	cadenas(cadena_1, cadena_2);

}


