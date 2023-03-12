/*
   Atividade 30: Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
                 dólares.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float R; //valor em real
    float CD; //cotação do dólar
    float D; //valor em dólares

    printf("Digite o valor em REAIS que deseja: ");
    scanf("%f", &R);

    printf("Agora digite a cotaçao do dolar: ");
    scanf("%f", &CD);

    D =  R * D;

    printf("R$%.2f = US$%.2f\n", R, D);
    return 0;
}
