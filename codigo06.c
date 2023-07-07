#include <stdio.h>

int verificarQuadradoOuRetangulo(int b, int h) {
    if (b == h) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int base, altura;

    printf("Digite a base e altura do retângulo/quadrado: ");
    scanf("%d %d", &base, &altura);

    int resultado = verificarQuadradoOuRetangulo(base, altura);

    if (resultado == 1) {
        printf("É um quadrado.\n");
    } else {
        printf("É um retângulo.\n");
    }

    return 0;
}
