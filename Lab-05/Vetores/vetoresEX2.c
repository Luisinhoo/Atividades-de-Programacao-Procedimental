/*
	VETORES 
	
   Atividade 2 de VETORES: Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
                           X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
                           escrever a soma dos valores encontrados nas respectivas posições X e Y
   POR LUÍS H.                        
*/
#include <stdio.h>

int main()
{
    float vet[8] = {12, 6, 3, 13, 4, 7, 1, 9};
    float X, Y, i, j;
    float soma = 0;

    X = vet[4];
    Y = vet[2];

    for(i = 0; i <= 8; i++)
    {
        for(j = 0; j <= 8; j++)
        {
            soma = X + Y;
        }
    }
    printf("Soma = %.1f\n", soma);

    return 0;
}
