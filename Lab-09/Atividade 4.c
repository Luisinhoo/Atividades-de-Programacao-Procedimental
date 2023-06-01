/*
    Atividade 4: Crie um programa que contenha um array contendo 5 elementos inteiros.
                 Leia esse array do teclado e imprima o endereço das posições contendo
                 valores pares.
    Por Luís h.
*/
#include <stdio.h>

int main() 
{
    int array[5];
    int i;

    for(i = 0; i < 5; i++) 
    {
        printf("Digite o %dº numero inteiro: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Enderecos das posicoes com valores pares:\n");

    for(i = 0; i < 5; i++) 
    {
        if(array[i] % 2 == 0) 
        {
            printf("Posicao %d: %p\n", i, &array[i]);
        }
    }

    return 0;
}
