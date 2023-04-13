/*
    Atividade 2: Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
                 deve usar a estrutura de repetição for, a segunda while, e a terceira do-while.
    Por Luís H.

*/
#include <stdio.h>

int main()
{
    int i;
    
    //usando a estrutura de repetição "for"
    printf("Utilizando o FOR:\n");
    for(i = 1; i <= 100; i++)
    {
        printf("%d \n",i);
    }
    printf("\n");
    
    //usando a estrutura de repetição "while"
    printf("Utilizando o WHILE:\n");
    i = 1;
    while(i <= 100)
    {
        printf("%d\n", i++);
    }
    printf("\n");
    
    //usando a estrutura de repetição "do while"
    printf("Utilizando o DO WHILE:\n");
    i = 1;
    do
    {
        printf("%d\n", i++);
    }
    while(i <= 100);
    printf("\n");
    
    return 0;
}
