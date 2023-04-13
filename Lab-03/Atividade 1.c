/*
    Atividade 1: Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
                 números maiores que 0.
    Por Luís H.

*/
#include <stdio.h>

int main()
{
    int multiplos = 0;
    int i;

    for(i = 1; i <= 5; i++) //i =  1 para contar somente os cinco primeiros números
    {
        multiplos += 3;
        printf("%d ", multiplos);
    }
    return 0;
}
