/*
    Atividade 3: Crie um programa que contenha um array de inteiros contendo 5 elementos.
                 Utilizando apenas aritmética de ponteiros, leia esse array do teclado e
                 imprima o dobro de cada valor lido.
    Por Luís h.
*/
#include <stdio.h>

#define ARRAY 5 //tamanho do array

void dobrarValores(int *array, int tamanho);
int main() 
{
    int array[ARRAY];
    int i;

    for(i = 0; i < ARRAY; i++) 
    {
        printf("Digite o %dº elemento do array: ", i+1);
        scanf("%d", &array[i]);
    }

    dobrarValores(array, ARRAY);

    printf("Valores dobrados:\n");
    for(i = 0; i < ARRAY; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void dobrarValores(int *array, int tamanho) 
{
    int *p = array;  // Ponteiro para percorrer o array
    int i;

    for(i = 0; i < tamanho; i++) 
    {
        *p *= 2;  // Dobra o valor do elemento apontado por p
        p++;      // Move o ponteiro para o próximo elemento do array
    }
}
