/*
    Atividade 9: Escreva um programa que declare um array de inteiros e um ponteiro para
                 inteiros. Associe o ponteiro ao array. Agora, some mais um (+1) a cada
                 posição do array usando o ponteiro (use *).
    Por Luís H.
*/
#include <stdio.h>

void somarUm(int *vet, int tamanho);
int main()
{
    int vet[5]; //Array de inteiros
    int *p;
    int i;
    int tamanho = sizeof(vet) / sizeof(vet[0]); //Tamanho do array
    //Usado para calcular o tamanho do array em tempo de execução
    
    p = &vet[0]; //Associando o ponteiro ao array
    
    printf("Array original:\n");
    for(i = 0; i < tamanho; i++) 
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
    
    somarUm(p, tamanho);
    
    printf("Array modificado:\n");
    for(i = 0; i < tamanho; i++) 
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
    
    return 0;
}

void somarUm(int *vet, int tamanho)
{
    int i;
    
    for(i = 0; i < tamanho; i++) 
    {
        (*vet)++;
        vet++;
    }
}

