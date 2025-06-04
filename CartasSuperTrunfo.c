#include <stdio.h>

void captura_dados_carta(
  char num_carta,
  int *populacao,
  int *num_pontos_turisticos,
  char *estado,
  char *cod_estado,
  char *nome_cidade,
  float *area,
  float *pib
) {
  printf("Digite a inicial do estado da carta %c:\n", num_carta);
  scanf(" %c", estado);
  printf("Digite o codigo do estado da carta %c:\n", num_carta);
  scanf("%s", cod_estado);
  printf("Digite o nome da cidade da carta %c:\n", num_carta);
  scanf("%s", nome_cidade);
  printf("Digite a populacao da carta %c:\n", num_carta);
  scanf("%d", populacao);
  printf("Digite a area da carta %c:\n", num_carta);
  scanf("%f", area);
  printf("Digite o PIB em bilhões de reais da carta %c:\n", num_carta);
  scanf("%f", pib);
  printf("Digite o numero de pontos turisticos da carta %c:\n", num_carta);
  scanf("%d", num_pontos_turisticos);
}

float calcula_densidade_populacional(int populacao, float area) {
  float resultado = (float) populacao / area;
  return resultado;
}

float calcula_pib_per_capita(float pib, int populacao) {
  float resultado = (float) pib * 1e9 / populacao;
  return resultado;
}

void exibe_dados_carta(
  char estado,
  char *cod_estado,
  char *nome_cidade,
  int populacao,
  float area,
  float pib,
  int num_pontos_turisticos,
  float densidade_populacional,
  float pib_per_capita
) {
  printf("Estado: %c\n", estado);
  printf("Codigo do estado: %s\n", cod_estado);
  printf("Nome da cidade: %s\n", nome_cidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Numero de pontos turisticos: %d\n", num_pontos_turisticos);
  printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);  
  printf("PIB per capita: %.2f reais\n", pib_per_capita);
}
  
int main() {
  int populacao_1, num_pontos_turisticos_1;
  char estado_1, cod_estado_1[3], nome_cidade_1[20];
  float area_1, pib_1, densidade_populacional_1, pib_per_capita_1;
  
  int populacao_2, num_pontos_turisticos_2;
  char estado_2, cod_estado_2[3], nome_cidade_2[20];
  float area_2, pib_2, densidade_populacional_2, pib_per_capita_2;

  printf("\nOla! Pronto para cadastrar suas primeiras cartas?\n\n");
  printf("Vamos comecar!\n\n");
  
  captura_dados_carta(
    '1',
    &populacao_1,
    &num_pontos_turisticos_1,
    &estado_1,
    cod_estado_1,
    nome_cidade_1,
    &area_1,
    &pib_1
  );
  
  printf("\nPronto! A primeira carta foi cadastrada!\n\n");
  printf("Agora vamos cadastrar a segunda carta!\n\n");
  
  captura_dados_carta(
    '2',
    &populacao_2,
    &num_pontos_turisticos_2,
    &estado_2,
    cod_estado_2,
    nome_cidade_2,
    &area_2,
    &pib_2
  );

  densidade_populacional_1 = calcula_densidade_populacional(populacao_1, area_1);
  pib_per_capita_1 = calcula_pib_per_capita(pib_1, populacao_1);

  densidade_populacional_2 = calcula_densidade_populacional(populacao_2, area_2);
  pib_per_capita_2 = calcula_pib_per_capita(pib_2, populacao_2);

  printf("\nPronto! As duas cartas foram cadastradas!\n\n");
  printf("Dados das cartas cadastradas:\n\n");

  printf("Carta 1:\n");
  exibe_dados_carta(
    estado_1,
    cod_estado_1,
    nome_cidade_1,
    populacao_1,
    area_1,
    pib_1,
    num_pontos_turisticos_1,
    densidade_populacional_1,
    pib_per_capita_1
  );
  
  printf("\nCarta 2:\n");
  exibe_dados_carta(
    estado_2,
    cod_estado_2,
    nome_cidade_2,
    populacao_2,
    area_2,
    pib_2,
    num_pontos_turisticos_2,
    densidade_populacional_2,
    pib_per_capita_2
  );

  printf("\nCartas cadastradas com sucesso!\n");
  
  return 0;
}