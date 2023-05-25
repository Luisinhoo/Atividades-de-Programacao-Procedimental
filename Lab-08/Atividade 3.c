/*
    Atividade 3: Escreva um programa que contenha duas variáveis inteiras. Compare seus
                 endereços e exiba o maior endereço.
    Por Luís H.
*/
#include <stdio.h>

int compararEnderecos(int a, int b);
int main()
{
    int a, b;

    compararEnderecos(a, b);
    
    return 0;
}

int compararEnderecos(int a, int b)
{
    if(&a > &b)
    {
        printf("&a eh maior que &b\n");
    }
    
    else if(&a < &b)
    {
        printf("&b eh maior que &a\n");
    }
    return 1;
}
