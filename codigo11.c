#include <stdio.h>

void imprimirDivisores(int num) {
    printf("Os divisores do numero %d sao: ", num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int numero;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    imprimirDivisores(numero);

    return 0;
}
