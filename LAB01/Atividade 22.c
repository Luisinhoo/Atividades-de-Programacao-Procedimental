/*
  Atividade 22:  Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
                 conversão é: M = 0.91*J, sendo J o comprimento em jardas e M o comprimento em metros.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float J; //comprimento em jardas
    float M; //comprimento em metros

    printf("Digite um comprimento em JARDAS: ");
    scanf("%f", &J);

    M = 0.91 * J;

    printf("Esse comprimento em METROS eh: %.2f\n", M);
    return 0;
}
