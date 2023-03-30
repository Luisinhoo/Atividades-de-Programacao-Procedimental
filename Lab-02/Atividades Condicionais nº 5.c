/*
    Atividade 5:  Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    if(num % 2 == 0) // utilianzo o operador de módulo % para verificr se é par, se for par retorn 0, se for ímpar 1
    {
        printf("%d eh par!", num);
    }

    else
    {
        printf("%d eh impar!", num);
    }
    return 0;
}
