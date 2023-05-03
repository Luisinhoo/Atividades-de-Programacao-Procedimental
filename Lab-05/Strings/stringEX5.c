/*
  	STRINGS
  	
  Atividade 5: Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras
               minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.
  POR LUÍS.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str[100];
  int i;

  printf("Digite algo em MAIUSCULO: ");
  fgets(str, 100, stdin);

  for(i = 0; str[i] != '\0'; i++)
  {
      if((str[i] >= 'A') && (str[i] <= 'Z'))
      {
          str[i] += 32;
      }
  }
  printf("Em MINUSCULO: %s\n", str);
  return 0;
}
