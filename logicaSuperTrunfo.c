#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[5], codigo2[5]; 
    char cidade1[50], cidade2[50];
    int habitantes1, habitantes2; 
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float pib1, pib2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    printf("Digite o estado da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da primeira carta: ");
    scanf("%s", cidade1);

    printf("Digite a população da primeira carta: ");
    scanf("%d", &habitantes1);

    printf("Digite a área da primeira carta: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    //SolIcitação dos dados da carta 2
    printf("Digite o estado da segunda carta: ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da segunda carta: ");
    scanf("%s", cidade2);

    printf("Digite a população da segunda carta: ");
    scanf("%d", &habitantes2);

    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    //calculando a densidade populacional, o pib per capita e o super poder
    densidadePopulacional1 = (float) habitantes1/area1;
    densidadePopulacional2 = (float) habitantes2/area2;
    pibPerCapita1 = (float) pib1/habitantes1;
    pibPerCapita2 = (float) pib2/habitantes2;
    superPoder1 = (float) habitantes1+pib1+area1+pontosTuristicos1+pibPerCapita1+(1/densidadePopulacional1);
    superPoder2 = (float) habitantes2+pib2+area2+pontosTuristicos2+pibPerCapita2+(1/densidadePopulacional2);

    // Exibição dos Dados das Cartas:
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //Impressão das informações da carta 1
    printf("------------------- CARTA 1 -------------------\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB por capita: %.2f reais\n", pibPerCapita1);
    printf("------------------------------------------------\n\n");

    //Impressão das informações da carta 2
    printf("------------------- CARTA 2 -------------------\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB por capita: %.2f reais\n", pibPerCapita2);
    printf("------------------------------------------------\n");

    // Comparação de Cartas:
    printf("####### Comparação de Cartas #######\n");
    if (habitantes1 > habitantes2){
        printf("População: Carta 1 venceu!\n");
    } else {
        printf("População: Carta 2 venceu!\n");
    }
    
    if (area1 > area2){
        printf("Área: Carta 1 venceu!\n");
    } else {
        printf("Área: Carta 2 venceu!\n");
    }

    if (pib1 > pib2){
        printf("PIB: Carta 1 venceu!\n");
    } else {
        printf("PIB: Carta 2 venceu!\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2){
        printf("Pontos Turísticos: Carta 1 venceu!\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu!\n");
    }

    if (densidadePopulacional1 < densidadePopulacional2){
        printf("Densidade Populacional: Carta 1 venceu!\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu!\n");
    }

    if (pibPerCapita1 > pibPerCapita2){
        printf("PIB per Capita: Carta 1 venceu!\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu!\n");
    }

    if (superPoder1 > superPoder2){
        printf("Super Poder: Carta 1 venceu!\n");
    } else {
        printf("Super Poder: Carta 2 venceu!\n");
    }


    return 0;
}
