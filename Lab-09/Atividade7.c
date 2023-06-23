/*
  Atividade 7:  Escreva um programa que leia primeiro os 6 números gerados pela
                loteria e depois os 6 números do seu bilhete. O programa então compara
                quantos números o jogador acertou. Em seguida, ele aloca espaço para
                um vetor de tamanho igual a quantidade de números corretos e guarda
                os números corretos nesse vetor. Finalmente, o programa exibe os
                números sorteados e os seus números corretos.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int numerosLoteria[6];
    int numerosBilhete[6];
    int numerosCorretos[6];
    int i, j;
    int quantidadeCorretos = 0;

    for(i = 0; i < 6; i++) 
    {
        printf("Digite o %dº numero da loteria: ", i+1);
        scanf("%d", &numerosLoteria[i]);
    }
    printf("\n");

    for(i = 0; i < 6; i++) 
    {
        printf("Digite o %dº numero do seu bilhete: ", i+1);
        scanf("%d", &numerosBilhete[i]);
    }
    printf("\n");

    for(i = 0; i < 6; i++) 
    {
        for(j = 0; j < 6; j++) 
        {
            if(numerosBilhete[i] == numerosLoteria[j]) 
            {
                numerosCorretos[quantidadeCorretos] = numerosBilhete[i];
                quantidadeCorretos++;
            }
        }
    }

    printf("Numeros sorteados: ");
    for(i = 0; i < 6; i++) 
    {
        printf("%d ", numerosLoteria[i]);
    }

    printf("\nSeus numeros corretos: ");
    for(i = 0; i < quantidadeCorretos; i++) 
    {
        printf("%d ", numerosCorretos[i]);
    }
    printf("\n");

    return 0;
}
