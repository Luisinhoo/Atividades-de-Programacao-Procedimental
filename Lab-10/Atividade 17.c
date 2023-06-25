/*
    Atividade 17: Faça um programa que leia um arquivo que contenha as dimensões de
                  uma matriz (linha e coluna), a quantidade de posições que serão
                  anuladas, e as posições a serem anuladas (linha e coluna). O programa
                  lê esse arquivo e, em seguida, produz um novo arquivo com a matriz
                  com as dimensões dadas no arquivo lido, e todas as posições
                  especificadas no arquivo ZERADAS e o restante recebendo o valor 1.
                        Ex: arquivo “matriz.txt”
                        3 3 2  //3 e 3 dimensoes da matriz e 2 posicoes que serao anuladas
                        1 0
                        1 2 /*Posicoes da matriz que serao anuladas.
                        arquivo “matriz_saida.txt”
                        saída:
                        1 1 1
                        0 1 0
                        1 1 1
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

void zerarMatriz(int** matriz, int linhas, int colunas, int posicoes, int** posicoesAnuladas) 
{
    int i, j;
    int linha;
    int coluna;
    
    // Inicializa a matriz com 1
    for(i = 0; i < linhas; i++) 
    {
        for(j = 0; j < colunas; j++) 
        {
            matriz[i][j] = 1;
        }
    }
    
    //Zera as posições especificadas
    for(i = 0; i < posicoes; i++) 
    {
        linha = posicoesAnuladas[i][0];
        coluna = posicoesAnuladas[i][1];
        
        if(linha >= 0 && linha < linhas && coluna >= 0 && coluna < colunas) 
        {
            matriz[linha][coluna] = 0;
        }
    }
}

void liberarMatriz(int** matriz, int linhas)
{
    int i;
    
    for(i = 0; i < linhas; i++) 
    {
        free(matriz[i]);
    }
    free(matriz);
    matriz = NULL;
}

int main() 
{
    FILE* arquivoEntrada;
    FILE* arquivoSaida;
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    int linhas, colunas, posicoes;
    int** matriz;
    int** posicoesAnuladas;
    int i, j;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    
    if(arquivoEntrada == NULL) 
    {
        printf("Erro ao abrir o arquivo de entrada.\n");
        exit(1);
    }

    fscanf(arquivoEntrada, "%d %d %d", &linhas, &colunas, &posicoes);

    //Aloca a matriz
    matriz = (int**)malloc(linhas * sizeof(int*));
    
    for(i = 0; i < linhas; i++) 
    {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }

    //Aloca o array de posições anuladas
    posicoesAnuladas = (int**)malloc(posicoes * sizeof(int*));
    
    for(i = 0; i < posicoes; i++) 
    {
        posicoesAnuladas[i] = (int*)malloc(2 * sizeof(int));
        fscanf(arquivoEntrada, "%d %d", &posicoesAnuladas[i][0], &posicoesAnuladas[i][1]);
    }

    fclose(arquivoEntrada);

    //Chama a função para zerar a matriz
    zerarMatriz(matriz, linhas, colunas, posicoes, posicoesAnuladas);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivoSaida);

    arquivoSaida = fopen(nomeArquivoSaida, "w");
    
    if(arquivoSaida == NULL) 
    {
        printf("Erro ao abrir o arquivo de saida.\n");
        exit(1);
    }

    //Escreve a matriz modificada no arquivo de saída
    for(i = 0; i < linhas; i++) 
    {
        for(j = 0; j < colunas; j++) 
        {
            fprintf(arquivoSaida, "%d ", matriz[i][j]);
        }
        fprintf(arquivoSaida, "\n");
    }

    fclose(arquivoSaida);

    //Libera a memória alocada
    liberarMatriz(matriz, linhas);
    for(i = 0; i < posicoes; i++) 
    {
        free(posicoesAnuladas[i]);
    }
    free(posicoesAnuladas);
    posicoesAnuladas = NULL;

    printf("Arquivo de saida gerado com sucesso.\n");

    return 0;
}
