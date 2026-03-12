#include <stdio.h>

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
signed long int populacao;
int numero_de_pontos_turisticos;
char estado[50], codigo_da_carta[50], nome_da_cidade[50];
float area_em_km², pib;
float pib_per_capital, densidade_populacional, super_poder;

// *** Área para entrada de dados carta 1
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

// *** calculo ***//
densidade_populacional = populacao / area_em_km²;
printf("Densidade populacional: %f\n", densidade_populacional);

pib_per_capital = pib / populacao;
printf("Pib per capital: %f\n", pib_per_capital);

super_poder = (float) + area_em_km² + pib + numero_de_pontos_turisticos + pib_per_capital + densidade_populacional;
printf("Super poder: %f\n ", super_poder);

// *** Área para entrada de dados carta 2
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

// *** calculo ***//
densidade_populacional = populacao / area_em_km²;
printf("Densidade populacional: %f\n", densidade_populacional);

pib_per_capital = pib / populacao;
printf("Pib per capital: %f\n", pib_per_capital);

super_poder = (float) + area_em_km² + pib + numero_de_pontos_turisticos + pib_per_capital + densidade_populacional;
printf("Super poder: %f\n ", super_poder);

return 0;
} 