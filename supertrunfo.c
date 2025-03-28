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
    int escolha1, escolha2;

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

    printf("\nEscolha dois atributos para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);
    
    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &escolha2);
    } while (escolha2 == escolha1);

    float obterValor(int atributo, int populacao, float area, float pib, int pontos, float densidade) {
        switch (atributo) {
            case 1: return populacao;
            case 2: return area;
            case 3: return pib;
            case 4: return pontos;
            case 5: return densidade;
            default: return 0;
        }
    }

    float valor1_1 = obterValor(escolha1, populacao, area, pib, pontoTuristico, densidade);
    float valor2_1 = obterValor(escolha1, populacao2, area2, pib2, pontoTuristico2, densidade2);
    float valor1_2 = obterValor(escolha2, populacao, area, pib, pontoTuristico, densidade);
    float valor2_2 = obterValor(escolha2, populacao2, area2, pib2, pontoTuristico2, densidade2);
    
    int inverso1 = (escolha1 == 5);
    int inverso2 = (escolha2 == 5);
    int pontos1 = ((valor1_1 > valor2_1) ^ inverso1) + ((valor1_2 > valor2_2) ^ inverso2);
    int pontos2 = ((valor1_1 < valor2_1) ^ inverso1) + ((valor1_2 < valor2_2) ^ inverso2);

    float soma1 = valor1_1 + valor1_2;
    float soma2 = valor2_1 + valor2_2;

    printf("\nResultado da Comparação:\n");
    printf("%s: %s = %.2f, %s = %.2f, Soma = %.2f\n", cidade, (escolha1 == 1) ? "População" : (escolha1 == 2) ? "Área" : (escolha1 == 3) ? "PIB" : (escolha1 == 4) ? "Pontos Turísticos" : "Densidade", valor1_1, (escolha2 == 1) ? "População" : (escolha2 == 2) ? "Área" : (escolha2 == 3) ? "PIB" : (escolha2 == 4) ? "Pontos Turísticos" : "Densidade", valor1_2, soma1);
    printf("%s: %s = %.2f, %s = %.2f, Soma = %.2f\n", cidade2, (escolha1 == 1) ? "População" : (escolha1 == 2) ? "Área" : (escolha1 == 3) ? "PIB" : (escolha1 == 4) ? "Pontos Turísticos" : "Densidade", valor2_1, (escolha2 == 1) ? "População" : (escolha2 == 2) ? "Área" : (escolha2 == 3) ? "PIB" : (escolha2 == 4) ? "Pontos Turísticos" : "Densidade", valor2_2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor: %s!\n", cidade);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s!\n", cidade2);
    } else {
        printf("Empate!\n");
    }
    
    return 0;
}
