#include <stdio.h>

float calcularConsumo(float distancia, float litros) {
    return distancia / litros;
}

void avaliarConsumo(float consumo) {
    if (consumo < 8) {
        printf("Venda o carro!\n");
    } else if (consumo >= 8 && consumo <= 12) {
        printf("Econômico!\n");
    } else {
        printf("Super econômico!\n");
    }
}

int main() {
    float distancia, litros, consumo;

    printf("Digite a distância percorrida (em Km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &litros);

    consumo = calcularConsumo(distancia, litros);
    printf("Consumo: %.2f Km/l\n", consumo);

    avaliarConsumo(consumo);

    return 0;
}