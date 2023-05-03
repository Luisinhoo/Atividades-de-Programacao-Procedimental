/*
  	STRINGS
  	
  Atividade 3: Faça um programa que receba uma palavra e a imprima de trás-para-frente.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char string[40];
	int i;

	printf("Digite uma palava qualquer: ");
    scanf("%s", string);

	printf("De tras para frente fica:\n");

	for(i = strlen(string)-1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
	printf("\n\n");

	return 0;
}
