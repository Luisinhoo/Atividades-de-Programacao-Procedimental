/*
        MATRIZES:

    Atividade 5: Gerar e imprimir uma matriz de tamanho 10 � 10, onde seus elementos s�o da forma:
                        A[i][j] = 2 +7j - 2, se i < j;
                        A[i][j] = 3i� - 1, se i = j;
                        A[i][j] = 4i� - 5j� + 1, se i > j;

    Por Lu�s H.

*/
#include <stdio.h>

int main()
{
    int mat[10][10];
    int i, j;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            //A[i][j] = 2 +7j - 2, se i < j;
            if(i < j)
            {
                mat[i][j] = 2 * (7 * j) - 2;
            }

            //A[i][j] = 3i� - 1, se i = j;
            else if(i == j)
            {
                mat[i][j] = 3 * (i * i) - 1;
            }

            //A[i][j] = 4i� - 5j� + 1, se i > j;
            else if(i > j)
            {
                mat[i][j] = 4 * ((i * i) * i) - 5 * (j* j) + 1;
            }

            else
            {
                printf("Erro\n");
            }
        }
    }

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("Elementos da %d� matriz: %d\n",i+1, mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
