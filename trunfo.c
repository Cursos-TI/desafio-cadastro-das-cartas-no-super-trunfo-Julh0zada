#include <stdio.h>

int main(){

    // unica forma que consegui fazer para criar variantes para diferentes cartas

    char estado[2]= {'A','B'};
    char codigo[2][30]= {"A01","B02"};

    char cidade[2][30];
    int populacao[2]; 
    int NPT[2];
    float area[2];
    float PIB[2]; 

    // carta 1

    printf("digite o nome da cidade: \n");
    scanf("%s", cidade[0]);

    printf("digite a populaçao total: \n");
    scanf("%d", &populacao[0]);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &NPT[0]);

    printf("digite o pib: \n");
    scanf("%f", &PIB[0]);

    printf("digite a area: \n");
    scanf("%f", &area[0]);

    // carta 2 

    printf("digite o nome da cidade (carta 2): \n");
    scanf("%s", cidade[1]);

    printf("digite a populaçao total (carta 2): \n");
    scanf("%d", &populacao[1]);

    printf("digite o numero de pontos turisticos (carta 2): \n");
    scanf("%d", &NPT[1]);

    printf("digite o pib (carta 2): \n");
    scanf("%f", &PIB[1]);

    printf("digite a area (carta 2): \n");
    scanf("%f", &area[1]);

    // Mostrando as cartas 

    printf("--- CARTA 1 --- \n");
    printf("ESTADO: %c\n", estado[0]);
    printf("CODIGO: %s\n", codigo[0]);
    printf("NOME DA CIDADE: %s\n", cidade[0]);
    printf("POPULAÇÃO: %d\n", populacao[0]);
    printf("AREA: %.2f km²\n", area[0]);    
    printf("PIB: %.2f bilhoes de reais\n", PIB[0]);
    printf("NUMERO DE PONTOS TURISTICOS: %d\n", NPT[0]);


    printf("\n");

    printf("--- CARTA 2 --- \n");
    printf("ESTADO: %c\n", estado[1]);
    printf("CODIGO: %s\n", codigo[1]);
    printf("NOME DA CIDADE: %s\n", cidade[1]);
    printf("POPULAÇÃO: %d\n", populacao[1]);
    printf("AREA: %.2f km²\n", area[1]);    
    printf("PIB: %.2f bilhoes de reais\n", PIB[1]);
    printf("NUMERO DE PONTOS TURISTICOS: %d\n", NPT[1]);


 return 0;

}