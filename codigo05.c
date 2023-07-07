#include <stdio.h>
float calcularSomaPA(float a1, float an, int n) {
    float soma;
    soma = (n * (a1 + an)) / 2;
    return soma;
}

int main() {
    float a1, an;
    int n;

printf("Digite o primeiro termo da P.A.: ");
scanf("%f", &a1);

printf("Digite o n-ésimo termo da P.A.: ");
scanf("%f", &an);

printf("Digite o valor de n: ");
scanf("%d", &n);

float soma = calcularSomaPA(a1, an, n);
printf("A soma dos %d primeiros termos da P.A. é: %.2f\n", n, soma);

return 0;
}
