/*
    Atividade 8: Implemente uma função que receba como parâmetro um array de números
                 reais de tamanho N e retorne quantos números negativos há nesse array.
                 Essa função deve obedecer ao protótipo: int negativos(float *vet, int N);
    Por Luís H.
*/
#include <stdio.h>

int negativos(float *vet, int N);
int main()
{
    int N;
    int i;
    int resultado;
    
    printf("Digite o tamanho deste array: ");
    scanf("%d", &N);
    
    float vet[N];  //Alocar o array com base no tamanho fornecido

    for(i = 0; i < N; i++) //iniciando o array
    {
        printf("Digite o %dº elemento deste array: ", i+1);
        scanf("%f", &vet[i]);
    }
    
    resultado = negativos(vet, N);
    
    printf("Neste array, existem %d numero(s) negativo(s)\n", resultado);
    return 0;
}

int negativos(float *vet, int N)
{
    int i;
    int contador = 0;
    
    for(i = 0; i < N; i++)
    {
        if(vet[i] < 0)
        {
            contador++;
        }
    }
    return contador;
}
