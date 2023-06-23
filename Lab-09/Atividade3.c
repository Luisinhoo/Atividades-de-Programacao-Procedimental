/*
  Atividade 3: Faça um programa que leia do usuário o tamanho de um vetor a ser lido
               e faça a alocação dinâmica de memória. Em seguida, leia do usuário
               seus valores e mostre quantos dos números são pares e quantos são ímpares.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
	int N;
	int i;
	int par = 0, impar = 0;
	
    printf("Digite o tamanho do vetor: ");
	scanf("%d", &N);
	printf("\n");
	
	vetor = (int *)malloc(N * sizeof(int));
	
	for(i = 0; i < N; i++) 
	{
		printf("Digite o %dº numero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("\n");
	for(i = 0; i < N; i++) 
	{
	    printf("O conteudo do vetor na %dª posicao eh: %d  \n", i+1, vetor[i]);
	    
	    if(vetor[i] != 0 ) 
	    {
			if(vetor[i] % 2 == 0)
			{
			    par++;
			}
			else 
			{
			    impar++;
			}
		}
	}
	printf("\n");
	printf("Quantidade de pares eh: %d\n",par);
	printf("Quantidade de impares eh: %d\n",impar);
	
	free(vetor);
	vetor = NULL;
    return 0;
}
