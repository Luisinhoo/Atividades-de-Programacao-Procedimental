/*
    Atividade 7:  Escreva uma função que aceita como parâmetro um array de inteiros com N
                  valores, e determina o maior elemento do array e o número de vezes que
                  este elemento ocorreu no array. Por exemplo, para um array com os
                  seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retorna para
                  o programa que a chamou o valor 15 e o número 3 (indicando que o número
                  15 ocorreu 3 vezes). A função deve ser do tipo void.
    Por Luís H.
*/
#include <stdio.h>

void determinarElemento(int array[], int N);
int main()
{
    int N;
    int i;
    
    printf("Digite o tamanho deste array: ");
    scanf("%d", &N);
    
    int array[N];  // Alocar o array com base no tamanho fornecido

    for(i = 0; i < N; i++) //iniciando o array
    {
        printf("Digite o %dº elemento deste array: ", i+1);
        scanf("%d", &array[i]);
    }
    
    determinarElemento(array, N);
    
    return 0;
}

void determinarElemento(int array[], int N)
{
    int i;
    int maior = array[0];
    int contador = 1;
    
    for(i = 1; i < N; i++) 
    {
        if(array[i] > maior) 
        {
            maior = array[i];
            contador = 1;
        } 
        else if(array[i] == maior) 
        {
            contador++;
        }
    }
    
    printf("O maior numero digitado foi %d e apareceu %d vezes\n", maior, contador);
}
