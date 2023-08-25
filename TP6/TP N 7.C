
#include <stdio.h>
#include <math.h>

// Realizar una función que reciba como argumentos 2 matrices de número reales de 3x3 y obtenga el producto de las 2 matrices.

int matriz1[3][3], matriz2[3][3];
int flag = 0;
int producto, puntero, puntero_2;
int matriztotal[3][3];
void matricez()
{

    if (flag == 0)
    {

        printf("ingrese los valores de su primer matriz:\n");
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < 3; i++)
            {

                scanf("%d", &matriz1[j][i]);

                printf("valor de su primera matriz %d[%d][%d]\n", matriz1[j][i], j, i);
            }
        }

        flag = 1;
    }

    else
    {
        printf("ingrese los valores de su segunda matriz:\n");
        for (int j = 0; j < 3; j++)
        {

            for (int i = 0; i < 3; i++)
            {

                scanf("%d", &matriz2[j][i]);

                printf("valor de su segunda matriz %d[%d][%d]\n", matriz2[j][i], j, i);
            }
        }
    }
}


int main()
{

    matricez();
    matricez();
    operacion(*matriz1,*matriz2);

}

