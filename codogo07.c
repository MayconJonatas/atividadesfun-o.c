#include <stdio.h>

int somaMaiorMenor(int num1, int num2, int num3) {
    int maior, menor;

   
    if (num1 > num2 && num1 > num3) {
        maior = num1;
    } else if (num2 > num1 && num2 > num3) {
        maior = num2;
    } else {
        maior = num3;
    }

    
    if (num1 < num2 && num1 < num3) {
        menor = num1;
    } else if (num2 < num1 && num2 < num3) {
        menor = num2;
    } else {
        menor = num3;
    }

    return maior + menor;
}

int main() {
    int num1, num2, num3, resultado;

    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    resultado = somaMaiorMenor(num1, num2, num3);

    printf("A soma do maior com o menor número é: %d\n", resultado);

    return 0;
}
