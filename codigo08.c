#include <stdio.h>

float calcularJuros(float c, int m, float t) {
    float j = c * m * t;
    return j;
}

int main() {
    float c, t;
    int m;

    printf("Informe o valor do empr�stimo (c): ");
    scanf("%f", &c);

    printf("Informe o n�mero de meses (m): ");
    scanf("%d", &m);

    printf("Informe a taxa de juros ao m�s (t): ");
    scanf("%f", &t);

    float juros = calcularJuros(c, m, t);

    printf("Juros cobrados: %.2f\n", juros);

    return 0;
}
