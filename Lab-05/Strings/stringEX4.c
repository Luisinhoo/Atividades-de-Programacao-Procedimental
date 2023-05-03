/*
  	STRINGS
  	
  Atividade 4: Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa
               palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra
               dada por esse caractere
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[100];
  int i, j;
  int contador = 0;

  printf("Digite algo: ");
  fgets(str, 100, stdin);
  scanf("%c", &j);
  for(i = 0; str[i] != '\0'; i++)
  {
      if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
      {
          str[i] = j;
          contador++;
      }
  }
  printf("A quantidade de vogais eh: %d\n", contador);
  printf("%s", str);
}
