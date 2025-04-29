#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, expoente, resultado;

    printf("Digite a base (número inteiro): ");
    scanf("%d", &base);
    printf("Digite o expoente (número inteiro): ");
    scanf("%d", &expoente);

    resultado = potencia(base, expoente);

    printf("O resultado de %d elevado a %d é: %d\n", base, expoente, resultado);

    return 0;
}