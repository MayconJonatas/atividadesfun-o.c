#include <stdio.h>

int maiorNumero(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int maior = maiorNumero(num1, num2);

    printf("O maior numero eh: %d\n", maior);

    return 0;
}
