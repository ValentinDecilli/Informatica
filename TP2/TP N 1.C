#include <stdio.h>
#include <math.h>

int main() {
    
    float a, b, c;

    printf("Ingrese el coeficiente a: ");
    scanf("%f", &a);

    printf("Ingrese el coeficiente b: ");
    scanf("%f", &b);

    printf("Ingrese el coeficiente c: ");
    scanf("%f", &c);

    double discriminante = b * b - 4 * a * c;

    if (discriminante >= 0) {

        float x1 = (-b + sqrt(discriminante)) / (2 * a);
        float x2 = (-b - sqrt(discriminante)) / (2 * a);

        printf("Las soluciones son:\n");
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    } else {

        printf("La ecuacion tiene soluciones complejas.\n");
    }

    return 0;
}
