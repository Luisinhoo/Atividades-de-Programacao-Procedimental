/*
   Atividade 23:  Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de
                  conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float M; //comprimento em metros
    float J; //comprimento em jardas

    printf("Digite um comprimento em METROS: ");
    scanf("%f", &M);

    J = M / 0.91;

    printf("Esse comprimento em JARDAS eh: %.2f\n", J);
    return 0;
}
