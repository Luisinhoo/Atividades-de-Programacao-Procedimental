/*
        MATRIZES:

    Atividade 4: Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse
                 valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de "não
                 encontrado".
    Por Luís H.

*/
#include <stdio.h>

int main()
{
    int mat[5][5];
    int i, j, X;
    int linha = 0;
    int coluna = 0;
    int encontrar = 0;
  
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Digite o valor da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
  
    printf("Digite X: ");
    scanf("%d", &X);
  
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if (mat[i][j] == X)
            {
                linha = i;
                coluna = j;
                encontrar = 1;
            }
        }
    }
    if(encontrar)
    {
        printf("Linha: %d\n", linha);
        printf("Coluna: %d\n", coluna);
    }
    else
    {
        printf("Não encontrado\n");
    }
    return 0;
}
