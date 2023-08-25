
#include <stdio.h>
#include <math.h>
#include <ctype.h>

char cadena_1[100];
char letra;
int valor,contador;

    /*Realizar una función que reciba como argumentos, una letra y una cadena de caracteres
     y devuelva la cantidad de veces en que aparece esa letra en la cadena. */


 char operacion(char cadena[], char letra){
            
    for(int i = 0 ; cadena[i] != '\0' ; i++){

        if(letra == cadena[i]){
            
            contador++;
        }
    }

    printf ("hay un total de %d %c",contador , letra);
 }

int main(){
    
    printf("ingrese su texto: \n");
    gets(cadena_1);

    printf("\ningrese su letra:\n");
    scanf(" %c",&letra);

    operacion(cadena_1, letra);

}

