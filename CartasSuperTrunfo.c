#include <stdio.h>

int main()
{
    // Carta 1
    char estado1[20];
    char cidade1[20];
    char codigo_da_carta1[4];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area_em_km1;
    float PIB1;
    float densidade_populacional1;
    float PIB_per_capita1;
    float super_poder1;

    // Carta 2
    char estado2[20];
    char cidade2[20];
    char codigo_da_carta2[4];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area_em_km2;
    float PIB2;
    float densidade_populacional2;
    float PIB_per_capita2;
    float super_poder2;

    // Cadastro Carta 1

    printf("Cadastro Carta 1: \n");

    printf("Informe o estado: \n");
    scanf("%s", estado1);

    printf("Informe o codigo da carta: \n");
    scanf("%s", codigo_da_carta1);

    printf("Informe a cidade: \n");
    scanf("%s", cidade1);

    printf("Informe a populacao: \n");
    scanf("%lu", &populacao1);

    printf("Informe a area da Cidade: \n");
    scanf("%f", &area_em_km1);

    printf("Informe o PIB: \n");
    scanf("%f", &PIB1);

    printf("Informe o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Cadastro Carta 2

    printf("\nCadastro Carta 2: \n");

    printf("Informe o estado: \n");
    scanf("%s", estado2);

    printf("Informe o codigo da carta: \n");
    scanf("%s", codigo_da_carta2);

    printf("Informe a cidade: \n");
    scanf("%s", cidade2);

    printf("Informe a populacao: \n");
    scanf("%lu", &populacao2);

    printf("Informe a area da Cidade: \n");
    scanf("%f", &area_em_km2);

    printf("Informe o PIB: \n");
    scanf("%f", &PIB2);

    printf("Informe o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Calculos Carta 1

    densidade_populacional1 = (float)populacao1 / area_em_km1;
    PIB_per_capita1 = PIB1 / (float)populacao1;

    super_poder1 = 
        (float)populacao1 +
	area_em_km1 +
        PIB1 +
        (float)pontos_turisticos1 +
        PIB_per_capita1 +
        (1 / densidade_populacional1);

    // Calculos Carta 2

    densidade_populacional2 = (float)populacao2 / area_em_km2;
    PIB_per_capita2 = PIB2 / (float)populacao2;

    super_poder2 = 
        (float)populacao2 +
        area_em_km2 +
        PIB2 +
        (float)pontos_turisticos2 +
        PIB_per_capita2 +
        (1 / densidade_populacional2);

    // Exibir Carta 1

    printf("\nCarta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da Carta: %s \n", codigo_da_carta1);
    printf("Cidade: %s \n", cidade1);
    printf("Populacao: %lu \n", populacao1);
    printf("Area: %.2f km2 \n", area_em_km1);
    printf("PIB: %.2f trilhoes de Reais \n", PIB1);
    printf("Pontos Turisticos: %d \n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade_populacional1);
    printf("PIB per Capita: %.2f \n", PIB_per_capita1);
    printf("Super Poder: %.2f \n\n", super_poder1);

    // Exibir Carta 2

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta: %s \n", codigo_da_carta2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %lu \n", populacao2);
    printf("Area: %.2f km2 \n", area_em_km2);
    printf("PIB: %.2f trilhoes de Reais \n", PIB2);
    printf("Pontos Turisticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidade_populacional2);
    printf("PIB per Capita: %.2f \n", PIB_per_capita2);
    printf("Super Poder: %.2f \n", super_poder2);

    // Comparacoes

printf("\nComparacao das Cartas:\n");
printf("Populacao: %s\n", populacao1 > populacao2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
printf("Area: %s\n", area_em_km1 > area_em_km2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
printf("PIB: %s\n", PIB1 > PIB2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
printf("Pontos Turisticos: %s\n", pontos_turisticos1 > pontos_turisticos2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
printf("Densidade Populacional: %s\n", densidade_populacional1 > densidade_populacional2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
printf("PIB per Capita: %s\n", PIB_per_capita1 > PIB_per_capita2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
printf("Super Poder: %s\n", super_poder1 > super_poder2 ? "Carta 1 Venceu" : "Carta 2 Venceu");

    return 0;
}
