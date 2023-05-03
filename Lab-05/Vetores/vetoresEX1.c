/*
	VETORES 
	
   Atividade 1 de VETORES: Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.
                           O programa deve executar os seguintes passos:
                               a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.

                               b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
                                  A[0], A[1] e A[5] do vetor e mostre na tela esta soma.

                               c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.

                               d) Mostre na tela cada valor do vetor A, um em cada linha.

   POR LUÍS H.
*/

#include <stdio.h>

int main()
{
    //a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    int A[6] = {1, 0, 5, -2, -5, 7};

    int i;
    int soma = 0;

    /*
       b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
          A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
    */
    soma = A[0] + A[1] + A[5];
    printf("A soma entre os valores de A nas posicoes A[0], A[1] e A[5] eh: %d\n", soma);
    printf("\n");

    //c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
    A[4] = 100;
    printf("A[4] = [%d]\n", A[4]);
    printf("\n");

    //d) Mostre na tela cada valor do vetor A, um em cada linha.
    for(i = 0; i < 6; i++)
    {
        printf("A[%d] = [%d]\n", i, A[i]);
    }
    return 0;
}
