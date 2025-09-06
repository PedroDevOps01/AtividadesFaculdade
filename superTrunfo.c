#include <stdio.h>

int main() {
    // ===============================
    // DADOS DA PRIMEIRA CARTA
    // ===============================
    char letra, codigo[3], cidade[50];
    unsigned long int populacao;
    int pontos;
    float area, pib;

    // ===============================
    // DADOS DA SEGUNDA CARTA
    // ===============================
    char letra2, codigo2[4], cidade2[50];
    unsigned long int populacao2;
    int pontos2;
    float area2, pib2;

    // ===============================
    // LEITURA DOS DADOS DA PRIMEIRA CARTA
    // ===============================
    printf("PRIMEIRA CARTA:\n");
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &letra);

    printf("Digite o Código da Carta: ");
    scanf("%2s", codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", cidade);

    printf("Digite o número da População: ");
    scanf("%lu", &populacao);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos);

    printf("\n --------------------------------------------------- \n");

    // ===============================
    // LEITURA DOS DADOS DA SEGUNDA CARTA
    // ===============================
    printf("SEGUNDA CARTA:\n");
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &letra2);

    printf("Digite o Código da Carta: ");
    scanf("%2s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Digite o número da População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    printf("\n --------------------------------------------------- \n");

    // ===============================
    // CÁLCULO DE DENSIDADE POPULACIONAL E PIB PER CAPITA
    // ===============================
    float densidade1 = populacao / area;
    float capita1 = (pib * 1e9) / populacao;

    float densidade2 = populacao2 / area2;
    float capita2 = (pib2 * 1e9) / populacao2;

    // ===============================
    // CÁLCULO DO SUPER PODER
    // ===============================
    float superPoder1 = populacao + area + pib*1e9 + pontos + capita1 + (1 / densidade1);
    float superPoder2 = populacao2 + area2 + pib2*1e9 + pontos2 + capita2 + (1 / densidade2);

    // ===============================
    // EXIBIÇÃO DOS DADOS DAS CARTAS
    // ===============================
    printf("Dados da Primeira Carta:\n");
    printf("Estado: %c\n", letra);
    printf("Código da carta: %c%s\n", letra, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);

    printf("\n --------------------------------------------------- \n");

    printf("Dados da Segunda Carta:\n");
    printf("Estado: %c\n", letra2);
    printf("Código da carta: %c%s\n", letra2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);

    // ===============================
    // COMPARAÇÃO DAS CARTAS
    // ===============================
    int vencedorPop      = populacao > populacao2;
    int vencedorArea     = area > area2;
    int vencedorPib      = pib > pib2;
    int vencedorPontos   = pontos > pontos2;
    int vencedorDensidade= densidade1 < densidade2;
    int vencedorCapita   = capita1 > capita2;
    int vencedorSuper    = superPoder1 > superPoder2;

    // ===============================
    // EXIBIÇÃO DOS RESULTADOS DAS COMPARAÇÕES
    // ===============================
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", vencedorPop ? 1 : 2, vencedorPop);
    printf("Área: Carta %d venceu (%d)\n", vencedorArea ? 1 : 2, vencedorArea);
    printf("PIB: Carta %d venceu (%d)\n", vencedorPib ? 1 : 2, vencedorPib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vencedorPontos ? 1 : 2, vencedorPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vencedorDensidade ? 1 : 2, vencedorDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vencedorCapita ? 1 : 2, vencedorCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", vencedorSuper ? 1 : 2, vencedorSuper);

    return 0;
}
