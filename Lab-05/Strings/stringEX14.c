/*
  	STRINGS
  	
  Atividade 14:  Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N.
                 Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str1[100], str2[100];
  int i, j, n;

  printf("Digite algo para: ");
  fgets(str1, 100, stdin);

  printf("Digite outra coisa tambem: ");
  fgets(str2, 100, stdin);

  printf("Agora digite um valor inteiro: ");
  scanf("%d", &n);

  for(i = 0; str1[i] != '\0'; i++)
  {
      for(j = 0; j < n; j++)
      {
          str1[i + j] = str2[j];
      }
      str1[i + j] = '\0';
  }
  printf("Resultado: %s\n", str1);
}
