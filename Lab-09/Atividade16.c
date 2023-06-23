/*
  Atividade 16: Faça um programa que leia dois números N e M:
                    a) Crie e leia uma matriz N x M de inteiros;
                    b) Crie e construa uma matriz transposta M x N de inteiros;
                    c) Mostre as duas matrizes.
  Por Luís H.
*/
#include <stdio.h>

int main() 
{
    int N, M;
    int matriz[N][M];
    int matrizTransposta[M][N];
    int i, j;
    
    //Leitura dos números N e M
    printf("Digite o numero de linhas (N): ");
    scanf("%d", &N);
    printf("Digite o numero de colunas (M): ");
    scanf("%d", &M);
    
    //Leitura dos elementos da matriz
    printf("Digite os elementos da matriz:\n");
    for(i = 0; i < N; i++) 
    {
        for(j = 0; j < M; j++) 
        {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    //Construção da matriz transposta
    for(i = 0; i < M; i++) 
    {
        for(j = 0; j < N; j++) 
        {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }
    
    //Exibição das duas matrizes
    printf("\nMatriz original:\n");
    for(i = 0; i < N; i++) 
    {
        for(j = 0; j < M; j++) 
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz transposta:\n");
    for(i = 0; i < M; i++) 
    {
        for(j = 0; j < N; j++) 
        {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
