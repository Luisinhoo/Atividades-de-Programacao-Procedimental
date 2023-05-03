/*
  	STRINGS
  	
  Atividade 6: Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia
               32 dos caracteres cujo código ASCII está entre 97 e 122.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str[100];
  int i;

  printf("Digite algo: ");
  fgets(str, 100, stdin);
  for(i = 0; str[i] != '\0'; i++)
  {
      if((str[i] >= 'a') && (str[i] <= 'z'))
      {
          str[i] -= 32;
      }
  }
  printf("Em MAIUSCULO FICA: %s\n", str);
  return 0;
}
