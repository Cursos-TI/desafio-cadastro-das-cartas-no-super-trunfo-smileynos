#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
// Carta 1   
char estado1;
char Codigo1 [50];
char cidade1 [50];
int populacao1;
float area1;
float pib1;
int turisticos1;

// Carta 2
char estado2 [3];
char Codigo2 [50];
char cidade2 [50];
int populacao2;
float area2;
float pib2;
int turisticos2;

// Código carta 1
printf ("Digitie o estado da Carta 1: \n" );
scanf ("%c", &estado1);

printf ("Digitie o Código da carta 1: \n" );
scanf ("%3s", &Codigo1);

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

// Código carta 2
printf ("Digitie o estado da carta 2: \n" );
scanf ("%2c", &estado2);

printf ("Digitie o Código carta 2: \n" );
scanf("%3s", Codigo2);

printf ("Digite o nome da cidade da carta 2: \n");
scanf ("%49s", &cidade2);

printf ("Digite a populacao da carta 2: \n");
scanf ("%d", &populacao2);

printf ("Digite a area da cidade da carta 2 : \n");
scanf ("%f", &area2);

printf ("Digite o PIB da cidade da carta 2: \n");
scanf ("%f", &pib2);

printf ("Digite o numero de ponto turisticos da carta 2: \n");
scanf ("%d", &turisticos2);

// Exibição carta 1
printf("\nCarta 1:\n");
printf ("Estado: %c \n", estado1);
printf ("Código: %s \n", Codigo1);
printf ("Nome da Cidade: %s \n", cidade1);
printf ("População: %d \n", populacao1);
printf ("Area: %.2f km² \n", area1);
printf ("PIB: %.2f bilhões de reais \n", pib1);
printf ("Número de pontos Turísticos: %d \n", turisticos1);

// Exibição carta 2
printf("\nCarta 2:\n");
printf ("Estado: %c \n", estado2);
printf ("Código: %s \n", Codigo2);
printf ("Nome da Cidade: %s \n", cidade2);
printf ("População: %d \n", populacao2);
printf ("Area: %.2f km² \n", area2);
printf ("PIB: %.2f bilhões de reais \n", pib2);
printf ("Número de pontos Turísticos: %d \n", turisticos2);
    
return 0;

}
