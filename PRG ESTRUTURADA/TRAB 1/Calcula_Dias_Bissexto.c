#include <stdio.h>
#include <string.h>

int Bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main() {
    char nome[100];
    int anoNascimento, anoAtual, diasVividos = 0;

    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    for (int ano = anoNascimento; ano < anoAtual; ano++) {
        if (Bissexto(ano)) {
            diasVividos += 366;
        } else {
            diasVividos += 365;
        }
    }

    printf("%s, você já viveu aproximadamente %d dias.\n", nome, diasVividos);

    return 0;
}