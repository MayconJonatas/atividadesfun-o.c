#include <stdio.h>

void imprimirNumeros(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    imprimirNumeros(numero);

    return 0;
}
