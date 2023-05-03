/*
        MATRIZES:

    Atividade 2: Declare uma matriz 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos.
                 Escreva ao final a matriz obtida.
    Por Luís H.

*/
#include <stdio.h>

int main()
{
    int mat[5][5];
    int i, j;

    for(i = 0;i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(i == j)
            {
                mat[i][j] = 1;
            }

            else
            {
                mat[i][j] = 0;
            }
        }
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
