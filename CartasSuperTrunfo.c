#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[10];
    char codCarta[10];
    char nomeCidade[30];
    int populacao;
    float area;
    float PIB;
    int qtdepontoTuristico = 0;

    char estado2[10];
    char codCarta2[10];
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float PIB2;
    int qtdepontoTuristico2 = 0;

    float densidade1, densidade2;

    // Área para entrada de dados da cidade 1
    printf("Escolha o Estado da Carta 1 de A até H: ");
    scanf("%s", estado);
    printf("Informe o código da carta: ");
    scanf("%s", codCarta);
    printf("Informe o nome da cidade: ");
    scanf("%s", nomeCidade);
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao);
    printf("Informe a área da cidade: ");
    scanf("%f", &area);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &PIB);
    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &qtdepontoTuristico);

    // Área para entrada de dados da cidade 2
    printf("Escolha o Estado da Carta 2 de A até H: ");
    scanf("%s", estado2);
    printf("Informe o código da carta: ");
    scanf("%s", codCarta2);
    printf("Informe o nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Informe a área da cidade: ");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &PIB2);
    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &qtdepontoTuristico2);

    // Cálculo da densidade populacional

    densidade1 = populacao / area;
    densidade2 = populacao2 / area2;

    // ATRIBUTO ESCOLHIDO PARA COMPARAÇÃO
    // (Neste exemplo: POPULAÇÃO)

    printf("\n=== Comparacao de cartas (Atributo: Populacao) ===\n\n");
    printf("Carta 1 - %s (%s): %d\n", nomeCidade, estado, populacao);
    printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);

    // Comparação das cartas

    if (populacao > populacao2)
    {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade);
    }
    else if (populacao2 > populacao)
    {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }
    else
    {
        printf("\nResultado: Empate!\n");
    }

    // Exibição de cálculos extras

    printf("\n=== Dados Calculados ===\n");

    printf("Carta 1 - Densidade Populacional: %.2f\n", densidade1);
    printf("Carta 1 - PIB per capita: %.2f\n", PIB);

    printf("Carta 2 - Densidade Populacional: %.2f\n", densidade2);
    printf("Carta 2 - PIB per capita: %.2f\n", PIB2);

    // Área para exibição dos dados da cidade

    /*printf("Estado:\n", estado);
    printf("Código:\n", codCarta);
    printf("Nome da Cidade:\n", nomeCidade);
    printf("População:%d\n" + populacao);
    printf("Área:%.2f\n", area);
    printf("PIB:%.2f\n", PIB);
    printf("Pontos Turísticos: %d\n" + qtdepontoTuristico);*/

    return 0;
}
