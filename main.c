#include <stdio.h>

int main() {
    int a, b, c;

    printf("Escolha um valor inicial: ");
    scanf("%d", &a);
    printf("Escolha um valor para ser somado com o primeiro: ");
    scanf("%d", &b);
    printf("Escolha um valor para ser somados com os outros dois: ");
    scanf("%d", &c);

    int soma = a + b + c;

    printf("A soma dos três números é: %d\n", soma);

    return 0;
}
