#include <stdio.h>

int main() {
    int num1, num2, num3, media;

    printf("Escreva o primeiro número: ");
    scanf("%d", &num1);

    printf("Escreva o segundo número: ");
    scanf("%d", &num2);

    printf("Escreva o terceiro número: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A média dos três números é: %d\n", media);

    return 0;
}
