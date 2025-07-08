#include <stdio.h>

struct Carta {
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;

    // Entrada de dados para a carta 1
    printf("Digite os dados da primeira cidade:\n");
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (em quilometros quadrados): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Entrada de dados para a carta 2
    printf("\nDigite os dados da segunda cidade:\n");
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (em quilometros quadrados): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Saída dos dados
    printf("\n===== Dados da Primeira Cidade =====\n");
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f quilometros quadrados\n", carta1.area);
    printf("PIB: %.2f bilhoes\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n===== Dados da Segunda Cidade =====\n");
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f quilometros quadrados\n", carta2.area);
    printf("PIB: %.2f bilhoes\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);

    printf("\n===== Fim do trabalho =====\n");

    return 0;

}
