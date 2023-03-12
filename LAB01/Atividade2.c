/*
   Faça um programa que leia um número real e o imprima.
   Por Luís H.
*/
#include <stdio.h>

int main()
{
    float num; //numero real

    printf("Digite um numero real: ");
    scanf("%f", &num);

    printf("O numero digitado foi: %.2f\n", num);

    return 0;
}
