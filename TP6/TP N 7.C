
#include <stdio.h>
#include <math.h>

//Realizar una función que reciba como argumentos 2 matrices de número reales de 3x3 y obtenga el producto de las 2 matrices. 

int matriz1[3][3], matriz2[3][3];
int flag = 0;

int main(){

    	printf("ingrese los valores de su primer matriz:\n");
        int matriz_1[3][3] = matricez();
	    printf("ingrese los valores de su segunda matriz:\n");
        int matriz_2[3][3] = matricez();

        int valor = void operacion(*matriz_1,*matriz_2);
}



void matricez(){

    if(flag == 0){
        for(int j = 0 ; j < 3 ; j++){
            
            for(int i = 0 ; i < 3 ; i++){
                
                scanf("%d", &matriz1[j][i]);
                
                printf ("valor de su primera matriz %d[%d][%d]\n",matriz1[j][i],j,i);
            }
        }
        flag == 1;	
        return matriz1;
    }
    else{
        for(int j = 0 ; j < 3 ; j++){
            
            for(int i = 0 ; i < 3 ; i++){
                
                scanf("%d", &matriz2[j][i]);
                
                printf ("valor de su primera matriz %d[%d][%d]\n",matriz2[j][i],j,i);
            }
        }
    }
    return matriz2;
}


void operacion(matriz_1[],matriz_2[]){

    return 0;
}