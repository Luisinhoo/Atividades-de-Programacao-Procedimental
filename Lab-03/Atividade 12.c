/*
    Atividade 12: Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
                  desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 +
                  6 + 11 + 22 + 33 = 78
    Por Luís H.
*/
#include <stdio.h>

int main() 
{
    int num, soma = 0;
    int i;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);
    
    printf("Seus divisores:\n");
    
    for(i = 1; i < num; i++)
    {
        while(soma <= num)
        {
            if (num % i == 0)
            {
                printf("%d ", i);
                soma += i;
            }
            i++;
        }
    }
    printf("\n");
    printf("A soma dos divisores = %d\n", soma);
    
    return 0;
}
