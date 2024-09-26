#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[100];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa;

    printf("Escreva o nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';

    printf("Escreva a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Escreva a altura (em metros): ");
    scanf("%f", &pessoa.altura);

    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %.2f metros\n", pessoa.altura);

    return 0;
}
