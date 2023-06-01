/*
    Atividade 6: Elabore um programa que dado um array e um valor do mesmo tipo do
                 array, preencha os elementos de array com esse valor. Não utilize índices
                 para percorrer o array, apenas aritmética de ponteiros.
    Por Luís h.
*/
#include <stdio.h>

void preencherArray(int *array, int tamanho, int valor);
int main() 
{
    int tamanho = 5;
    int array[tamanho];
    int valor = 42;
    int i;

    preencherArray(array, tamanho, valor);

    printf("Array preenchido:\n");
    
    for(i = 0; i < tamanho; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void preencherArray(int *array, int tamanho, int valor) 
{
    int *p = array;

    while(p < (array + tamanho)) 
    {
        *p = valor;
        p++;
    }
}
