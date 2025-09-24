#include <stdio.h>

int main(){

// Variáveis Carta1

char estado;
char codigo[6];
char cidade[50];
int populacao;
float area;
float PIB;
int pontosturisticos;

printf("---Dados da Carta 1--- \n");

// --- Início da Leitura Interativa ---
printf("Digite o Estado (A-H): ");
scanf(" %c", &estado);

printf("Digite o Código da carta(ex:A01): ");
scanf(" %s", codigo);

printf("Digite o Nome da cidade: ");
scanf(" %[^\n]", cidade);

printf("Digite a População: ");
scanf(" %d", &populacao);

printf("Digite a Àrea (em km²): ");
scanf(" %f", &area);

printf("Digite o PIB: ");
scanf(" %f", &PIB);

printf("Digite os Pontos Turísticos: ");
scanf(" %d", &pontosturisticos);

// --- Início da Exibição dos Dados Lidos ---

 printf("\n--- Exibindo Dados da Carta 1 ---\n");
 printf("Estado: %c\n", estado);
 printf("Código: %s\n", codigo);
 printf("Nome da cidade: %s\n", cidade);
 printf("População: %d\n", populacao);
 printf("Àrea: %.2fkm²\n", area);
 printf("PIB: %.2fmilhões de reais\n", PIB);
 printf("Pontos Turísticos: %d\n", pontosturisticos);

 // Variáveis Carta2
 char estado2;
 char codigo2[6];
 char cidade2[50];
 int populacao2;
 float area2;
 float PIB2;
 int pontosturisticos2;

 printf(" \n--- Exibindo Dados da Carta 2 ---\n");

 // --- Início da Leitura Interativa ---
 printf("Digite o Estado (A-H): ");
 scanf(" %c", &estado2);

 printf("Digite o Código (ex:A02): ");
 scanf(" %s", codigo2);

 printf("Digite o Nome da cidade: ");
 scanf(" %[^\n]", cidade2);

 printf("Digite a População: ");
 scanf(" %d", &populacao2);

 printf("Digite a Àrea (em km²): ");
 scanf(" %f", &area2);

 printf("Digite o PIB: ");
 scanf(" %f", &PIB2);

 printf("Digite os Pontos Turísticos: ");
 scanf(" %d", &pontosturisticos2);

 // --- Início de Exibição de Dados Lidos ---
 printf("\n--- Exibindo Dados da Carta 2 ---\n");
 printf("Estado: %c\n", estado2);
 printf("Código: %s\n", codigo2);
 printf("Nome da cidade: %[^\n]", cidade2);
 printf("População: %d\n", populacao2);
 printf("Àrea: %f\n", area2);
 printf("PIB: %f\n", PIB2);
 printf("Pontos Turísticos: %d\n", pontosturisticos2);

return 0;
}