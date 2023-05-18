/*
   Atividade 12: Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe
                e seu valor). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores,
                considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos
                jogadores recebeu.
   Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Num_Cartas 3
#define JOGADORES 2

struct Carta
{
  char naipe[10];
  char valor[1];
};
typedef struct Carta Carta;

int main()
{
  srand(time(NULL));

  char *NAIPES[4] = {"Paus", "Copas", "Espadas", "Ouros"};
  char *VALORES[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
  int i, j;

  for(j = 1; j <= JOGADORES; j++)
  {
    printf("Jogador %d:\n", j);
    for(i = 1; i <= Num_Cartas; i++)
    {
      printf("Carta %d: %s de %s\n", i, VALORES[rand() % 13], NAIPES[rand() % 4]);
    }
    printf("\n");
  }
  return 0;
}
