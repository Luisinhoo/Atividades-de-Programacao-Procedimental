/*
	VETORES 
	
  Atividade 5 de VETORES: Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i
                          a posição do elemento no vetor. Em seguida imprima o vetor na tela.
  POR LUÌS H.
*/
#include <stdio.h>

int main()
{
    int vet[50];
    int i;

    for(i = 0; i < 50; i++)
    {
       vet[i] = (i + (5 * i)) % (i + 1);
    }

    for(i = 0; i < 50; i++)
    {
        printf("[%d]\n", vet[i]);
    }
    return 0;
}
