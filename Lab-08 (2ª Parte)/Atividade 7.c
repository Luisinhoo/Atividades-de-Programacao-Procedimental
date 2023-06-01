/*
    Atividade 7: Escreva um programa que receba um array de inteiros com 10 elementos
                 digitados pelo usuário e encontre o menor (min) e o maior (max) elemento
                 desse array. Utilize ponteiros tanto para acessar o array quanto para acessar
                 as variáveis min e max, ou seja, são necessários pelo menos 3 ponteiros.
    Por Luís h.
*/
#include <stdio.h>

void AcharMinMax(int *array, int size, int *min, int *max);
int main() 
{
    int array[10];
    int i;
    int min, max;
    int *ptrArray;
    int *ptrMin;
    int *ptrMax;
    
    for(i = 0; i < 10; i++) 
    {
        printf("Digite o %dº numero inteiro: ", i+1);
        scanf("%d", &array[i]);
    }
    
    ptrArray = array;
    ptrMin = &min;
    ptrMax = &max;
    
    AcharMinMax(ptrArray, 10, ptrMin, ptrMax);
    
    printf("O menor elemento eh: %d\n", *ptrMin);
    printf("O maior elemento eh: %d\n", *ptrMax);
    
    return 0;
}

void AcharMinMax(int *array, int size, int *min, int *max) 
{
    *min = *max = array[0];
    int i;
    
    for(i = 1; i < size; i++) 
    {
        if(array[i] < *min) 
        {
            *min = array[i];
        }
        
        if (array[i] > *max) 
        {
            *max = array[i];
        }
    }
}
