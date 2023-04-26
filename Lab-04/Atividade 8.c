/*
  Atividade 8: Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação:
               hipotenusa = √𝑎² + 𝑏². Faça uma função que receba os valores de a e b e calcule o valor
               da hipotenusa através da equação.
  Por Luís H.
*/
#include <stdio.h>
#include <math.h>

int valorHipotenusa (int a, int b);

int main()
{
    int a, b, resultado;

    printf("Digite um valor qualquer para A: ");
    scanf("%d", &a);

    printf("Agora digite um valor qualquer para B: ");
    scanf("%d", &b);
    
    resultado = valorHipotenusa(a, b);

    printf("O valor da hipotenusa eh: %d\n", resultado);
    return 0;
}

int valorHipotenusa (int a, int b)
{
    return sqrt((a * 2) + (b * 2));
}
