#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    int codigocidade1;
    int nome1;
    int populacao1;
    int area1;
    int pib1;
    int pontosturisticos1;

    int codigocidade2;
    int nome2;
    int populacao2;
    int area2;
    int pib2;
    int pontosturisticos2;

    printf("Vamos cadastrar a primeira cara do super trunfo!");
    
    printf("Porfavor, digite o código da cidade da primeira carta:");
    scanf("%s", codigocidade1);

    printf("Porfavor, digite o nome da cidade da primeira carta:");
    scanf("%s", nome1);

    printf("Porfavor, digite o valor da população da cidade da primeira carta:");
    scanf("%s", populacao1);

    printf("Porfavor, digite o valor da área territorial da cidade da primeira carta:");
    scanf("%s", area1);

    printf("Porfavor, digite o valor do PIB da cidade da primeira carta:");
    scanf("%s", pib1);

    printf("Porfavor, digite o número de pontos turísticos da cidade da primeira carta:");
    scanf("%s", pontosturisticos1);



    printf("Vamos cadastrar a segunda cara do super trunfo!");
    
    printf("Porfavor, digite o código da cidade da segunda carta:");
    scanf("%s", codigocidade2);

    printf("Porfavor, digite o nome da cidade da segunda carta:");
    scanf("%s", nome2);

    printf("Porfavor, digite o valor da população da cidade da segunda carta:");
    scanf("%s", populacao2);

    printf("Porfavor, digite o valor da área territorial da cidade da segunda carta:");
    scanf("%s", area2);

    printf("Porfavor, digite o valor do PIB da cidade da segunda carta:");
    scanf("%s", pib2);

    printf("Porfavor, digite o número de pontos turísticos da cidade da segunda carta:");
    scanf("%s", pontosturisticos2);

    printf("Meus parabéns!, você cadastrou as cartas deste jogo de trunfo super interessante que utiliza apenas duas cartas, risos!"/n);
    
    return 0;
}
