/*
    Atividade 12: Escreva uma função que receba um array de inteiros V e os endereços de
                  duas variáveis inteiras, min e max, e armazene nessas variáveis o valor
                  mínimo e máximo do array. Escreva também uma função main que use essa
                  função.
    Por Luís H.
*/
#include <stdio.h>

void encontrarMinEMax(int V[], int N, int *min, int *max);
int main() 
{
    int N;
    int min, max;
    int i;
    
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);
    printf("\n");
    
    int array[N];
    
    for(i = 0; i < N; i++) 
    {
        printf("Digite o %dº valor inteiro do array: ", i+1);
        scanf("%d", &array[i]);
    }
    
    encontrarMinEMax(array, N, &min, &max);
    printf("\n");
    printf("Valor minimo do array: %d\n", min);
    printf("Valor maximo do array: %d\n", max);
    
    return 0;
}

void encontrarMinEMax(int V[], int N, int *min, int *max)
{
    int i;
    
    *min = V[0];
    *max = V[0];
    
    for(i = 1; i < N; i++) 
    {
        if(V[i] < *min) 
        {
            *min = V[i];
        }
        
        if(V[i] > *max) 
        {
            *max = V[i];
        }
    }
}
