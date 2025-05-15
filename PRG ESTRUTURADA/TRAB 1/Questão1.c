#include <stdio.h>

void DesenhaLinha(int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("=");
    }
    printf("\n");
}

int Intervalo(int a, int b) {
    int soma = 0;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int num1, num2;

    while (1) {
        printf("Digite o primeiro número (0 para encerrar): ");
        scanf("%d", &num1);

        if (num1 == 0) {
            break;
        }

        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        DesenhaLinha(40);
        int soma = Intervalo(num1, num2);
        printf("A soma dos números no intervalo [%d, %d] é: %d\n", num1, num2, soma);
        DesenhaLinha(40);
    }

    printf("Programa encerrado.\n");
    return 0;
}