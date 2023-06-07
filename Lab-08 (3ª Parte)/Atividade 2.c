/*
    Atividade 2: Faça um programa que leia dois valores inteiros e chame uma função que
                 receba estes 2 valores de entrada e retorne o maior valor na primeira
                 variável e o menor valor na segunda variável. Escreva o conteúdo das 2
                 variáveis na tela.
    Por Luís H.
*/
#include <stdio.h>

int compararValores(int *a, int *b);
int main()
{
    int a, b;

    printf("Digite um valor inteiro qualquer: ");
    scanf("%d", &a);

    printf("Agora digite um outro valor inteiro qualquer: ");
    scanf("%d", &b);

    compararValores(&a, &b);

    printf("O maior valor eh: %d\n", a);
    printf("O menor valor eh: %d\n", b);
    return 0;
}

int compararValores(int *a, int *b)
{
    int t;

    if(*b > *a)
    {
        t = *a;
        *a = *b;
        *b = t;
    }
    return t;
}
