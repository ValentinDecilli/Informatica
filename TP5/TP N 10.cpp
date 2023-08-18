
#include <math.h>
#include <stdio.h>

char mesesde[][20]={"1)enero","2)febrero","3)marzo","4)abril","5)mayo","6)junio","7)julio","8)agosto","9)septiembre","10)octubre","11)noviembre","12)diciembre"};
int diastotal[]= {31,59,90,120,151,181,212,243,273,304,334,365};
int mes;
int dia;
int anio;
int total;

int diasde(){
	
	printf("ingrese el dia del mes: ");
	scanf("%d", &dia);
	return dia;
}


int meses(){	
	printf("selecciones el mes en el que se encuentre:\n");
	for(int i = 0 ; i <= 11 ; i++){
		printf("%s\n",mesesde[i]);
	}
	printf("opcion:");
	scanf("%d", &mes);
	return mes;
}
	
int aniosde(){
	
	printf("\nes año bisiesto:\n1)si\n2)no");
	printf("\nopcion: ");
	scanf("%d", &anio);
	return anio;
}


int calcular(int dia, int mes, int anio){
	
	mes--;
	total = diastotal[mes] + dia;
	
	if(anio == 1){
		total++;
	}
	
	printf("el numero del año es : %d",total);
	return 0;
	}


int main() {
	
	printf("Crear una función que devuelva el número de día del año, ingresando como argumentos, el día, mes y año de la fecha.\n");
	diasde();
	meses();
	aniosde();
	calcular(dia, mes, anio);
}









