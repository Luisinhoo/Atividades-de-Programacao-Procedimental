/*
    Atividade 10: Crie uma função para somar dois arrays. Esta função deve receber dois
                  arrays e retornar a soma em um terceiro array. Caso o tamanho do primeiro
                  e segundo array seja diferente então a função retornará ZERO (0). Caso a
                  função seja concluída com sucesso a mesma deve retornar o valor UM (1).
                  Utilize aritmética de ponteiros para manipulação do array.
    Por Luís H.
*/
#include <stdio.h>

int somarArrays(int* array1, int* array2, int tamanho, int* resultado);
int main() 
{
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int tamanho = sizeof(array1) / sizeof(array1[0]);//Tamanho do array
    //Usado para calcular o tamanho do array em tempo de execução
    int resultado[tamanho];
    int i;
    
    if(somarArrays(array1, array2, tamanho, resultado)) 
    {
        printf("Resultado da soma: ");
        for(i = 0; i < tamanho; i++) 
        {
            printf("%d ", resultado[i]);
        }
        printf("\n");
    } 
    else 
    {
        printf("Os tamanhos dos arrays são diferentes!\n");
    }
    return 0;
}

int somarArrays(int* array1, int* array2, int tamanho, int* resultado) 
{
    int i;
    
    //Verificar se os tamanhos dos arrays são diferentes
    if(sizeof(array1) != sizeof(array2)) 
    {
        return 0; //Retorna zero se os tamanhos forem diferentes
    }
    
    //Soma os elementos dos arrays e armazena no array resultado
    for(i = 0; i < tamanho; i++) 
    {
        *(resultado + i) = *(array1 + i) + *(array2 + i);
    }
    
    return 1; //Retorna um para indicar sucesso
}
