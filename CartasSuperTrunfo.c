#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int numPtTuristicos1, numPtTuristicos2;
  // Área para entrada de dados
  printf("Digite a populacao da primeira carta: ");
  scanf("%d", &populacao1);

  printf("\nDigite a area da primeira carta: ");
  scanf("%f", &area1);

  printf("\nDigite o pib da primeira carta: ");
  scanf("%f", &pib1);

  printf("\nDigite o numero de pontos turisticos da primeira carta: ");
  scanf("%d", &numPtTuristicos1);

  printf("\nDigite a populacao da segunda carta: ");
  scanf("%d", &populacao2);

  printf("\nDigite a area da segunda carta: ");
  scanf("%f", &area2);

  printf("\nDigite o pib da segunda carta: ");
  scanf("%f", &pib2);

  printf("\nDigite o numero de pontos turisticos da segunda carta: ");
  scanf("%d", &numPtTuristicos2);
  // Área para exibição dos dados da cidade
  

return 0;
} 
