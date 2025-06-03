#include <stdio.h>

int main() {
  // Declaração das variáveis que serão utilizadas para armazenar os dados das duas cartas
  int populacao_1, num_pontos_turisticos_1;
  char estado_1, cod_estado_1[3], nome_cidade_1[20];
  float area_1, pib_1;  
  
  int populacao_2, num_pontos_turisticos_2;
  char estado_2, cod_estado_2[3], nome_cidade_2[20];
  float area_2, pib_2;

  printf("\nOla! Pronto para cadastrar suas primeiras cartas?\n\n");
  printf("Vamos comecar!\n\n");
  
  // Coleta de dados da primeira carta
  printf("Digite a inicial do estado da primeira carta:\n");
  scanf(" %c", &estado_1);
  printf("Digite o codigo do estado da primeira carta:\n");
  scanf("%s", cod_estado_1);
  printf("Digite o nome da cidade da primeira carta:\n");
  scanf("%s", nome_cidade_1);
  printf("Digite a populacao da primeira carta:\n");
  scanf("%d", &populacao_1);
  printf("Digite a area da primeira carta:\n");
  scanf("%f", &area_1);
  printf("Digite o PIB da primeira carta:\n");
  scanf("%f", &pib_1);
  printf("Digite o numero de pontos turisticos da primeira carta:\n");
  scanf("%d", &num_pontos_turisticos_1);

  printf("\nPronto! A primeira carta foi cadastrada!\n\n");
  printf("Agora vamos cadastrar a segunda carta!\n\n");
  
  // Coleta de dados da segunda carta
  printf("Digite a inicial do estado da segunda carta:\n");
  scanf(" %c", &estado_2);
  printf("Digite o codigo do estado da segunda carta:\n");
  scanf("%s", cod_estado_2);
  printf("Digite o nome da cidade da segunda carta:\n");
  scanf("%s", nome_cidade_2);
  printf("Digite a populacao da segunda carta:\n");
  scanf("%d", &populacao_2);
  printf("Digite a area da segunda carta:\n");
  scanf("%f", &area_2);
  printf("Digite o PIB da segunda carta:\n");
  scanf("%f", &pib_2);
  printf("Digite o numero de pontos turisticos da segunda carta:\n");
  scanf("%d", &num_pontos_turisticos_2);

  printf("\nPronto! As duas cartas foram cadastradas!\n\n");
  printf("Dados das cartas cadastradas:\n\n");

  // Exibição dos dados das cartas cadastradas
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado_1);
  printf("Codigo do estado: %s\n", cod_estado_1);
  printf("Nome da cidade: %s\n", nome_cidade_1);
  printf("Populacao: %d\n", populacao_1);
  printf("Area: %.2f\n", area_1);
  printf("PIB: %.2f\n", pib_1);
  printf("Numero de pontos turisticos: %d\n", num_pontos_turisticos_1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado_2);
  printf("Codigo do estado: %s\n", cod_estado_2);
  printf("Nome da cidade: %s\n", nome_cidade_2);
  printf("Populacao: %d\n", populacao_2);
  printf("Area: %.2f\n", area_2);
  printf("PIB: %.2f\n", pib_2);
  printf("Numero de pontos turisticos: %d\n", num_pontos_turisticos_2);

  printf("\nCartas cadastradas com sucesso!\n");
  
  return 0;
}