#include <stdio.h>

typedef struct {
    char estado;                     // Letra de A a H
    char codigo[4];                  // Ex: A01, B03
    char nomeCidade[50];             // Nome da cidade
    unsigned long int populacao;     // Número de habitantes (maior capacidade)
    float area;                      // Área em km²
    float pib;                       // PIB em bilhões
    int pontosTuristicos;            // Número de pontos turísticos
    float densidadePopulacional;     // Habitantes por km²
    float pibPerCapita;              // PIB per capita
    float superPoder;                // Valor calculado
} Carta;

int main() {
    Carta carta1, carta2;

    printf("===== CADASTRO DE CARTAS SUPER TRUNFO (NÍVEL AVANÇADO) =====\n\n");

    // -------------------- CARTA 1 --------------------
    printf("---- Carta 1 ----\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0) / carta1.populacao;
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos 
                        + carta1.pibPerCapita + (1.0 / carta1.densidadePopulacional);

    printf("\n");

    // -------------------- CARTA 2 --------------------
    printf("---- Carta 2 ----\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0) / carta2.populacao;
    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos 
                        + carta2.pibPerCapita + (1.0 / carta2.densidadePopulacional);

    printf("\n");

    // -------------------- RESULTADOS --------------------
    printf("===== RESULTADOS =====\n\n");

    // Exibição das duas cartas
    printf("----- CARTA 1 -----\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n\n", carta1.superPoder);

    printf("----- CARTA 2 -----\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n\n", carta2.superPoder);

    // -------------------- COMPARAÇÕES --------------------
    printf("===== COMPARAÇÃO ENTRE CARTAS =====\n\n");

    printf("População: %d\n", (carta1.populacao > carta2.populacao));                // 1 se Carta 1 vence
    printf("Área: %d\n", (carta1.area > carta2.area));
    printf("PIB: %d\n", (carta1.pib > carta2.pib));
    printf("Pontos Turísticos: %d\n", (carta1.pontosTuristicos > carta2.pontosTuristicos));
    printf("PIB per Capita: %d\n", (carta1.pibPerCapita > carta2.pibPerCapita));
    printf("Densidade Populacional (menor vence): %d\n", (carta1.densidadePopulacional < carta2.densidadePopulacional));
    printf("Super Poder: %d\n", (carta1.superPoder > carta2.superPoder));

    printf("\n===== FIM DO PROGRAMA =====\n");

    return 0;
}
