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

    printf("Insira as informações da segunda carta\n");
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

    printf("\nCarta 1: %s (%c)\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", 
           cidade, estado, populacao, area, pib, pontoTuristico, densidade, pibPerCapita);
    printf("\nCarta 2: %s (%c)\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", 
           cidade2, estado2, populacao2, area2, pib2, pontoTuristico2, densidade2, pibPerCapita2);

    printf("\nComparação de cartas (Atributo: PIB per Capita):\n");
    printf("Carta 1 - %s (%c): %.2f\n", cidade, estado, pibPerCapita);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, pibPerCapita2);

    if (pibPerCapita > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else if (pibPerCapita < pibPerCapita2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
