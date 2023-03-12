/*
   Atividade 37: Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
                 em vista que o desconto foi de 12%
   Por Luís H.
*/
#include <stdio.h>

int main ()
{
    float val; //valor do produto
    float vald; //valor do produto com desconto
    float desc = 0.12; //desconto

    printf("Digite o VALOR DO PRODUTO: R$");
    scanf("%f", &val);

    vald = val * desc;

    printf("O valor do produto COM DESCONTO eh: R$%.2f\n", vald);
    return 0;
}
