#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int populacao, numero_de_pontos_turisticos;
char estado[50], codigo_da_carta[50], nome_da_cidade[50];
float area_em_km², pib;
  
// Área para entrada de dados carta 1
printf("Cadastro carta 1 \n");

printf("Digite o codigo da carta: \n");
scanf("%s", &codigo_da_carta);

printf("Digite o estado: \n");
scanf("%s", &estado);

printf("Digite o nome da cidade: \n");
scanf("%s", &nome_da_cidade);

printf("Qual a população: \n");
scanf("%d", &populacao);

printf("Qual o numero de pontos turistico: \n");
scanf("%d", &numero_de_pontos_turisticos);

printf("Digite o pib: \n");
scanf("%f", &pib);

printf("Digite o km²: \n");
scanf("%f", &area_em_km²);

printf("Codigo da carta: %s\n  Estado: %s\n  Cidade: %s\n", codigo_da_carta, estado, nome_da_cidade);
printf("População: %d\n  Pontos turisticos: %d\n  Pib: %f\n  Area km²: %f\n", populacao, numero_de_pontos_turisticos, pib, area_em_km²);

// Área para entrada de dados carta 2
printf("Cadastro carta 2\n");

printf("Digite o codigo da carta: \n");
scanf("%s", &codigo_da_carta);

printf("Digite o estado: \n");
scanf("%s", &estado);

printf("Digite o nome da cidade: \n");
scanf("%s", &nome_da_cidade);

printf("Qual a população: \n");
scanf("%d", &populacao);

printf("Qual o numero de pontos turistico: \n");
scanf("%d", &numero_de_pontos_turisticos);

printf("Digite o pib: \n");
scanf("%f", &pib);

printf("Digite o km²: \n");
scanf("%f", &area_em_km²);

printf("Codigo da carta: %s\n  Estado: %s\n  Cidade: %s\n", codigo_da_carta, estado, nome_da_cidade);
printf("População: %d\n  Pontos turisticos: %d\n  Pib: %f\n  Area km²: %f\n", populacao, numero_de_pontos_turisticos, pib, area_em_km²);

return 0;
} 