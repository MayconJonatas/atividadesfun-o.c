#include <stdio.h>
#include <math.h>

float calcularDelta(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    return delta;
}

int main() {
    float a, b, c;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    float delta = calcularDelta(a, b, c);

    printf("O delta é %.2f\n", delta);

    return 0;
}
