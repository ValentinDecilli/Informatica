
#include <stdio.h>
#include <math.h>

int notas[14];
int flag []= {0,0,0,0,0,0,0,0,0,0};	
int j;
int i;
int main() {
	
	printf("Hacer un programa en C que permita cargar las notas (entre 0 y 10 puntos) de 15 alumnos"
		   "y luego se determine la frecuencia de cada nota, es decir la cantidad de alumnos que"
		   "obtuvieron cada nota en particular. \n");
	
	printf("ingrese las notas: \n");
	
	for(i = 0 ; i < 15 ; i++){
		scanf("%d", &notas[i]);
		
	switch(notas[i]) {
		
		case '1':
			flag[0] = flag[0] + 1;
			break;
		case '2':
			flag[1] = flag[1] + 1;
			break;
		case '3':
			flag[2] = flag[2] + 1;
			break;
		case '4':
			flag[3] = flag[3] + 1;
			break;
		case '5':
			flag[4] = flag[4] + 1;
			break;
		case '6':
			flag[5] = flag[5] + 1;
			break;
		case '7':
			flag[6] = flag[6] + 1;
			break;
		case '8':
			flag[7] = flag[7] + 1;
			break;
		case '9':
			flag[8] = flag[8] + 1;
			break;
			
		case '10':
			flag[9] = flag[9] + 1;
			break;

		}
	}
	
	printf("notas ----- total de notas \n");
	
	for (j = 1 ; j < 11 ; j++){
		
		printf("%d ----- %d\n",flag[j], j);	

	}

}
