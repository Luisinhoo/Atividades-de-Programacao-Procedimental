/*
    Atividade 8: Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
    Por Luís H.
*/
#include <stdio.h>

int main() 
{
    int i;
    int num, menor, maior;
    
    menor = num;
    maior = num;
    
    //Lê os próximos 10 números e verifica se são menores ou maiores que o valor atual de menor e maior
    for(i = 0; i < 10; i++) 
    {
        printf("Agora, digite o %d numero qualquer : ", i+1);
        scanf("%d", &num);
        
        if(num < menor) 
        {
            menor = num;
        }
        
        else if(num > maior) 
        {
            maior = num;
        }
    }

    printf("O MENOR valor lido foi %d e o MAIOR valor lido foi %d.\n", menor, maior);
    
    return 0;
}
