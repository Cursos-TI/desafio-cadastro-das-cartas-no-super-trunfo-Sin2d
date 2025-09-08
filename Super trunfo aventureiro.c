#include <stdio.h> 


int main() {
    // --- DADOS DA CARTA 1 ---
    char estado1[2];
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1; 
    int pontosTuristicos1;
    // Novas variáveis para os cálculos da Carta 1
    float densidadePopulacional1;
    float pibPerCapita1;

    // --- DADOS DA CARTA 2 ---
    char estado2[2];
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2; 
    int pontosTuristicos2;
 
    float densidadePopulacional2;
    float pibPerCapita2;

    // --- LEITURA DOS DADOS DA CARTA 1 ---
    printf("===== CARTA 1 =====\n");
    printf("Digite o Estado (uma letra): ");
    scanf("%s", estado1);
    printf("Digite o Código: ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome1); 
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em Reais): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- LEITURA DOS DADOS DA CARTA 2 ---
    printf("\n===== CARTA 2 =====\n");
    printf("Digite o Estado (uma letra): ");
    scanf("%s", estado2);
    printf("Digite o Código: ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome2); 
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em Reais): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- CÁLCULOS ---
    // Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    // Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;


    // --- EXIBIÇÃO DOS RESULTADOS ---
    printf("\n\nExemplo de Saída:\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1 / 1000000000); 
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1000000000); 
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}