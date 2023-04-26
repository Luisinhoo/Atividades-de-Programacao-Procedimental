/*
  Atividade 22: OBS: ESTA ATIVIDADE ESTÁ COMO 23 NO LAB, POIS PULA DO 21 AO 23.

                    Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo,
                    a saída para n = 4 seria:
                        *
                        **
                        ***
                        ****
                        ***
                        **
                        *
  Por Luís H.
*/
#include <stdio.h>

void AuturaELados(int n);

int main()
{
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    AuturaELados(n);
    return 0;
}

void AuturaELados(int n)
{
    int i, j;

    for (i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (j = 1; j <= i; j++)
                printf("*");
        }
        else
        {
            for (j = 1; j <= 2 * n - i; j++)
                printf("*");
        }
        printf("\n");
    }
}
