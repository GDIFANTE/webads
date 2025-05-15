#include <stdio.h>
#include <math.h>

#define PI 3.14159

double solicitarMedida(const char *mensagem) {
    double medida;
    printf("%s", mensagem);
    scanf("%lf", &medida);
    return medida;
}

double calcularArea(int opcao, double medida1, double medida2) {
    switch (opcao) {
        case 1:
            return medida1 * medida2;
        case 2:
            return (medida1 * medida2) / 2.0;
        case 3:
            return PI * medida1 * medida1;
        default:
            return 0.0;
    }
}

void exibirResultado(const char *texto, double area) {
    printf("%s %.2lf\n", texto, area);
}

int main() {
    int opcao;

    do {
        printf("\nEscolha a figura geométrica para calcular a área:\n");
        printf("1 - Retângulo\n");
        printf("2 - Triângulo\n");
        printf("3 - Círculo\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando o programa.\n");
            break;
        }

        double medida1, medida2 = 0.0, area;

        switch (opcao) {
            case 1:
                medida1 = solicitarMedida("Informe o comprimento do retângulo: ");
                medida2 = solicitarMedida("Informe a largura do retângulo: ");
                area = calcularArea(opcao, medida1, medida2);
                exibirResultado("A área do retângulo é:", area);
                break;

            case 2:
                medida1 = solicitarMedida("Informe a base do triângulo: ");
                medida2 = solicitarMedida("Informe a altura do triângulo: ");
                area = calcularArea(opcao, medida1, medida2);
                exibirResultado("A área do triângulo é:", area);
                break;

            case 3:
                medida1 = solicitarMedida("Informe o raio do círculo: ");
                area = calcularArea(opcao, medida1, 0.0);
                exibirResultado("A área do círculo é:", area);
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}