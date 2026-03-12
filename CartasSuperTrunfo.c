#include <stdio.h>

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
unsigned long int populacao, populacao1;
int numero_de_pontos_turisticos,  numero_de_pontos_turisticos1;
char estado[50], estado1[50], codigo_da_carta[50], codigo_da_carta1[50], nome_da_cidade[50], nome_da_cidade1[50];
float area_em_km², area_em_km²1, pib, pib1;
float pib_per_capital, pib_per_capital1, densidade_populacional, densidade_populacional1, super_poder, super_poder1;
int resultado;
// *** Área para entrada de dados carta 1
printf("Cadastro carta 1 \n");

printf("Digite o codigo da carta: \n");
scanf("%s", &codigo_da_carta);

printf("Digite o estado: \n");
scanf("%s", &estado);

printf("Digite o nome da cidade: \n");
scanf("%s", &nome_da_cidade);

printf("Qual a população: \n");
scanf("%lu", &populacao);

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
scanf("%s", &codigo_da_carta1);

printf("Digite o estado: \n");
scanf("%s", &estado1);

printf("Digite o nome da cidade: \n");
scanf("%s", &nome_da_cidade1);

printf("Qual a população: \n");
scanf("%lu", &populacao1);

printf("Qual o numero de pontos turistico: \n");
scanf("%d", &numero_de_pontos_turisticos1);

printf("Digite o pib: \n");
scanf("%f", &pib1);

printf("Digite o km²: \n");
scanf("%f", &area_em_km²1);

printf("Codigo da carta: %s\n  Estado: %s\n  Cidade: %s\n", codigo_da_carta1, estado1, nome_da_cidade1);
printf("População: %d\n  Pontos turisticos: %d\n  Pib: %f\n  Area km²: %f\n", populacao1, numero_de_pontos_turisticos1, pib1, area_em_km²1);

// *** calculo ***//
densidade_populacional1 = populacao1 / area_em_km²1;
printf("Densidade populacional: %f\n", densidade_populacional1);

pib_per_capital1 = pib1 / populacao1;
printf("Pib per capital: %f\n", pib_per_capital1);

super_poder1 = (float) + area_em_km²1 + pib1 + numero_de_pontos_turisticos1 + pib_per_capital1 + densidade_populacional1;
printf("Super poder: %f\n ", super_poder1);

//           COMPARACAO DE CARTAS                 //
populacao1 > populacao;
numero_de_pontos_turisticos1 > numero_de_pontos_turisticos;
area_em_km²1 > area_em_km²;
pib1 > pib;
densidade_populacional1 < densidade_populacional;
pib_per_capital1 > pib_per_capital;
super_poder1 > super_poder;


return 0;
} 