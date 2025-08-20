#include <stdio.h>

int main(){
    printf("Desafio Xadrez!\n");
    printf("Novo commit!\n");

    // Carta 1 - São Paulo
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[30] = "São Paulo";
    long int populacao1 = 12325000;
    float area1 = 1521.11;
    double pib1 = 699.28; // em bilhões
    int pontos_turisticos1 = 50;
    float densidade1, pib_per_capita1;

    // Carta 2 - Rio de Janeiro
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[30] = "Rio de Janeiro";
    long int populacao2 = 6748000;
    float area2 = 1200.25;
    double pib2 = 300.50; // em bilhões
    int pontos_turisticos2 = 30;
    float densidade2, pib_per_capita2;

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos resultados
    printf("\n--- Resultados ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

}