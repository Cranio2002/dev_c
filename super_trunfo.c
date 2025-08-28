#include <stdio.h>
#include <string.h>

int main() {
    char estado[50] = "", estado2[50], cod_carta2[50], cod_carta[50] = "", nome_cidade[50] = "", nome_cidade2[50];
    int populacao = 0, populacao2 = 0, pontos_turis = 0, pontos_turis2 = 0;
    float area = 0.0, area2 = 0.0, pib = 0.0, pib2 = 0.0;

    // ----- Carta 1 -----
    printf("Carta 1:\n");

    printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados):\n ");
    scanf("%s", estado);

    printf("Código da carta: A letra do estado seguida de um número de 01 a 04\n");
    scanf("%s", cod_carta);

    getchar(); // Limpa o Enter que ficou no buffer

    printf("Nome da Cidade: O nome da cidade.\n ");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0'; // CORRIGIDO

    printf("População: O número de habitantes da cidade.\n");
    scanf("%d", &populacao);

    printf("Área (em km²): A área da cidade em quilômetros quadrados.\n");
    scanf("%f", &area);

    printf("PIB: O Produto Interno Bruto da cidade.\n");
    scanf("%f", &pib); // CORRIGIDO

    printf("Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.\n");
    scanf("%d", &pontos_turis);


    // ----- Carta 2 -----
    printf("Carta 2:\n");

    printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados):\n ");
    scanf("%s", estado2);

    printf("Código da carta: A letra do estado seguida de um número de 01 a 04\n");
    scanf("%s", cod_carta2);

    getchar(); // Limpa o Enter que ficou no buffer

    printf("Nome da Cidade: O nome da cidade.\n ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0'; // CORRIGIDO

    printf("População: O número de habitantes da cidade.\n");
    scanf("%d", &populacao2);

    printf("Área (em km²): A área da cidade em quilômetros quadrados.\n");
    scanf("%f", &area2);

    printf("PIB: O Produto Interno Bruto da cidade.\n");
    scanf("%f", &pib2); // CORRIGIDO

    printf("Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.\n");
    scanf("%d", &pontos_turis2);

    printf("Carta 1 \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s\n", cod_carta);
    printf("Nome da cidade: %s \n", nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Número de pontos turísticos: %d \n", pontos_turis);

    printf("------------------------- \n");

    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontos_turis2);

    return 0;
}
