/*
  	STRINGS
  	
 Atividade 8: Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
              uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.
 POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str[100];
  char L1, L2;
  int i;

  printf("Digite algo: ");
  fgets(str, 100, stdin);

  printf("Digite o L1 e L2: ");
  scanf("%c %c", &L1, &L2); //L1 e L2 não são strings, por isso o %c e o &

  for(i = 0; str[i] != '\0'; i++)
  {
      if(str[i] == L1)
      {
          str[i] = L2;
      }
  }
  printf("Resultado: %s\n", str);
  return 0;
}
