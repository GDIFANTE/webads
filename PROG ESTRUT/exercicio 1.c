#include <stdio.h>
#include <string.h>

// Definindo a estrutura Horario
struct Horario {
    int hora;
    int minutos;
    int segundos;
};

// Definindo a estrutura Data
struct Data {
    int dia;
    int mes;
    int ano;
};

// Definindo a estrutura Compromisso
struct Compromisso {
    struct Data data;
    struct Horario horario;
    char descricao[100];
};

int main() {
    // Inicializando a variável compromisso
    struct Compromisso compromisso1 = {
        {15, 5, 2025},         // data: 15/05/2025
        {14, 30, 0},           // horário: 14:30:00
        "Reunião com equipe"   // descrição
    };

    // Exibindo os dados iniciais
    printf("Compromisso inicial:\n");
    printf("Data: %02d/%02d/%04d\n", compromisso1.data.dia, compromisso1.data.mes, compromisso1.data.ano);
    printf("Horário: %02d:%02d:%02d\n", compromisso1.horario.hora, compromisso1.horario.minutos, compromisso1.horario.segundos);
    printf("Descrição: %s\n\n", compromisso1.descricao);

    // Modificando o conteúdo do compromisso
    compromisso1.data.dia = 20;
    compromisso1.data.mes = 5;
    compromisso1.data.ano = 2025;
    compromisso1.horario.hora = 9;
    compromisso1.horario.minutos = 45;
    compromisso1.horario.segundos = 0;
    strcpy(compromisso1.descricao, "Consulta médica");

    // Exibindo os dados após a modificação
    printf("Compromisso modificado:\n");
    printf("Data: %02d/%02d/%04d\n", compromisso1.data.dia, compromisso1.data.mes, compromisso1.data.ano);
    printf("Horário: %02d:%02d:%02d\n", compromisso1.horario.hora, compromisso1.horario.minutos, compromisso1.horario.segundos);
    printf("Descrição: %s\n", compromisso1.descricao);

    return 0;
}
