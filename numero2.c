#include <stdio.h>

int main() {
    int num1, num2;

    printf("Escolha um número: ");
    scanf("%d", &num1);

    printf("Escolha o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O maior número é o: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é o: %d\n", num2);
    } else {
        printf("Os dois números tem o mesmo valor: %d\n", num1);
    }

    return 0;
}
