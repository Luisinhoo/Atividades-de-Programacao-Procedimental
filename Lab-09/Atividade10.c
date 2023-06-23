/*
  Atividade 10: Faça um programa que pergunte ao usuário quantos valores ele deseja
                armazenar em um vetor de double, depois use a função MALLOC para
                reservar (alocar) o espaço de memória de acordo com o especificado
                pelo usuário. Esse vetor deve ter um tamanho maior ou igual a 10
                elementos. Use este vetor dinâmico como um vetor comum, atribuindo
                aos 10 primeiros elementos do vetor valores aleatórios (usando a função
                rand) entre 0 e 100. Exiba na tela os valores armazenados nos 10
                primeiros elementos do vetor.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int tamanho;
    double* vetor;
    int i;

    printf("Quantos valores deseja armazenar no vetor? ");
    scanf("%d", &tamanho);

    if(tamanho < 10) 
    {
        tamanho = 10;
        printf("O tamanho minimo do vetor eh 10. O vetor sera alocado com tamanho 10!\n");
    }

    vetor = (double*) malloc(tamanho * sizeof(double));

    if(vetor == NULL) 
    {
        printf("Erro ao alocar memoria para o vetor.\n");
        return 1;
    }

    srand(time(NULL));

    for(i = 0; i < 10; i++) 
    {
        vetor[i] = (double) (rand() % 101); //Gera um número aleatório entre 0 e 100
    }

    printf("Valores armazenados nos 10 primeiros elementos do vetor:\n");
    for(i = 0; i < 10; i++) 
    {
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    vetor = NULL;

    return 0;
}
