/*
  Atividade 9: Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
               naturais ímpares.
  POR Luís H.
*/
#include <stdio.h>

int main() 
{
    int N;
    int contador = 0;
    int i;
    
    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &N);
    
    while(contador < N) 
    {
        if((i % 2) != 0) //se i for ímpar
        {
            printf("%d\n", i);
            contador++;
        }
        i++;
    }
    return 0;
}
