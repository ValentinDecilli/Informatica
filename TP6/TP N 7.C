
#include <stdio.h>
#include <math.h>

// Realizar una función que reciba como argumentos 2 matrices de número reales de 3x3 y obtenga el producto de las 2 matrices.

void operacion(double matriz1[3][3], double matriz2[3][3], double matriztotal[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriztotal[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                matriztotal[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}   

int main()
{

    double matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    double matriz2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    double matriztotal[3][3];

    operacion(matriz1, matriz2, matriztotal);

    printf("Resultado:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", matriztotal[i][j]);
        }
        printf("\n");
    }
}

