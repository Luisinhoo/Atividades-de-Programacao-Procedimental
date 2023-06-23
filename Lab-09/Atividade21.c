/*
  Atividade 21: Faça um programa que leia quatro números a, b, c e d, que serão as dimensões de duas matrizes, e:
                    a) Crie e leia uma matriz, dadas as dimensões dela;
                    b) Crie e construa uma matriz que seja o produto de duas matrizes. Na
                    sua função main(), imprima as duas matrizes e o produto entre elas, se existir.
  Por Luís H.
*/
#include <stdio.h>

void multiplyMatrices(int a, int b, int c, int d, int matrix1[a][b], int matrix2[c][d], int result[a][d]) 
{
    int i, j, k;
    
    //Verifica se é possível calcular o produto das matrizes
    if (b != c) 
    {
        printf("Nao eh possivel calcular o produto das matrizes. As dimensoes nao sao compativeis.\n");
        return;
    }
    
    //Calcula o produto das matrizes
    for(i = 0; i < a; i++) 
    {
        for(j = 0; j < d; j++) 
        {
            result[i][j] = 0;
            for(k = 0; k < c; k++) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void readMatrix(int rows, int columns, int matrix[rows][columns]) 
{
    int i, j;
    
    printf("Digite os elementos da matriz:\n");
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < columns; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int columns, int matrix[rows][columns]) 
{
    int i, j;
    
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < columns; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int a, b, c, d;
    
    printf("Digite as dimensoes da primeira matriz (a e b): ");
    scanf("%d %d", &a, &b);
    
    printf("Digite as dimensoes da segunda matriz (c e d): ");
    scanf("%d %d", &c, &d);
    
    //Criação das matrizes
    int matrix1[a][b];
    int matrix2[c][d];
    
    //Leitura das matrizes
    printf("\nMatriz 1:\n");
    readMatrix(a, b, matrix1);
    
    printf("\nMatriz 2:\n");
    readMatrix(c, d, matrix2);
    
    //Verifica se é possível calcular o produto das matrizes
    if(b != c) 
    {
        printf("\nNao eh possível calcular o produto das matrizes. As dimensoes nao sao compativeis.\n");
        return 0;
    }
    
    //Criação da matriz resultado
    int result[a][d];
    
    //Cálculo do produto das matrizes
    multiplyMatrices(a, b, c, d, matrix1, matrix2, result);
    
    //Imprime as matrizes e o produto delas
    printf("\nMatriz 1:\n");
    printMatrix(a, b, matrix1);
    
    printf("\nMatriz 2:\n");
    printMatrix(c, d, matrix2);
    
    printf("\nProduto das matrizes:\n");
    printMatrix(a, d, result);
    
    return 0;
}
