/*
    Atividade 11: Faça um programa que leia um número inteiro positivo N e imprima todos os números
                  naturais de 0 até N em ordem crescente.
    Por Luís H.
*/
#include <stdio.h>

int main() 
{
    int N;
    int i;
    
    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &N);
    
    for(i = 0; i <= N; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");
    
    return 0;
}
