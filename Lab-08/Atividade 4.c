/*
    Atividade 4: Escreva um programa que contenha duas variáveis inteiras. Leia essas
                 variáveis do teclado. Em seguida, compare seus endereços e exiba o
                 conteúdo do maior endereço.
    Por Luís H.
*/
#include <stdio.h>

int compararEnderecos(int a, int b);
int main()
{
    int a, b;
    
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);
    
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &b);

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
