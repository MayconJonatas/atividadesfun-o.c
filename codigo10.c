#include <stdio.h>

int somaPares(int a, int b) {
    int soma = 0;

    
    if (a % 2 != 0) {
        a++;
    }

    
    for (int i = a; i <= b; i += 2) {
        soma += i;
    }

    return soma;
}

int main() {
    int a, b;

    printf("Digite dois números onde o primeiro é menor que o segundo: ");
    scanf("%d %d", &a, &b);

    
    if (a >= b) {
        printf("O primeiro número precisa ser menor que o segundo.\n");
        return 0;
    }

    int resultado = somaPares(a, b);
    printf("A soma dos números pares entre %d e %d é %d.\n", a, b, resultado);

    return 0;
}
