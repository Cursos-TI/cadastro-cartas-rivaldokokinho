#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int populacao, numero_de_pontos_turisticos;
char estado[50], codigo_da_carta[50], nome_da_cidade[50];
float area_em_km², pib;
  
// Área para entrada de dados

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


  // Área para exibição dos dados da cidade

return 0;
} 
