#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
float calcularDensidadePopulacional(int populacao, float areaCidade);
float calcularPibPerCapita(float pib, int populacao);
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int numPtTuristicos1, numPtTuristicos2;
  float densidadePopulacional1, densidadePopulacional2;
  float pibPerCapita1, pibPerCapita2;
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
  densidadePopulacional1 = calcularDensidadePopulacional(populacao1, area1);
  densidadePopulacional2 = calcularDensidadePopulacional(populacao2, area2);

  pibPerCapita1 = calcularPibPerCapita(pib1, populacao1);
  pibPerCapita2 = calcularPibPerCapita(pib2, populacao2);

  printf("\n--- Primeira Carta ---\n");
  printf("População: %d\n", populacao1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", numPtTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f\n", pibPerCapita1);

  printf("\n--- Segunda Carta ---\n");
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numPtTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f\n", pibPerCapita2);

  return 0;
} 

float calcularDensidadePopulacional(int populacao, float areaCidade){
  return  populacao / areaCidade;
}

float calcularPibPerCapita(float pib, int populacao){
  return pib / populacao;
}