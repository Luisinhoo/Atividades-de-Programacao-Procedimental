/*
        MATRIZES:

    Atividade 3: Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior
                 valor.
    Por Luís H.

*/
#include <stdio.h>

int main()
{
    int mat[4][4];
    int i, j;
    int L = 0; //linhas
    int C = 0; //colunas
    int maior = 0;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Digite o valor da linha %d coluna %d: ", i+1, j+1);
            scanf("%d", mat[i][j]);

            if(mat[i][j] > maior)
            {
                maior = mat[i][j];
                L = i;
                C = j;
            }
        }
    }

    printf("Maior = %d\n\n", maior);
    printf("Linha: %d\n\n", L);
    printf("Coluna: %d\n\n", C);
    return 0;
}
