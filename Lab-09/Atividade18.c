/*
  Atividade 18: Escreva um programa para fazer a alocação dinâmica dos blocos de dados conforme solicitado abaixo:
                    a) Vetor de 1024 Bytes (1 Kbyte);
                    b) Matriz de inteiros de dimensão 10 × 10;
                    c) Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres), código do produto (inteiro) e preço em reais;
                    d) Texto de até 100 linhas com até 80 caracteres em cada linha.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
 {
    //a) Vetor de 1024 Bytes (1 Kbyte)
    int* vetor = (int*)malloc(1024);

    //b) Matriz de inteiros de dimensão 10 × 10
    int** matriz = (int**)malloc(10 * sizeof(int*));
    
    char** texto;
    int i;
    
    for(i = 0; i < 10; i++) 
    {
        matriz[i] = (int*)malloc(10 * sizeof(int));
    }

    //c) Vetor para armazenar 50 registros
    typedef struct 
    {
        char nome[30];
        int codigo;
        float preco;
    } Registro;

    Registro* registros = (Registro*)malloc(50 * sizeof(Registro));

    // d) Texto de até 100 linhas com até 80 caracteres em cada linha
    texto = (char**)malloc(100 * sizeof(char*));
    for(i = 0; i < 100; i++) 
    {
        texto[i] = (char*)malloc(81 * sizeof(char));
    }

    //Liberar a memória alocada
    free(vetor);
    vetor = NULL;

    for(i = 0; i < 10; i++) 
    {
        free(matriz[i]);
    }
    free(matriz);
    matriz = NULL;

    free(registros);
    registros = NULL;

    for(i = 0; i < 100; i++) 
    {
        free(texto[i]);
    }
    free(texto);
    texto = NULL;

    return 0;
}
