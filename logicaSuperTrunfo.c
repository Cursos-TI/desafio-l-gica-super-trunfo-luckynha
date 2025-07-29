#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[3], estado2[3];
    char codigo1[5], codigo2[5]; 
    char cidade1[50], cidade2[50];
    char nomeAtributo1[50], nomeAtributo2[50];
    unsigned long int habitantes1, habitantes2; 
    int pontosTuristicos1, pontosTuristicos2;
    int atributo1, atributo2;
    int vitoriasCarta1; 
    int vitoriasCarta2;
    float area1, area2;
    float pib1, pib2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    float soma1, soma2;
    float atributoSoma1, atributoSoma2, atributoSoma3, atributoSoma4;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    printf("Digite o estado da primeira carta: ");
    scanf("%s", estado1);

    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da primeira carta: ");
    scanf(" %49[^\n]", cidade1);

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
    scanf("%s", estado2);

    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da segunda carta: ");
    scanf(" %49[^\n]", cidade2);

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

    //Menu interativo
    do {
        vitoriasCarta1 = 0;
        vitoriasCarta2 = 0;
        printf("\n");
        printf("############################################\n");
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
        
        // Switch case para o primeiro atributo
        switch (atributo1)
        {
            case 1:
                atributoSoma1 = (float) habitantes1;
                atributoSoma2 = (float) habitantes2;
                strcpy(nomeAtributo1, "População");
                if (habitantes1 > habitantes2){
                    vitoriasCarta1++;
                }
                else if (habitantes1 < habitantes2){
                    vitoriasCarta2++;
                }
                printf("\n");
            break;
                
            case 2:
                atributoSoma1 = (float) area1;
                atributoSoma2 = (float) area2;
                strcpy(nomeAtributo1, "Área");
                if (area1 > area2){
                    vitoriasCarta1++;
                }
                else if (area1 < area2){
                    vitoriasCarta2++;
                }
                printf("\n");
            break;
                
            case 3:
                atributoSoma1 = (float) pib1;
                atributoSoma2 = (float) pib2;
                strcpy(nomeAtributo1, "PIB");
                if (pib1> pib2){
                    vitoriasCarta1++;
                }
                else if (pib1 < pib2){
                    vitoriasCarta2++;
                }
                printf("\n");
            break;

            case 4:
                atributoSoma1 = (float) pontosTuristicos1;
                atributoSoma2 = (float) pontosTuristicos2;
                strcpy(nomeAtributo1, "Pontos Turísticos");
                if (pontosTuristicos1 > pontosTuristicos2){
                    vitoriasCarta1++;
                }
                else if (pontosTuristicos1 < pontosTuristicos2){
                    vitoriasCarta2++;
                }
                printf("\n");
            break;
                
            case 5:
                atributoSoma1 = (float) densidadePopulacional1;
                atributoSoma2 = (float) densidadePopulacional2;
                strcpy(nomeAtributo1, "Densidade Populacional");
                if (densidadePopulacional1 < densidadePopulacional2){
                    vitoriasCarta1++;
                }
                else if (densidadePopulacional1 > densidadePopulacional2){
                    vitoriasCarta2++;
                }
                printf("\n");
            break;
                    
            case 6:
                atributoSoma1 = (float) pibPerCapita1;
                atributoSoma2 = (float) pibPerCapita2;
                strcpy(nomeAtributo1, "PIB per capita");
                if (pibPerCapita1 > pibPerCapita2){
                    vitoriasCarta1++;
                }
                else if (pibPerCapita1 < pibPerCapita2){
                    vitoriasCarta2++;
                }
                printf("\n");
            break;

            case 7:
                atributoSoma1 = (float) superPoder1;
                atributoSoma2 = (float) superPoder2;
                strcpy(nomeAtributo1, "Super Poder");
                if (superPoder1 > superPoder2){
                    vitoriasCarta1++;
                }
                else if (superPoder1 < superPoder2){
                    vitoriasCarta2++;
                }
                printf("\n");
            break;

            case 8:
                continue;

        default:
            printf ("Opção inválida, tente novamente\n\n");
            continue;
        }

        // Menu para escolha do segundo atributo
        printf("\n\n");
        printf("############################################\n");
        printf("Escolha o segundo atributo para comparar (diferente do primeiro):\n");
        if (atributo1 != 1) printf("1- Populacao\n");
        if (atributo1 != 2) printf("2- Area\n");
        if (atributo1 != 3) printf("3- PIB\n");
        if (atributo1 != 4) printf("4- Pontos Turisticos\n");
        if (atributo1 != 5) printf("5- Densidade Populacional\n");
        if (atributo1 != 6) printf("6- PIB per capita\n");
        if (atributo1 != 7) printf("7- Super Poder\n");
        printf("8- Sair\n");
        printf("Opcao: ");
        scanf("%d", &atributo2);

        // Validação do segundo atributo
        if (atributo2 == atributo1){
            printf("Escolha um atributo diferente\n\n");
            continue;
        }   

        // Switch case para o segundo atributo
        else {
            switch (atributo2){
                case 1:
                    atributoSoma3 = (float) habitantes1;
                    atributoSoma4 = (float) habitantes2;
                    strcpy(nomeAtributo2, "População");
                    if (habitantes1 > habitantes2){
                        vitoriasCarta1++;
                    }
                    else if (habitantes1 < habitantes2){
                        vitoriasCarta2++;
                    }
                    printf("\n");
                break;
                    
                case 2:
                    atributoSoma3 = (float) area1;
                    atributoSoma4 = (float) area2;
                    strcpy(nomeAtributo2, "Área");
                    if (area1 > area2){
                        vitoriasCarta1++;
                    }
                    else if (area1 < area2){
                        vitoriasCarta2++;
                    }
                    printf("\n");
                break;
                    
                case 3:
                    atributoSoma3 = (float) pib1;
                    atributoSoma4 = (float) pib2;
                    strcpy(nomeAtributo2, "PIB");
                    if (pib1 > pib2){
                        vitoriasCarta1++;
                    }
                    else if (pib1 < pib2){
                        vitoriasCarta2++;
                    }
                    printf("\n");
                break;

                case 4:
                    atributoSoma3 = (float) pontosTuristicos1;
                    atributoSoma4 = (float) pontosTuristicos2;
                    strcpy(nomeAtributo2, "Pontos Turísticos");
                    if (pontosTuristicos1 > pontosTuristicos2){
                        vitoriasCarta1++;
                    }
                    else if (pontosTuristicos1 < pontosTuristicos2){
                        vitoriasCarta2++;
                    }
                    printf("\n");
                break;
                    
                case 5:
                    atributoSoma3 = (float) densidadePopulacional1;
                    atributoSoma4 = (float) densidadePopulacional2;
                    strcpy(nomeAtributo2, "Densidade Populacional");
                    if (densidadePopulacional1 < densidadePopulacional2){
                        vitoriasCarta1++;
                    }
                    else if (densidadePopulacional1 > densidadePopulacional2){
                        vitoriasCarta2++;
                    }
                    printf("\n");
                break;
                        
                case 6:
                    atributoSoma3 = (float) pibPerCapita1;
                    atributoSoma4 = (float) pibPerCapita2;
                    strcpy(nomeAtributo2, "PIB per capita");
                    if (pibPerCapita1 > pibPerCapita2){
                        vitoriasCarta1++;
                    }
                    else if (pibPerCapita1 < pibPerCapita2){
                        vitoriasCarta2++;
                    }
                    printf("\n");
                break;

                case 7:
                    atributoSoma3 = (float) superPoder1;
                    atributoSoma4 = (float) superPoder2;
                    strcpy(nomeAtributo2, "Super Poder");
                    if (superPoder1 > superPoder2){
                        vitoriasCarta1++;
                    }
                    else if (superPoder1 < superPoder2){
                        vitoriasCarta2++;
                    }
                    printf("\n");
                break;

                case 8:
                    continue;

            default:
                printf("Opção inválida! Digite uma opção válida.");
                continue;
            }
        }

        // Cálculo das somas dos atributos escolhidos
        soma1 = atributoSoma1 + atributoSoma3;
        soma2 = atributoSoma2 + atributoSoma4;
        
        // Exibição dos resultados
        printf("\n");
        printf("Atributo 1: %s\n", nomeAtributo1);
        printf("Carta %s: %.2f\n", codigo1, atributoSoma1);
        printf("Carta %s: %.2f\n\n", codigo2, atributoSoma2);

        printf("Atributo 2: %s\n", nomeAtributo2);
        printf("Carta %s: %.2f\n", codigo1, atributoSoma3);
        printf("Carta %s: %.2f\n\n", codigo2, atributoSoma4);

        if (vitoriasCarta1 == 2){
            printf("Soma da carta %s: %.2f\n", codigo1, soma1);
            printf("Soma da carta %s: %.2f\n", codigo2, soma2);
            printf("\nA carta %s venceu a rodada!\n", codigo1);
        } 
        
        else if (vitoriasCarta1 == vitoriasCarta2) {
            printf("Soma da carta %s: %.2f\n", codigo1, soma1);
            printf("Soma da carta %s: %.2f\n", codigo2, soma2);
            printf("\nEmpate!\n");
        }
        else if (vitoriasCarta2 == 2) {
            printf("Soma da carta %s: %.2f\n", codigo1, soma1);
            printf("Soma da carta %s: %.2f\n", codigo2, soma2);
            printf("\nA carta %s venceu a rodada!\n", codigo2);
        }
            
    } 
    while (atributo1 != 8 && atributo2 != 8);
    printf("\nPrograma encerrado.\n");
        
return 0;
}