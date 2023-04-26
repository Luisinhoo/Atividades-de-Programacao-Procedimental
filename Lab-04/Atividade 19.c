/*
  Atividade 19: Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!.
  Por Luís H.
*/
#include <stdio.h>

int fatoracao(int fatorial, int n);

int main()
{
    int fatorial, n, resultado;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &n) ;

    resultado = fatoracao(fatorial, n);
    return 0;
}

int fatoracao(int fatorial, int n)
{
    for(fatorial = 1; n > 1; n = n - 1)
    {
        fatorial = fatorial * n;
    }

    printf("O fatorial deste numero eh: %d\n",fatorial);
    return fatorial;
}
