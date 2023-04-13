/*
    Atividade 4: Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em
                 1000, imprimindo seu valor na tela, até que seu valor seja 100.000 (cem mil).
    Por Luís H.

*/
#include <stdio.h>

int main()
{
    int i;
    int num = 0;
    
    for(i = 1; i <= 100.000; i++)
    {
        num += 1000;
        printf("%d\n", num);
    }
    printf("\n");
    
    return 0;
}
