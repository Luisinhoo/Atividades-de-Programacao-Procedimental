/*
  Atividade 9: Faça um programa que leia uma quantidade qualquer de números
               armazenando-os na memória e pare a leitura quando o usuário entrar
               um número negativo. Em seguida, imprima o vetor lido. Use a função
               REALLOC.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *vetor = NULL;
    int tamanho = 0;
    int numero;
    int i;

    printf("Digite os numeros (insira um numero negativo para parar):\n");

    while(1) 
    {
        scanf("%d", &numero);

        if(numero < 0) 
        {
            break;
        }

        tamanho++;
        vetor = (int*) realloc(vetor, tamanho * sizeof(int));

        if(vetor == NULL) 
        {
            printf("Erro ao alocar memoria.\n");
            exit(1);
        }

        vetor[tamanho - 1] = numero;
    }

    printf("\nVetor lido:\n");
    for(i = 0; i < tamanho; i++) 
    {
        printf("%d ", vetor[i]);
    }

    free(vetor);
    vetor = NULL;

    return 0;
}

