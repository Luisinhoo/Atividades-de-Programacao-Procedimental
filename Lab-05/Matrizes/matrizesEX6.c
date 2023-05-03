/*
        MATRIZES:

    Atividade 6: Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a
                 matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos
                 acima da diagonal principal. Imprima a matriz original e a matriz transformada.
    Por Luís H.

*/
#include <stdio.h>
#include <stdlib.h>//para a função srand e rand
#include <time.h>//para a função time

int main()
{
    int mat[4][4];
    int i, j;

    srand(time(NULL)); //cada execução do código irá gerar números aleatórios diferentes!
    
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            mat[i][j] = rand() % 20 + 1;
        }
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if (i < j)
            {
                mat[i][j] = 0;
            }
        }
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
