#include <stdio.h>


int main () {

// Carta 1   
char estado1;
char Codigo1 [07] ;
char cidade1 [50];
int populacao1 = 12325000;
float area1 = 1521.11;
float pib1 = 699280000000;
int turisticos1 = 50 ;
float densidade1 = populacao1 / area1;
float capita1 = (float) pib1 / populacao1;;
double superpoder1 = (long double) (populacao1 + area1 + pib1 + turisticos1);


// Código carta 1
printf ("Digitie o estado da Carta 1(A-H): \n" );
scanf ("%c", &estado1);

printf ("Digitie o Código da carta 1 (ex: A01): \n" );
scanf ("%s", &Codigo1);

printf ("Digite o nome da cidade da carta 1: \n");
scanf ("%49s", &cidade1);


// Carta 2
char estado2;
char Codigo2 [07];
char cidade2 [50];
int populacao2 = 6748000; 
float area2 = 1200.25;
float pib2 = 300500000000;
int turisticos2 = 30;
float densidade2 = populacao2 / area2;
float capita2 =  (float) pib1 / populacao1;
double superpoder2 = (populacao2 + area2 + pib2 + turisticos2);
float resultado1 = densidade1 > densidade2;
float resultado2 = densidade2 < densidade2;

// Código carta 2
printf ("Digitie o estado da carta 2(A-H): \n" );
scanf ("%2S", &estado2);

printf ("Digitie o Código carta 2 (ex: A01): \n" );
scanf("%3s", Codigo2);

printf ("Digite o nome da cidade da carta 2: \n");
scanf ("%49s", &cidade2);


// Exibição carta 1
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
printf ("Super poder carta 1 : %.2f\n", superpoder1);

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
printf ("Super poder carta 2 : %.2f\n", superpoder2);

// Comparações de carta 
printf("\nComparações:\n");
printf ("Poupulação carta 1 é maior que a população da carta 2? %d\n",  populacao1 > populacao2);
printf ("Area carta 1 é maior que a Area da carta 2? %d\n", area1 > area2);
printf ("PIB carta 1 é maior que a PIB da carta 2? %d\n", pib1 > pib2);
printf ("Ponto Turísticos da carta 1 é maior que o Ponto Turísticos da carta 2? %d\n", turisticos1 > turisticos2);
printf ("Densidade Populacional da carta 1 é menor que a Densidade Populaciona da carta 2? %d\n",densidade1 < densidade2 );
printf ("Pib por Capita da carta 1 é maior que o Pib por Capita da carta 2? %d\n", capita1 > capita2);
printf ("Super Poder  da Carta 1 é maior que o Super poder da carta 2? %d\n", superpoder1 > superpoder2);

return 0;

}