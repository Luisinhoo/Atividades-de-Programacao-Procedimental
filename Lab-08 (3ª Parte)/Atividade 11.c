/*
    Atividade 11: Escreva uma função que retorna o maior valor de um array de tamanho N.
                  Escreva um programa que leia N valores inteiros, imprima o array com ‘k’
                  elementos por linha, e o maior elemento. O valor de ‘k’ também deve ser
                  fornecido pelo usuário.
    Por Luís H.
*/
#include <stdio.h>

int encontrarMaiorElemento(int array[], int tamanho);
void imprimirArray(int array[], int tamanho, int k);
int main() 
{
    int N, k;
    int i;
    int maior;
    
    printf("Digite o tamanho do array(N): ");
    scanf("%d", &N);
    printf("\n");
    
    int array[N];
    for(i = 0; i < N; i++) 
    {
        printf("Digite o %dº valor inteiro do array: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\n");
    
    printf("Digite o valor de 'k': ");
    scanf("%d", &k);
    printf("\n");
    
    printf("Array com %d elementos por linha:\n", k);
    imprimirArray(array, N, k);
    
    maior = encontrarMaiorElemento(array, N);
    
    printf("Maior elemento: %d\n", maior);
    
    return 0;
}

//Função para receber um array e seu tamanho como parâmetros e retornar o maior valor do array
int encontrarMaiorElemento(int array[], int tamanho)
{
    int maior = array[0];
    int i;
    
    for(i = 1; i < tamanho; i++) 
    {
        if (array[i] > maior) 
        {
            maior = array[i];
        }
    }
    return maior;
}

//função para receber o array, seu tamanho e o valor de k e imprimir o array com k elementos por linha
void imprimirArray(int array[], int tamanho, int k)
{
    int i; 
    
    for(i = 0; i < tamanho; i++) 
    {
        printf("%d ", array[i]);
        
        if((i + 1) % k == 0) 
        {
            printf("\n");
        }
    }
    printf("\n");
}
