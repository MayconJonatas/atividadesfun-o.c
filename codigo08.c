#include <stdio.h>

float calcularJuros(float c, int m, float t) {
    float j = c * m * t;
    return j;
}

int main() {
    float c, t;
    int m;

    printf("Informe o valor do empréstimo (c): ");
    scanf("%f", &c);

    printf("Informe o número de meses (m): ");
    scanf("%d", &m);

    printf("Informe a taxa de juros ao mês (t): ");
    scanf("%f", &t);

    float juros = calcularJuros(c, m, t);

    printf("Juros cobrados: %.2f\n", juros);

    return 0;
}
