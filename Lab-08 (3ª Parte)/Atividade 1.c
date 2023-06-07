/*
    Atividade 1: Faça um programa que leia 2 valores inteiros e chame uma função que
                 receba estas 2 variáveis e troque o seu conteúdo, i.e., esta função é
                 chamada passando duas variáveis A e B, por exemplo, e após a execução da
                 função, A conterá o valor de B e B terá o valor de A. Imprima os valores
                 antes e depois da troca.
    Por Luís H.

*/
#include <stdio.h>

int trocarValores(int *a, int *b);
int main()
{
    int a, b;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &a);

    printf("Agora digite um outro numero inteiro qualquer: ");
    scanf("%d", &b);

    trocarValores(&a, &b);

    printf("\nO conteudo dessas variaveis trocadas eh:\n");
    printf("A = %d\nB = %d\n", a, b);
    return 0;
}

int trocarValores(int *a, int *b)
{
    int t;//para a troca dos valores
    
    t = *a;
    *a = *b;
    *b = t;
    return t;
}
