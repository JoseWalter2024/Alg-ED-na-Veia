#include <stdio.h>

int maior(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    printf("Escreva o primeiro número: ");
    scanf("%d", &num1);

    printf("Escreva o segundo número: ");
    scanf("%d", &num2);

    int resultado = maior(num1, num2);

    printf("O maior número é o: %d\n", resultado);

    return 0;
}
