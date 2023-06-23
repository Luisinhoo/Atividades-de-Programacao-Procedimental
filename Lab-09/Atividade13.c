/*
  Atividade 13: Escreva um programa que aloque dinamicamente uma matriz (de
                inteiros) de dimensões definidas pelo usuário e a leia. Em seguida,
                implemente uma função que receba um valor, retorne 1 caso o valor
                esteja na matriz ou retorne 0 caso não esteja na matriz.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int isInMatrix(int **matrix, int l, int c, int valor);
int main() 
{
    int i, j;
    int l, c;
    int resultado;
    // Alocação dinâmica da matriz
    int **matrix = (int **)malloc(l * sizeof(int *));
    int valor;  
    
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &l);
    
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &c);
    
    for(i = 0; i < l; i++) 
    {
        matrix[i] = (int *)malloc(c * sizeof(int));
    }
    
    printf("\n");
    //Leitura da matriz
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Digite o %dº elemento da matriz: ", i+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Digite um valor para verificar se esta na matriz: ");
    scanf("%d", &valor);
    
    //Verificação do valor na matriz
    resultado = isInMatrix(matrix, l, c, valor);
    
    if(resultado) 
    {
        printf("O valor %d esta na matriz.\n", valor);
    } 
    else 
    {
        printf("O valor %d não esta na matriz.\n", valor);
    }
    
    //Liberação da memória alocada
    for(i = 0; i < l; i++) 
    {
        free(matrix[i]);
    }
    free(matrix);
    matrix = NULL;
    
    return 0;
}

int isInMatrix(int **matrix, int l, int c, int valor)
{
    int i, j;
    
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++) 
        {
            if(matrix[i][j] == valor) 
            {
                return 1; // Valor encontrado na matriz
            }
        }
    }
    return 0; //Valor não encontrado na matriz
}
