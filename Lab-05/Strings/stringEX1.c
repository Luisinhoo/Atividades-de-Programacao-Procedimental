/*
  	STRINGS
  	
  Atividade 1: Faça um programa que leia uma string e a imprima.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[200];

    printf("Digite algo: ");
    scanf("%s", string);

    printf("O que voce digitou eh: %s\n", string);
    return 0;
}
