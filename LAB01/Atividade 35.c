/*
   Atividade 35: Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
                 ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎² + b². Faça um programa que receba os valores de a e b e calcule o valor da
                 hipotenusa através da equação. Imprima o resultado dessa operação.
   Por Luís H.
*/
#include <stdio.h>
#include <math.h> //biblioteca que possui a função sqrt().

int main()
{
    float a; //cateto oposto
    float b; //cateto adjacente
    float h; //hipotenusa

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Agora digite o valor de b: ");
    scanf("%f", &b);

    h = sqrt((a * a) + (b * b));

    printf("O valor da hipotenusa eh: %.f\n", h);

    return 0;
}
