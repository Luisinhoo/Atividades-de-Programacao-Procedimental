/*
  Atividade 2: Faça um programa que leia do usuário o tamanho de um vetor a ser lido
               e faça a alocação dinâmica de memória. Em seguida, leia do usuário
               seus valores e imprima o vetor lido.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
    int N;
    int i;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);
    printf("\n");
    
    //Alocando dinâmicamente
    vetor = (int *)malloc(N * sizeof(int));
    
    
    //Lendo os valores
    for(i = 0; i < N; i++)
    {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\n");
    
    //Imprimindo o vetor
    for(i = 0; i < N; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
    vetor = NULL;
    return 0;
}
