#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[200];
    int idade;
    int nota;
};

int main() {
    struct Aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        printf("Escreva o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Escreva a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);

        printf("Escreva a nota do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].nota);

        getchar();
    }

    printf("\nInformações sobre os alunos:\n");
    for (int i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %d\n", alunos[i].nota);
    }

    return 0;
}
