#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  estado = char;
  codCarta = char;
  nomeCidade = char;
  populacao = int;
  area = float;
  PIB = float;
  qtdepontoTuristico = int;

  // Área para entrada de dados
  printf("Escolha o Estado da Carta de A até H\n");
  scanf(estado);
  printf("Informe o código da carta\n");
  scanf(codCarta);
  printf("Informe o nome da cidade\n");
  scanf(nomeCidade);
  printf("Informe a população da cidade\n");
  scanf("%i", populacao);
  printf("Informe a área da cidade\n");
  scanf("%f", area)
  printf("Informe o PIB da cidade\n");
  scanf("%f", PIB);
  printf("Informe a quantidade de pontos turísticos\n");
  scanf("%i", qtdepontoTuristico);

  // Área para exibição dos dados da cidade

  printf("Estado: " + estado + "\n");
  printf("Código: " + codigo + "\n");
  printf("Nome da Cidade: " + nomeCidade + "\n");
  printf("População: " + populacao + "\n");
  printf("Área: " + area + "\n");
  printf("PIB: " + PIB + "\n");
  printf("Número de Pontos Turísticos: " + qtdepontoTuristico + "\n");

return 0;
} 
