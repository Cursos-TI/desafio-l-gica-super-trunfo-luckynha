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
    unsigned long int habitantes1, habitantes2; 
    int pontosTuristicos1, pontosTuristicos2;
    int atributo1, atributo2;
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
    scanf(" %[^\\n]", cidade1);

    printf("Digite a população da primeira carta: ");
    scanf("%lu", &habitantes1);

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
    scanf(" %[^\\n]", cidade2);

    printf("Digite a população da segunda carta: ");
    scanf("%lu", &habitantes2);

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
    superPoder1 = (float) habitantes1+pib1+area1+pontosTuristicos1+pibPerCapita1+(1.0/densidadePopulacional1);
    superPoder2 = (float) habitantes2+pib2+area2+pontosTuristicos2+pibPerCapita2+(1.0/densidadePopulacional2);

    // Exibição dos Dados das Cartas:
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //Impressão das informações da carta 1
    printf("------------------- CARTA 1 -------------------\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB por capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("------------------------------------------------\n\n");

    //Impressão das informações da carta 2
    printf("------------------- CARTA 2 -------------------\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("------------------------------------------------\n\n");

    //Menu interativo
    do
    {
        printf("####################################\n");
        printf("Escolha o primeiro atributo para comparar:\n");
        printf("1- População\n");
        printf("2- Área\n");
        printf("3- PIB\n");
        printf("4- Número de pontos turísticos\n");
        printf("5- Densidade populacional\n");
        printf("6- PIB per capita\n");
        printf("7- Super Poder\n");
        printf("8- Sair\n");
        printf("Opção: ");
        scanf ("%d", &atributo1);
        
        if (atributo1 < 1 || atributo1 > 8) {
            printf ("Opção inválida, tente novamente\n\n");
        }
        else if (atributo1 >=1 && atributo1 < 8){
            printf("\n");
            printf("####################################\n");
            printf("Escolha o segundo atributo para comparar (diferente do primeiro):\n");
            if (atributo1 != 1) printf("1- Populacao\n");
            if (atributo1 != 2) printf("2- Area\n");
            if (atributo1 != 3) printf("3- PIB\n");
            if (atributo1 != 4) printf("4- Pontos Turisticos\n");
            if (atributo1 != 5) printf("5- Densidade Populacional\n");
            if (atributo1 != 6) printf("6- PIB per capita\n");
            if (atributo1 != 7) printf("7- Super Poder\n");
            if (atributo1 != 8) printf("8- Sair\n");
            printf("Opcao: ");
            scanf("%d", &atributo2);

            if (atributo2 < 1 || atributo2 > 8) {
                printf ("Opção inválida, tente novamente\n\n");
                continue;
            }

            switch (atributo1)
            {
            case 1:
                printf("\n");
                printf("Carta %s: %lu\n", codigo1, habitantes1);
                printf("Carta %s: %lu\n", codigo2, habitantes2);
                if (habitantes1 > habitantes2){
                    printf("População: A carta %s venceu!\n", codigo1);
                } else if (habitantes1 == habitantes2){
                    printf("População: Empate!\n");
                } else {
                    printf("População: A carta %s venceu!\n", codigo2);
                }
            break;
        
            case 2:
                printf("\n");
                printf("Carta %s: %.2f\n", codigo1, area1);
                printf("Carta %s: %.2f\n", codigo2, area2);
                if (area1 > area2){
                    printf("Área: A carta %s venceu!\n", codigo1);
                } else if (area1 == area2) {
                    printf("Área: Empate!\n");
                } else {
                    printf("Área: A carta %s venceu!\n", codigo2);
                }
            break;
        
            case 3:
                printf("\n");
                printf("Carta %s: %.2f\n", codigo1, pib1);
                printf("Carta %s: %.2f\n", codigo2, pib2);
                if (pib1 > pib2){
                    printf("PIB: A carta %s venceu!\n", codigo1);
                } else if(pib1 == pib2) {
                    printf("PIB: Empate!\n");
                } else {
                    printf("PIB: A carta %s venceu!\n", codigo2);
                }
            break;

            case 4:
                printf("\n");
                printf("Carta %s: %d\n", codigo1, pontosTuristicos1);
                printf("Carta %s: %d\n", codigo2, pontosTuristicos2);
                if (pontosTuristicos1 > pontosTuristicos2){
                    printf("Pontos Turísticos: A carta %s venceu!\n", codigo1);
                } else if(pontosTuristicos1 == pontosTuristicos2) {
                    printf("Pontos Turísticos: Empate!\n");
                } else {
                    printf("Pontos Turísticos: A carta %s venceu!\n", codigo2);
                }
            break;
        
            case 5:
                printf("\n");
                printf("Carta %s: %.2f\n", codigo1, densidadePopulacional1);
                printf("Carta %s: %.2f\n", codigo2, densidadePopulacional2);
                if (densidadePopulacional1 < densidadePopulacional2){
                    printf("Densidade Populacional: A carta %s venceu!\n", codigo1);
                } else if(densidadePopulacional1 == densidadePopulacional2) {
                    printf("Densidade Populacional: Empate!\n");
                } else {
                    printf("Densidade Populacional: A carta %s venceu!\n", codigo2);
                }
            break;
            
            case 6:
                printf("\n");
                printf("Carta %s: %.2f\n", codigo1, pibPerCapita1);
                printf("Carta %s: %.2f\n", codigo2, pibPerCapita2);
                if (pibPerCapita1 > pibPerCapita2){
                    printf("PIB Per Capita: A carta %s venceu!\n", codigo1);
                } else if(pibPerCapita1 == pibPerCapita2) {
                    printf("PIB Per Capita: Empate!\n");
                } else {
                    printf("PIB Per Capita: A carta %s venceu!\n", codigo2);
                }
            break;

            case 7:
                printf("\n");
                printf("Carta %s: %.2f\n", codigo1, superPoder1);
                printf("Carta %s: %.2f\n", codigo2, superPoder2);
                if (superPoder1 > superPoder2){
                    printf("Super Poder: A carta %s venceu!\n", codigo1);
                } else if(superPoder1 == superPoder2) {
                    printf("Super Poder: Empate!\n");
                } else {
                    printf("Super Poder: A carta %s venceu!\n", codigo2);
                }
            break;

        default:
            printf("Opção inválida! Digite uma opção válida.\n");
            
        }

        switch (atributo2)
            {
            case 1:
                printf("\n");
                printf("Carta %s: %lu\n", codigo1, habitantes1);
                printf("Carta %s: %lu\n", codigo2, habitantes2);
                if (habitantes1 > habitantes2){
                    printf("População: A carta %s venceu!\n", codigo1);
                } else if (habitantes1 == habitantes2){
                    printf("População: Empate!\n");
                } else {
                    printf("População: A carta %s venceu!\n", codigo2);
                }
            break;
        
            case 2:
                printf("\n");
                printf("Carta %s: %.2f\n", codigo1, area1);
                printf("Carta %s: %.2f\n", codigo2, area2);
                if (area1 > area2){
                    printf("Área: A carta %s venceu!\n", codigo1);
                } else if (area1 == area2) {
                    printf("Área: Empate!\n");
                } else {
                    printf("Área: A carta %s venceu!\n", codigo2);
                }
            break;
        
            case 3:
                printf("\n");
                printf("Carta %s: %.2f\n", codigo1, pib1);
                printf("Carta %s: %.2f\n", codigo2, pib2);
                if (pib1 > pib2){
                    printf("PIB: A carta %s venceu!\n", codigo1);
                } else if(pib1 == pib2) {
                    printf("PIB: Empate!\n");
                } else {
                    printf("PIB: A carta %s venceu!\n", codigo2);
                }
            break;

            case 4:
                printf("\n");
                printf("Carta %s: %d\n", codigo1, pontosTuristicos1);
                printf("Carta %s: %d\n", codigo2, pontosTuristicos2);
                if (pontosTuristicos1 > pontosTuristicos2){
                    printf("Pontos Turísticos: A carta %s venceu!\n", codigo1);
                } else if(pontosTuristicos1 == pontosTuristicos2) {
                    printf("Pontos Turísticos: Empate!\n");
                } else {
                    printf("Pontos Turísticos: A carta %s venceu!\n", codigo2);
                }
            break;
        
            case 5:
                printf("\n");
                printf("Carta %s: %.2f\n", codigo1, densidadePopulacional1);
                printf("Carta %s: %.2f\n", codigo2, densidadePopulacional2);
                if (densidadePopulacional1 < densidadePopulacional2){
                    printf("Densidade Populacional: A carta %s venceu!\n", codigo1);
                } else if(densidadePopulacional1 == densidadePopulacional2) {
                    printf("Densidade Populacional: Empate!\n");
                } else {
                    printf("Densidade Populacional: A carta %s venceu!\n", codigo2);
                }
            break;
            
            case 6:
                printf("\n");
                printf("Carta %s: %.2f\n", codigo1, pibPerCapita1);
                printf("Carta %s: %.2f\n", codigo2, pibPerCapita2);
                if (pibPerCapita1 > pibPerCapita2){
                    printf("PIB Per Capita: A carta %s venceu!\n", codigo1);
                } else if(pibPerCapita1 == pibPerCapita2) {
                    printf("PIB Per Capita: Empate!\n");
                } else {
                    printf("PIB Per Capita: A carta %s venceu!\n", codigo2);
                }
            break;

            case 7:
                printf("\n");
                printf("Carta %s: %.2f\n", codigo1, superPoder1);
                printf("Carta %s: %.2f\n", codigo2, superPoder2);
                if (superPoder1 > superPoder2){
                    printf("Super Poder: A carta %s venceu!\n", codigo1);
                } else if(superPoder1 == superPoder2) {
                    printf("Super Poder: Empate!\n");
                } else {
                    printf("Super Poder: A carta %s venceu!\n", codigo2);
                }
            break;

        default:
            if (atributo2 < 1 && atributo2 > 8){
            printf("Opção inválida! Digite uma opção válida.");
            }
        }
    }

        
    } while (atributo1 != 8 && atributo2 != 8);
        printf("\nPrograma encerrado.\n");
    
    
    return 0;
}
