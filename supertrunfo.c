#include <stdio.h>

int main() {
    char estado, estado2;
    char codigo[30], codigo2[30];
    char cidade[30], cidade2[30];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontoTuristico, pontoTuristico2;
    float densidade, densidade2;
    float pibPerCapita, pibPerCapita2;
    int escolha;

    printf("Insira as informações da primeira carta\n");
    printf("Digite o estado da carta: ");
    scanf(" %c", &estado);
    printf("Digite o código da carta: ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoTuristico);

    printf("\nInsira as informações da segunda carta\n");
    printf("Digite o estado da carta: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoTuristico2);

    densidade = populacao / area;
    densidade2 = populacao2 / area2;
    pibPerCapita = pib / populacao;
    pibPerCapita2 = pib2 / populacao2;

    printf("\nCarta 1: %s (%c)\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", cidade, estado, populacao, area, pib, pontoTuristico, densidade, pibPerCapita);
    printf("\nCarta 2: %s (%c)\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", cidade2, estado2, populacao2, area2, pib2, pontoTuristico2, densidade2, pibPerCapita2);

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("\nComparando População:\n");
            break;
        case 2:
            printf("\nComparando Área:\n");
            break;
        case 3:
            printf("\nComparando PIB:\n");
            break;
        case 4:
            printf("\nComparando Pontos Turísticos:\n");
            break;
        case 5:
            printf("\nComparando Densidade Populacional:\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    float valor1, valor2;
    int inverso = 0;

    switch (escolha) {
        case 1: valor1 = populacao; valor2 = populacao2; break;
        case 2: valor1 = area; valor2 = area2; break;
        case 3: valor1 = pib; valor2 = pib2; break;
        case 4: valor1 = pontoTuristico; valor2 = pontoTuristico2; break;
        case 5: valor1 = densidade; valor2 = densidade2; inverso = 1; break;
    }

    if ((valor1 > valor2 && !inverso) || (valor1 < valor2 && inverso)) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else if ((valor1 < valor2 && !inverso) || (valor1 > valor2 && inverso)) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
