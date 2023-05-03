/*
        MATRIZES:

    Atividade 1: Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    int mat[4][4];
    int i, j;
    int contador = 0;
    
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Digite um valor para a linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
            
            if(mat[i][j] > 10)
            {
                contador++;
            }
        }
    }

    printf("%d destes valores sao maiores que 10\n", contador);
    return 0;
}
