#include <stdio.h>

#define MAX 5

// Estrutura para armazenar os dados de um aluno
struct Aluno {
    char nome[100];
    int matricula;
    char curso[100];
};

// Função para imprimir os dados de todos os alunos
void imprimirAlunos(struct Aluno alunos[], int tamanho) {
    printf("\n--- Lista de Alunos ---\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
        printf("-------------------------\n");
    }
}

int main() {
    struct Aluno alunos[MAX];

    // Leitura dos dados de 5 alunos
    for (int i = 0; i < MAX; i++) {
        printf("Digite os dados do aluno %d\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); // limpa o '\n' do buffer

        printf("Curso: ");
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);

        printf("\n");
    }

    // Impressão dos dados
    imprimirAlunos(alunos, MAX);

    return 0;
}
