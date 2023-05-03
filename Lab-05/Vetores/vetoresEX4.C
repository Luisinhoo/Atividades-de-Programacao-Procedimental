/*
	VETORES 
	
   Atividade 4 de VETORES: Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram
                           o maior e o menor valor.
   POR LUÍS H.                        
*/
#include <stdio.h>

int main()
{
    int valor[5];
    int i;
    int maior,menor,maiorPosicao,menorPosicao;

    for(i = 0; i < 5; i++)
    {
            printf("Digite o %dº numero: ", i+1);
            scanf("%d", &valor[i]);

            if(i == 0)
            {
                maior = valor[i];
                menor = valor[i];
                maiorPosicao = i;
                menorPosicao = i;
            }

            else if(valor[i] > maior)
            {
                maior = valor[i];
                maiorPosicao = i;
            }
            else if(valor[i] < menor)
            {
                menor = valor[i];
                menorPosicao = i;
            }

    }
    printf("Maior valor: %d\n", maior);
    printf("Posicao [%d]\n", maiorPosicao);

    printf("\n");

    printf("Menor valor: %d\n", menor);
    printf("Posicao [%d]\n", menorPosicao);

    return 0;
}
