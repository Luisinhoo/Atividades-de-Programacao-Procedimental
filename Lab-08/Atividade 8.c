/*
    Atividade 8: Faça um programa que leia seis números e armazene-os em um vetor.
                 Utilizando aritmética de ponteiro, imprima os valores do vetor. O programa
                 deve apresentar também o endereço de memória desses números.
    Por Luís H.
*/
#include <stdio.h>

int main() 
{
    int num[6]; //Vetor para armazenar os números
    int *p;  //Ponteiro para percorrer o vetor
    int i;
    
    for(i = 0; i < 6; i++)// Lendo os números e armazenando no vetor
    {
        printf("Digite o %dº numero inteiro qualquer: ", i+1);
        scanf("%d", &num[i]);
    }
    
    printf("\nValores do vetor e seus endereços de memoria:\n");
    
    for(p = num; p < (num + 6); p++) // Imprimindo os valores e endereços de memória utilizando ponteiros
    {
        printf("Valor: %d\nEndereço: %p\n", *p, p);
    }
    
    return 0;
}
