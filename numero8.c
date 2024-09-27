#include <stdio.h>
#include <string.h>

int main() {
    char str[500];

    printf("Escreva uma palavra: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int tamanho = strlen(str);

    printf("Essa palavra tem %d caracteres.\n", tamanho);

    return 0;
}
