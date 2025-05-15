#include <stdio.h>

#define MAX_ALUNOS 10

// Definindo a estrutura do aluno
struct Aluno {
    int matricula;
    char nome[100];
    int codigoDisciplina;
    float nota1;
    float nota2;
    float mediaFinal;
};

int main() {
    struct Aluno alunos[MAX_ALUNOS];
    int i, qtd;

    printf("Quantos alunos deseja cadastrar? (máximo %d): ", MAX_ALUNOS);
    scanf("%d", &qtd);

    if (qtd > MAX_ALUNOS || qtd <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    // Leitura dos dados dos alunos
    for (i = 0; i < qtd; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); // Limpa o buffer

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Código da Disciplina: ");
        scanf("%d", &alunos[i].codigoDisciplina);

        printf("Nota 1 (peso 1.0): ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2 (peso 2.0): ");
        scanf("%f", &alunos[i].nota2);

        // Cálculo da média ponderada
        alunos[i].mediaFinal = (alunos[i].nota1 * 1.0 + alunos[i].nota2 * 2.0) / 3.0;
    }

    // Exibição dos dados
    printf("\n--- Listagem Final dos Alunos ---\n");
    for (i = 0; i < qtd; i++) {
        printf("Nome: %s", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Código da Disciplina: %d\n", alunos[i].codigoDisciplina);
        printf("Média Final: %.2f\n", alunos[i].mediaFinal);
        printf("-----------------------------\n");
    }

    return 0;
}
