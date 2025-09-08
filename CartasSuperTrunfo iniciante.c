#include <stdio.h>   // Para entrada e saída (printf, scanf)

int main() {
    // Dados do jogador 1
    char estado1[2];
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontosTuristicos1;

    // Dados do jogador 2
    char estado2[2];
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontosTuristicos2;

    // jogador 1
    
    printf("===== JOGADOR 1 =====\n");

    printf("Digite uma letra de A a H:\n");
    scanf("%s", estado1);

    printf("Digite um código de 1 a 4:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome1);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    //jogador 2
    printf("\n===== JOGADOR 2 =====\n");
    printf("Digite uma letra de A a H:\n");
    scanf("%s", estado2);

    printf("Digite um código de 1 a 4:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Exibindo os dados dos dois jogadores
    printf("\n===== INFORMAÇÕES =====\n");

    printf("\n--- JOGADOR 1 ---\n");
    printf("Estado: %s\n - Código: %s\n", estado1, codigo1);
    printf("Cidade: %s \n- População: %d\n", nome1, populacao1);
    printf("Área: %.f km²\n - PIB: R$ %.f\n", area1, PIB1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\n--- JOGADOR 2 ---\n");
    printf("Estado: %s\n - Código: %s\n", estado2, codigo2);
    printf("Cidade: %s \n- População: %d\n", nome2, populacao2);
    printf("Área: %.f km2\n - PIB: R$ %.f\n", area2, PIB2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}

