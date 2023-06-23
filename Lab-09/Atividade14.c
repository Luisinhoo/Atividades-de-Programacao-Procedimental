/*
  Atividade 14: Construa um programa que leia o número de linhas e de colunas de uma
                matriz de números reais, aloque espaço dinamicamente para esta e a
                inicialize com valores fornecidos pelo usuário. Ao final, o programa
                deverá retornar a matriz na saída padrão com layout apropriado.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

double** alocarMatriz(int linhas, int colunas);
void lerMatriz(double** matriz, int linhas, int colunas);
void exibirMatriz(double** matriz, int linhas, int colunas);
void liberarMatriz(double** matriz, int linhas);
int main() 
{
    int linhas, colunas;
    //Aloca espaço dinamicamente para a matriz
    double** matriz = alocarMatriz(linhas, colunas);

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    //Lê os valores da matriz
    lerMatriz(matriz, linhas, colunas);

    //Exibe a matriz
    exibirMatriz(matriz, linhas, colunas);

    //Libera a memória da matriz
    liberarMatriz(matriz, linhas);

    return 0;
}

//Função para alocar dinamicamente a matriz
double** alocarMatriz(int linhas, int colunas) 
{
    double** matriz = (double**)malloc(linhas * sizeof(double*));
    int i;

    for(i = 0; i < linhas; i++) 
    {
        matriz[i] = (double*)malloc(colunas * sizeof(double));
    }

    return matriz;
}

//Função para ler os valores da matriz
void lerMatriz(double** matriz, int linhas, int colunas) 
{
    int i, j;
    
    for(i = 0; i < linhas; i++) 
    {
        for(j = 0; j < colunas; j++) 
        {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
}

//Função para exibir a matriz
void exibirMatriz(double** matriz, int linhas, int colunas) 
{
    int i, j;
    
    printf("Matriz:\n");

    for(i = 0; i < linhas; i++) 
    {
        for(j = 0; j < colunas; j++) 
        {
            printf("%.2lf\t", matriz[i][j]);
        }

        printf("\n");
    }
}

//Função para liberar a memória da matriz
void liberarMatriz(double** matriz, int linhas) 
{
    int i;
    
    for(i = 0; i < linhas; i++) 
    {
        free(matriz[i]);
    }

    free(matriz);
    matriz = NULL;
}
