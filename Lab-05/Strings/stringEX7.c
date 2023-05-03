/*
  	STRINGS
  	
  Atividade 7:  Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
                espaços em branco do vetor e depois escrever o vetor resultante.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char vet[200];
  int i, j;

  fgets(vet, 100, stdin);
  for(i = 0; vet[i] != '\0'; i++)
  {
      for(j = 0; vet[i] != '\0'; j++)
      {
          if (vet[i] != ' ');
          {
              vet[j] = vet[i];
              j++;
          }
      }
  }
  vet[j] = '\0';

  printf("Retirando os espacos em branco: %s\n", vet);
  return 0;
}
