#include <stdio.h>

int main () {

// Carta 1   
char estado1;
char Codigo1 [50];
char cidade1 [50];
int populacao1;
float area1;
float pib1;
int turisticos1;
float densidade1;
float capita1 = (float) pib1 / populacao1;

// Carta 2
char estado2 [3];
char Codigo2 [50];
char cidade2 [50];
int populacao2;
float area2;
float pib2;
int turisticos2;
float densidade2;
float capita2;

// Código carta 1
printf ("Digitie o estado da Carta 1(A-H): \n" );
scanf ("%c", &estado1);

printf ("Digitie o Código da carta 1 (ex: A01): \n" );
scanf ("%s", &Codigo1);

printf ("Digite o nome da cidade da carta 1: \n");
scanf ("%49s", &cidade1);

printf ("Digite a populacao da carta 1: \n");
scanf ("%d", &populacao1);

printf ("Digite a area da cidade da carta 1 : \n");
scanf ("%f", &area1);

printf ("Digite o PIB da cidade da carta 1: \n");
scanf ("%f", &pib1);

printf ("Digite o numero de ponto turisticos da carta 1: \n");
scanf ("%d", &turisticos1);

densidade1 = populacao1 / area1;
capita1 = pib1 / populacao1;

// Código carta 2
printf ("Digitie o estado da carta 2(A-H): \n" );
scanf ("%2S", &estado2);

printf ("Digitie o Código carta 2 (ex: A01): \n" );
scanf("%3s", Codigo2);

printf ("Digite o nome da cidade da carta 2: \n");
scanf ("%49s", &cidade2);

printf ("Digite a populacao da carta 2: \n");
scanf ("%d", &populacao2);

printf ("Digite a area da cidade da carta 2 : \n");
scanf ("%f", &area2);

printf ("Digite o PIB da cidade da carta 2: \n");
scanf ("%f", &pib2);

printf ("Digite o numero de ponto turisticos da carta 1: \n");
scanf ("%d", &turisticos2);

densidade2 = populacao2 / area2;
capita2 = pib2 / populacao2;

//  carta 1
printf("\ninformacoes da carta 1:\n");
printf ("Estado: %c \n", estado1);
printf ("Código: %s \n", Codigo1);
printf ("Nome da Cidade: %s \n", cidade1);
printf ("População: %d \n", populacao1);
printf ("Area: %.2f km² \n", area1);
printf ("PIB:  %.2f bilhões de reais \n", pib1);
printf ("Número de pontos Turísticos: %d \n", turisticos1);
printf ("Densidade Populacional: %.2f km² \n", densidade1);
printf ("PIB por Capita: %.2F reais \n", capita1);

// Exibição carta 2
printf("\ninformacoes da carta 2:\n");
printf ("Estado: %c \n", estado2);
printf ("Código: %s \n", Codigo2);
printf ("Nome da Cidade: %s \n", cidade2);
printf ("População: %d \n", populacao2);
printf ("Area: %.2f km² \n", area2);
printf ("PIB:  %.2f bilhões de reais \n", pib2);
printf ("Número de pontos Turísticos: %d \n", turisticos2);
printf ("Densidade Populacional: %.2f km² \n", densidade2);
printf ("PIB por Capita: %.2f reais \n", capita2);

return 0;

}