#include <stdio.h>

int contarPares(int a, int b, int c) {
    int contador = 0;

    if (a % 2 == 0) {
        contador++;
    }

    if (b % 2 == 0) {
        contador++;
    }

    if (c % 2 == 0) {
        contador++;
    }

    return contador;
}

int main() {
    int a, b, c;

    printf("Digite tr�s n�meros: ");
    scanf("%d %d %d", &a, &b, &c);

    int qtdPares = contarPares(a, b, c);

    printf("A quantidade de n�meros pares �: %d", qtdPares);

    return 0;
}
