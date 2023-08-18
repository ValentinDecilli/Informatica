
#include <stdio.h>
#include <math.h>

float precio;
float porcentaje;
float descuento;
float valor;

	float operacion(float precio, float porcentaje){

		int descuento = precio/porcentaje;
		valor = precio - descuento;
		printf("el valor de su produco con descuento es de: %f", valor);
		return 0;
	}

int main() {
	
	printf("Crear una función que devuelva el valor a pagar de una compra con descuento, introduciendo el precio (valor) de la compra y el descuento en porcentaje que se realiza. \n");
	
	printf("introdusca el valor del producto: \n");
	scanf("%f",&precio);
	
	printf("introdusca el porcentaje del descuento: \n");
	scanf("%f", &porcentaje);
	
	operacion(precio, porcentaje);
}
