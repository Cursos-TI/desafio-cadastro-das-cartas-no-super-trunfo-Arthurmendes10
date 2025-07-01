#include <stdio.h>
#include <string.h>

#define TAM_NOME 50

// Estrutura da carta

struct Carta {

    char cidade[TAM_NOME];
    int populacao;

};

int main() {

    struct Carta carta1, carta2;
    char EstadoDeContinuidade;
    char EstadoDoJogo;

    printf("=== Jogo Super Trunfo: Cidades ===\n");

    while (1) {

        // Cadastro da primeira carta

        printf("\nDigite o nome da primeira cidade: ");
        fgets(carta1.cidade, TAM_NOME, stdin);
        carta1.cidade[strcspn(carta1.cidade, "\n")] = '\0'; // Remove o \n

        printf("Digite a populacao da cidade %s: ", carta1.cidade);
        scanf("%d", &carta1.populacao);
        getchar(); // Limpa o buffer do ENTER

        // Cadastro da segunda carta

        printf("\nDigite o nome da segunda cidade: ");
        fgets(carta2.cidade, TAM_NOME, stdin);
        carta2.cidade[strcspn(carta2.cidade, "\n")] = '\0'; // Remove o \n

        printf("Digite a populacao da cidade %s: ", carta2.cidade);
        scanf("%d", &carta2.populacao);
        getchar(); // Limpa o buffer do ENTER

        // Resultado da rodada

        printf("\n--- Resultado ---\n");
        if (carta1.populacao > carta2.populacao) {
            printf("A cidade vencedora e %s com uma diferenca de %d habitantes!\n", carta1.cidade, carta1.populacao-carta2.populacao);
        } else if (carta2.populacao > carta1.populacao) {
            printf("A cidade vencedora e %s com uma diferenca de %d habitantes!\n", carta2.cidade, carta2.populacao-carta1.populacao);
        } else {
            printf("Empate! Ambas as cidades têm %d habitantes.\n", carta1.populacao);
        }

        // Pergunta se deseja continuar

    while (1) {

        printf("\nDeseja jogar outra rodada? (s/n): ");
        scanf(" %c", &EstadoDeContinuidade);
        getchar(); // Limpa o buffer

        if (EstadoDeContinuidade == 'n' || EstadoDeContinuidade == 'N') {
            printf("Jogo encerrado. Obrigado por jogar!\n");
            EstadoDoJogo = 0;
            break;
        }

        if (EstadoDeContinuidade == 's' || EstadoDeContinuidade == 'S') {
            printf("Jogo reiniciado. Boa sorte!\n");
            EstadoDoJogo = 1;
            break;
        }

    }

    if (EstadoDoJogo == 0) {

    break;

    }

    }

    return 0;

}
