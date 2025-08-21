#include <stdio.h>

int main() {
    // Declaração das variáveis da primeira carta
    char codigo1[4]; // Ex: A01
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Declaração das variáveis da segunda carta
    char codigo2[4]; // Ex: B02
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados
    printf("\n=== Dados das Cartas ===\n");

    printf("\nCarta 1 (%s):\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2 (%s):\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
