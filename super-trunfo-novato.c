#include <stdio.h>

int main () {
    int id_1;
    char estado_1;
    char cidade_1[50] = "";
    int populacao_1;
    float area_1;
    float pib_1;
    int pontoTuristico_1;

    int id_2;
    char estado_2;
    char cidade_2[50] = "";
    int populacao_2;
    float area_2;
    float pib_2;
    int pontoTuristico_2;

    printf("----------CADASTRO DE CARTAS----------\n");
    printf("Carta: ");
    scanf("%d", &id_1);
    printf("Estado: ");
    scanf(" %c", &estado_1);
    printf("Cidade: ");
    scanf("%s", &cidade_1);
    printf("Populacao: ");
    scanf("%d", &populacao_1);
    printf("Area: ");
    scanf("%f", &area_1);
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontoTuristico_1);
    printf("--------------------------------------\n");
    
    printf("Carta: ");
    scanf("%d", &id_2);
    printf("Estado: ");
    scanf(" %c", &estado_2);
    printf("Cidade: ");
    scanf("%s", &cidade_2);
    printf("Populacao: ");
    scanf("%d", &populacao_2);
    printf("Area: ");
    scanf("%f", &area_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontoTuristico_2);

    printf("----------CARTAS CADASTRADAS----------\n");
    printf("Carta: %d\n", id_1);
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %c0%d\n", estado_1, id_1);
    printf("Cidade: %s\n", cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area: %f\n", area_1);
    printf("PIB: %f\n", pib_1);
    printf("Pontos Turisticos: %d\n", pontoTuristico_1);
    printf("--------------------------------------\n");
    printf("Carta: %d\n", id_2);
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %c0%d\n", estado_2, id_2);
    printf("Cidade: %s\n", cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area: %f\n", area_2);
    printf("PIB: %f\n", pib_2);
    printf("Pontos Turisticos: %d\n", pontoTuristico_2);
    printf("--------------------------------------\n");
    return 0;
}