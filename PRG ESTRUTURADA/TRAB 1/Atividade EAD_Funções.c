#include <stdio.h>

int calcularMedia(int nota1, int nota2) {
    int nota3 = 0;
    printf("Digite a novamente a terceira nota (0 a 100): ");
    scanf("%d", &nota3);

    int media = (nota1 + nota2 + nota3) / 3;
    return media;
}

void imprimirResultado(char inicial, int n1, int n2, int n3, int media) {
    printf("\n--- Resultado ---\n");
    printf("Aluno: %c\n", inicial);
    printf("Notas: %d, %d, %d\n", n1, n2, n3);
    printf("Média: %d\n", media);
    if (media >= 60) {
        printf("Status: Aprovado\n");
    } else {
        printf("Status: Reprovado\n");
    }
}

int main() {
    int nota1, nota2, nota3;
    char inicial;

    printf("Digite a inicial do nome do aluno: ");
    scanf(" %c", &inicial);
    while (getchar() != '\n');

    printf("Digite a primeira nota (0 a 100): ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota (0 a 100): ");
    scanf("%d", &nota2);

    printf("Digite a terceira nota (0 a 100): ");
    scanf("%d", &nota3);

    int media = calcularMedia(nota1, nota2);

    imprimirResultado(inicial, nota1, nota2, nota3, media);

    return 0;
}
