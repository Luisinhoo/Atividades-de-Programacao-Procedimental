/*
    Atividade 2: Crie um programa que contenha uma matriz de float contendo 3 linhas e 3
                 colunas. Utilizando aritmética de ponteiro, imprima o endereço de cada
                 posição dessa matriz.
    Por Luís h.
*/
#include <stdio.h>

int main() 
{
    float mat[3][3];
    int i, j;
    
    printf("Enderecos da matriz:\n");
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Endereco da matriz linha %d, coluna %d: %p\n", i, i, &(mat[i]));
        }
    }
    return 0;
}
