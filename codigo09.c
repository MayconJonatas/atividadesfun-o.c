#include <stdio.h>
#include <math.h>

void calcular_raizes(float a, float b, float c) {
    float delta = b*b - 4*a*c;

    if (delta > 0) {
        float raiz1 = (-b + sqrt(delta)) / (2*a);
        float raiz2 = (-b - sqrt(delta)) / (2*a);
        printf("As ra�zes da equa��o s�o: %.2f e %.2f\n", raiz1, raiz2);
    } else if (delta == 0) {
        float raiz = -b / (2*a);
        printf("A raiz da equa��o �: %.2f\n", raiz);
    } else {
        printf("N�o existem ra�zes reais para essa equa��o.\n");
    }
}

int main() {
    float a, b, c;

    printf("Entre com o valor de a: ");
    scanf("%f", &a);
    printf("Entre com o valor de b: ");
    scanf("%f", &b);
    printf("Entre com o valor de c: ");
    scanf("%f", &c);

    calcular_raizes(a, b, c);

    return 0;
}
