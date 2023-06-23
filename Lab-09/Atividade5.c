/*
  Atividade 5: Faça um programa que leia um número N e:
                    a) Crie dinamicamente e leia um vetor de inteiro de N posições;
                    b) Leia um número inteiro X e conte e mostre os múltiplos desse número
                       que existem no vetor.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, N;
    int i;
    int contador = 0;

    printf("Digite um numero qualquer: ");
    scanf("%d", &N);
    printf("\n");

    int *vetor = (int *) malloc(N * sizeof(int)); //a) Crie dinamicamente e leia um vetor de inteiro de N posições;

    if(vetor == NULL)
    {
        printf("Erro na alocacao de memoria!\n");
        return 1;
    }

    for(i = 0; i < N; i ++) //Inicializando o vetor criado dinamicamente
    {
        printf("Digite o %d° item do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    /*
        b) Leia um número inteiro X e conte e mostre os múltiplos desse número
           que existem no vetor.
    */
    printf("\nDigite um numero para X: ");
    scanf("%d", &X);

    for(i = 0; i < N; i++)
    {
        if(vetor[i] % X == 0)
        {
            printf("%d ", vetor[i]);
            contador++;
        }
    }

    printf("\nO numero de multiplos de X eh: %d\n", contador);

    free(vetor);
    vetor = NULL;
    return 0;
}
