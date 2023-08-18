#include <math.h>
#include <stdio.h>

int funcionx [35];
int x;
float funciony [35];
float y;
float funcionz [11];
float z;

int flag;
int i;
int j;
int l;
	
int main() {
	
	printf("Ampliar el programa anterior generando un tercer arreglo P, donde cada elemento P(i)"
           "sea el promedio de los valores de la función para los índices i, i+1 e i+2. Es decir:"
		   "P(i)=[S(i)+S(i+1)+S(i+2)]/3. Mostrar en forma de tabla.\n");
	for(i = 0 ; i <= 36 ; i++){
		x = (10*i);
		funcionx[i] = x; 
	}
	
	for(i = 0 ; i <= 36 ; i++){
		
		y = sin(funcionx[i]);
		funciony[i] = y; 
	}
	
	for(j = 0 ; j <= 11 ; j++){
		
		flag =3*j + 1;
		
		for(i = 1 ; i <= 1 ; i++){
			l = flag; 
			z = (funciony[l] + funciony[l+1] + funciony[l+2])/3;
			
			funcionz[j] = z;
		}
	}
	
	
	
	printf("valores de la funcion--promedio: \n");
	
	for	(i = 1 ; i <= 36 ; i++){
		
		printf("|%d| -- ",funcionx[i]);
		printf("|%.4f|\n",funciony[i]);	
	}

	printf("\n promedio de los valores: \n\n");
	
	for	(i = 0 ; i <= 11 ; i++){
		
		printf("|%.4f|\n",funcionz[i]);	
		
	}
}






















