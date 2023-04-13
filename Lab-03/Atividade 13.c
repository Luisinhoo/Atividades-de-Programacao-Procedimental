/*
    Atividade 13: Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos
                  de 3 ou 5.
    Por Luís H.
*/
#include <stdio.h>

int main() 
{
    int i;
    int soma = 0;
    
    for(i = 0; i < 1000; i++)
    {
        if((i % 3 == 0) || (i % 5 == 0)) //divisores de 3 ou 5
        {
            soma += i;
        }
    }
    printf("Soma = %d\n", soma);
    return 0;
}
