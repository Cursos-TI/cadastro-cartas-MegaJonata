#include <stdio.h>
#include <string.h>

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[10] = "A";
    char codCarta[10] = "A1";
    char nomeCidade[30] = "Aracaju";
    int populacao = 600000;
    float area = 330000;
    float PIB = 10.4;
    int qtdepontoTuristico = 20;

    char estado2[10] = "B";
    char codCarta2[10] = "B1";
    char nomeCidade2[30] = "Salvador";
    int populacao2 = 1000000;
    float area2 = 500000;
    float PIB2 = 15.1;
    int qtdepontoTuristico2 = 40;

    float densidade1, densidade2;
    int opcao;

    // Cálculo da densidade populacional

    densidade1 = populacao / area;
    densidade2 = populacao2 / area2;

    // MENU INTERATIVO
    printf("=== SUPER TRUNFO - COMPARACAO DE CIDADES ===\n\n");

    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARACAO ===\n\n");

    // SWITCH PARA ESCOLHA DO ATRIBUTO   
    switch (opcao)
    {
    case 1: // POPULAÇÃO
        printf("Atributo: Populacao\n\n");
        printf("%s: %d\n", nomeCidade, populacao);
        printf("%s: %d\n\n", nomeCidade2, populacao2);

        if (populacao > populacao2)
        {
            printf("Vencedor: %s\n", nomeCidade);
        }
        else if (populacao2 > populacao)
        {
            printf("Vencedor: %s\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 2: // AREA
        printf("Atributo: Area\n\n");
        printf("%s: %.2f\n", nomeCidade, area);
        printf("%s: %.2f\n\n", nomeCidade2, area2);

        if (area > area2)
        {
            printf("Vencedor: %s\n",nomeCidade);
        }
        else if (area2 > area)
        {
            printf("Vencedor: %s\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 3: // PIB
        printf("Atributo: PIB\n\n");
        printf("%s: %.2f\n",nomeCidade, PIB);
        printf("%s: %.2f\n\n", nomeCidade2, PIB2);

        if (PIB > PIB2)
        {
            printf("Vencedor: %s\n",nomeCidade);
        }
        else if (PIB2 > PIB)
        {
            printf("Vencedor: %s\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 4: // PONTOS TURÍSTICOS
        printf("Atributo: Pontos Turisticos\n\n");
        printf("%s: %d\n",nomeCidade, qtdepontoTuristico);
        printf("%s: %d\n\n", nomeCidade2, qtdepontoTuristico2);

        if (qtdepontoTuristico > qtdepontoTuristico2)
        {
            printf("Vencedor: %s\n",nomeCidade);
        }
        else if (qtdepontoTuristico > qtdepontoTuristico2)
        {
            printf("Vencedor: %s\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 5: // DENSIDADE DEMOGRÁFICA (REGRA INVERTIDA)
        printf("Atributo: Densidade Demografica\n\n");
        printf("%s: %.2f\n",nomeCidade, densidade1);
        printf("%s: %.2f\n\n", nomeCidade2, densidade2);

        // regra especial: menor valor vence
        if (densidade1 < densidade2)
        {
            printf("Vencedor: %s\n",nomeCidade);
        }
        else if (densidade2 < densidade1)
        {
            printf("Vencedor: %s\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    default:
        printf("Opcao invalida! Escolha um numero entre 1 e 5.\n");
    }
    return 0;
}
