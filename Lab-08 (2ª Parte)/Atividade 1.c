/*
    Atividade 1: Crie um programa que contenha um array de float contendo 10 elementos.
                 Utilizando aritmética de ponteiro, imprima o endereço de cada posição
                 desse array.
    Por Luís h.
*/
#include <stdio.h>

int main() 
{
    float array[10];
    int i;
    
    // Imprimindo o endereço de cada posição do array
    printf("Enderecos do array:\n");
    
    for(i = 0; i < 10; i++) 
    {
        printf("Endereco do elemento %d: %p\n", i, &(array[i]));
    }
    
    return 0;
}
