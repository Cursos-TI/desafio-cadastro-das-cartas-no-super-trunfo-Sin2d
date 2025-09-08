#include <stdio.h>

int main() {
    // --- DADOS DA CARTA 1 ---
    char estado1[2];
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // --- DADOS DA CARTA 2 ---
    char estado2[2];
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // --- LEITURA DOS DADOS ---
    printf("===== CARTA 1 =====\n");
    printf("Digite o Estado (uma letra): ");
    scanf("%s", estado1);
    printf("Digite o Codigo: ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome1);
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a Area em km2: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em Reais, valor total): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Digite o Estado (uma letra): ");
    scanf("%s", estado2);
    printf("Digite o Codigo: ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome2);
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a Area em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em Reais, valor total): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- CALCULOS ---
    // Densidade e PIB per Capita
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Calculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // --- LOGICA DE COMPARACAO ---
    int vitoriaPopulacao    = populacao1 > populacao2;
    int vitoriaArea         = area1 > area2;
    int vitoriaPib          = pib1 > pib2;
    int vitoriaPontos       = pontosTuristicos1 > pontosTuristicos2;
    int vitoriaDensidade    = densidadePopulacional1 < densidadePopulacional2; // Regra invertida
    int vitoriaPibPerCapita = pibPerCapita1 > pibPerCapita2;
    int vitoriaSuperPoder   = superPoder1 > superPoder2;

    // --- EXIBICAO DOS RESULTADOS DAS COMPARACOES ---
    printf("\n\nComparacao de Cartas:\n");
    
    printf("Populacao: Carta %d venceu (%d)\n", (vitoriaPopulacao ? 1 : 2), vitoriaPopulacao);
    printf("Area: Carta %d venceu (%d)\n", (vitoriaArea ? 1 : 2), vitoriaArea);
    printf("PIB: Carta %d venceu (%d)\n", (vitoriaPib ? 1 : 2), vitoriaPib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (vitoriaPontos ? 1 : 2), vitoriaPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (vitoriaDensidade ? 1 : 2), vitoriaDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (vitoriaPibPerCapita ? 1 : 2), vitoriaPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", (vitoriaSuperPoder ? 1 : 2), vitoriaSuperPoder);

    return 0;
}