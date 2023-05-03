/*
  	STRINGS
  	
  Atividade 13:  Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando
                 que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
                 para a esquerda como da esquerda para a direita.
                         Exemplo:
                                  ovo
                                  arara
                                  Socorram-me, subi no ônibus em Marrocos
                                  Anotaram a data da maratona
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str1[100], str2[100];
  int i, j;
  int palindromo = 1;

  printf("Digite algo: ");
  fgets(str1, 100, stdin);

  for(i = 0; str1[i] != '\0'; i++)
  {
      for (i--, j = 0; i >= 0; i--)
      {
          if((str1[i] >= 'a') && (str1[i] <= 'z') || (str1[i] >= 'A') && (str1[i] <= 'Z'))
          {
              str2[j] = str1[i];
              j++;
          }
      }
  }

  for(i = 0; i < j; i++)
  {
      if((str2[i] != str2[j - i - 1]) && (str2[i] != str2[j - i - 1] + 32) && (str2[i] != str2[j - i - 1] - 32))
      {
          palindromo = 0;
      }
  }

  if(palindromo)
  {
      printf("A string eh um palindromo\n");
  }
  else
  {
      printf("A string nao eh um palindromo\n");
  }
  return 0;
}
