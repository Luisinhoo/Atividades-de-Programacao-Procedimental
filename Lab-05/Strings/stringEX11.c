/*
  	STRINGS
  	
  Atividade 11: Escreva um programa que recebe uma string S e inteiros não-negativos I e J e imprima o segmento S[I..J].
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str[100];
  int i, j;

  fgets(str, 100, stdin);
  scanf("%d %d", &i, &j);

  for( ; i <= j; i++)
  {
      printf("%c", str[i]);
  }
  printf("\n");
  return 0;
}
