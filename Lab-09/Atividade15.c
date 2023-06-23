/*
  Atividade 15: Faça um programa que leia dois números N e M e:
                    a) Crie e leia uma matriz de inteiros N x M;
                    b) Localize os três maiores números de uma matriz e mostre a linha e a
                       coluna onde estão.
  Por Luís H.
*/
#include <stdio.h>

void encontrarMaioresNumeros(int matriz[][100], int linhas, int colunas);
int main() 
{
    int N, M;
    int matriz[100][100];
    int i, j;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &N);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &M);

    printf("Digite os elementos da matriz:\n");
    for(i = 0; i < N; i++) 
    {
        for(j = 0; j < M; j++) 
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    encontrarMaioresNumeros(matriz, N, M);

    return 0;
}
//Função para encontrar os três maiores números da matriz
void encontrarMaioresNumeros(int matriz[][100], int linhas, int colunas) 
{
    int i, j;
    int maiores[3] = {0};  //Armazena os três maiores números encontrados
    int posicao_linha[3];  //Armazena as linhas dos maiores números
    int posicao_coluna[3]; //Armazena as colunas dos maiores números

    //Percorre a matriz para encontrar os três maiores números
    for(i = 0; i < linhas; i++) 
    {
        for(j = 0; j < colunas; j++) 
        {
            if(matriz[i][j] > maiores[0]) 
            {
                maiores[2] = maiores[1];
                maiores[1] = maiores[0];
                maiores[0] = matriz[i][j];
                posicao_linha[0] = i;
                posicao_coluna[0] = j;
            } 
            else if(matriz[i][j] > maiores[1]) 
            {
                maiores[2] = maiores[1];
                maiores[1] = matriz[i][j];
                posicao_linha[1] = i;
                posicao_coluna[1] = j;
            } 
            else if(matriz[i][j] > maiores[2]) 
            {
                maiores[2] = matriz[i][j];
                posicao_linha[2] = i;
                posicao_coluna[2] = j;
            }
        }
    }
    //Mostra os resultados
    printf("Os tres maiores numeros da matriz sao:\n");
    for(i = 0; i < 3; i++) 
    {
        printf("Numero: %d\n", maiores[i]);
        printf("Posicao: Linha %d, Coluna %d\n", posicao_linha[i], posicao_coluna[i]);
    }
}
