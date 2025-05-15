#include <stdio.h>

#define QTD_ALUNOS 5

// Estrutura para armazenar os dados do aluno
struct Aluno {
    int matricula;
    char nome[100];
    float nota1, nota2, nota3;
};

// Função para calcular a média de um aluno
float calcularMedia(struct Aluno a) {
    return (a.nota1 + a.nota2 + a.nota3) / 3.0;
}

int main() {
    struct Aluno alunos[QTD_ALUNOS];
    int i;

    // Leitura dos dados dos alunos
    for (i = 0; i < QTD_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); // limpa o buffer

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Nota da 1ª prova: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota da 2ª prova: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota da 3ª prova: ");
        scanf("%f", &alunos[i].nota3);
        getchar(); // limpa o buffer

        printf("\n");
    }

    // (b) Aluno com maior nota da 1ª prova
    int indice_maior_nota1 = 0;
    for (i = 1; i < QTD_ALUNOS; i++) {
        if (alunos[i].nota1 > alunos[indice_maior_nota1].nota1) {
            indice_maior_nota1 = i;
        }
    }

    // (c) Aluno com maior média geral
    int indice_maior_media = 0;
    float maior_media = calcularMedia(alunos[0]);

    // (d) Aluno com menor média geral
    int indice_menor_media = 0;
    float menor_media = calcularMedia(alunos[0]);

    for (i = 1; i < QTD_ALUNOS; i++) {
        float media = calcularMedia(alunos[i]);
        if (media > maior_media) {
            maior_media = media;
            indice_maior_media = i;
        }
        if (media < menor_media) {
            menor_media = media;
            indice_menor_media = i;
        }
    }

    // Resultados
    printf("\nAluno com maior nota da 1ª prova:\n");
    printf("Nome: %s", alunos[indice_maior_nota1].nome);
    printf("Nota: %.2f\n", alunos[indice_maior_nota1].nota1);

    printf("\nAluno com maior média geral:\n");
    printf("Nome: %s", alunos[indice_maior_media].nome);
    printf("Média: %.2f\n", maior_media);

    printf("\nAluno com menor média geral:\n");
    printf("Nome: %s", alunos[indice_menor_media].nome);
    printf("Média: %.2f\n", menor_media);

    // (e) Verificação de aprovação
    printf("\n--- Situação dos alunos ---\n");
    for (i = 0; i < QTD_ALUNOS; i++) {
        float media = calcularMedia(alunos[i]);
        printf("Aluno: %s", alunos[i].nome);
        printf("Média: %.2f - ", media);
        if (media >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
