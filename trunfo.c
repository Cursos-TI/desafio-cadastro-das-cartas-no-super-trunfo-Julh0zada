#include <stdio.h>

int main(){

    // Variantes para armazenar os dados das cartas
    char estado[2];               // Sigla do estado (ex: 'A', 'B')
    char codigo[2][30];           // Código da carta (ex: "A01", "B02")
    char cidade[2][30];           // Nome da cidade
    int populacao[2];             // População total
    int pontosTuristicos[2];      // Número de pontos turísticos
    float PIB[2];                 // Produto Interno Bruto (PIB)
    float area[2];                // Área da cidade

    // --- Leitura dos dados da primeira carta ---
    printf("Digite a sigla do estado (carta 1): \n");
    scanf(" %c", &estado[0]);

    printf("Digite o código (carta 1): \n");
    scanf("%s", codigo[0]);

    printf("Digite o nome da cidade (carta 1): \n");
    scanf("%s", cidade[0]);

    printf("Digite a população total (carta 1): \n");
    scanf("%d", &populacao[0]);

    printf("Digite o número de pontos turísticos (carta 1): \n");
    scanf("%d", &pontosTuristicos[0]);

    printf("Digite o PIB (carta 1): \n");
    scanf("%f", &PIB[0]);

    printf("Digite a área da cidade (carta 1): \n");
    scanf("%f", &area[0]);

    // --- Leitura dos dados da segunda carta ---
    printf("Digite a sigla do estado (carta 2): \n");
    scanf(" %c", &estado[1]);

    printf("Digite o código da carta 2: \n");
    scanf("%s", codigo[1]);

    printf("Digite o nome da cidade (carta 2): \n");
    scanf("%s", cidade[1]);

    printf("Digite a população total (carta 2): \n");
    scanf("%d", &populacao[1]);

    printf("Digite o número de pontos turísticos (carta 2): \n");
    scanf("%d", &pontosTuristicos[1]);

    printf("Digite o PIB (carta 2): \n");
    scanf("%f", &PIB[1]);

    printf("Digite a área da cidade (carta 2): \n");
    scanf("%f", &area[1]);

    // --- Exibição dos dados da primeira carta ---
    printf("\n--- CARTA 1 ---\n");
    printf("ESTADO: %c\n", estado[0]);
    printf("CÓDIGO: %s\n", codigo[0]);
    printf("NOME DA CIDADE: %s\n", cidade[0]);
    printf("POPULAÇÃO: %d\n", populacao[0]);
    printf("ÁREA: %.2f km²\n", area[0]);
    printf("PIB: %.2f bilhões de reais\n", PIB[0]);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontosTuristicos[0]);

    // --- Exibição dos dados da segunda carta ---
    printf("\n--- CARTA 2 ---\n");
    printf("ESTADO: %c\n", estado[1]);
    printf("CÓDIGO: %s\n", codigo[1]);
    printf("NOME DA CIDADE: %s\n", cidade[1]);
    printf("POPULAÇÃO: %d\n", populacao[1]);
    printf("ÁREA: %.2f km²\n", area[1]);
    printf("PIB: %.2f bilhões de reais\n", PIB[1]);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontosTuristicos[1]);

    return 0;
}