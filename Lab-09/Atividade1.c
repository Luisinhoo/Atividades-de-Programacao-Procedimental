/*
  Atividade 1:  Crie um programa que:
                a) Aloque dinamicamente um array de 5 números inteiros;
                b) Peça para o usuário digitar os 5 números no espaço alocado;
                c) Mostre na tela os 5 números;
                d) Libere a memória alocada.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    int i;
    
    //a) Aloque dinamicamente um array de 5 números inteiros;
    array = (int*)malloc(5 * sizeof(int));

    //b) Peça para o usuário digitar os 5 números no espaço alocado;
    for(i = 0 ; i < 5; i++)
    {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &array[i]);
    }
    //c) Mostre na tela os 5 números;
    for(i = 0 ; i < 5; i++)
    {
        printf("%d  ", array[i]);
    }
    //d) Libere a memória alocada.
    free(array);
    array = NULL;
    
    return 0;
}
