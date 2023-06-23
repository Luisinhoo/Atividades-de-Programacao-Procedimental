/*
  Atividade 8: Faça um programa para armazenar em memória um vetor de dados
               contendo 1500 valores do tipo int, usando a função de alocação
               dinâmica de memória CALLOC:
                    a) Faça um loop e verifique se o vetor contém realmente os 1500
                       valores inicializados com zero (conte os 1500 zeros do vetor);
                    b) Atribua para cada elemento do vetor o valor do seu índice junto a
                       este vetor;
                    c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *vetor;
    int i;
    int contadorZeros = 0;;

    //Alocando memória para o vetor e inicializando com zeros
    vetor = (int*) calloc(1500, sizeof(int));
    if(vetor == NULL) 
    {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    //Verificando se o vetor foi inicializado corretamente com zeros
    for(i = 0; i < 1500; i++) 
    {
        if(vetor[i] == 0) 
        {
            contadorZeros++;
        }
    }

    printf("Quantidade de zeros no vetor: %d\n", contadorZeros);

    //Atribuindo valores de índice para cada elemento do vetor
    for(i = 0; i < 1500; i++) 
    {
        vetor[i] = i;
    }

    //Exibindo os 10 primeiros elementos do vetor
    printf("Primeiros 10 elementos do vetor:\n");
    for(i = 0; i < 10; i++) 
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    //Exibindo os 10 últimos elementos do vetor
    printf("Ultimos 10 elementos do vetor:\n");
    for(i = 1490; i < 1500; i++) 
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    //Liberando a memória alocada
    free(vetor);
    vetor = NULL;

    return 0;
}
