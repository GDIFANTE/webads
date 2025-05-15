#include <stdio.h>

// Definindo a estrutura Pessoa
struct Pessoa {
    char nome[100];
    int idade;
    char endereco[200];
};

// Função para imprimir os dados da estrutura
void imprimirPessoa(struct Pessoa p) {
    printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereço: %s\n", p.endereco);
}

int main() {
    struct Pessoa pessoa;

    // Leitura dos dados
    printf("Digite o nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    getchar(); // limpa o '\n' do buffer após o scanf

    printf("Digite o endereço: ");
    fgets(pessoa.endereco, sizeof(pessoa.endereco), stdin);

    // Chamada da função que imprime os dados
    imprimirPessoa(pessoa);

    return 0;
}
