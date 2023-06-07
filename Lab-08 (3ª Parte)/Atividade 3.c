/*
    Atividade 3: Crie um programa que contenha uma função que permita passar por
                 parâmetro dois números inteiros A e B. A função deverá calcular a soma
                 entre estes dois números e armazenar o resultado na variável A. Esta função
                 não deverá possuir retorno, mas deverá modificar o valor do primeiro
                 parâmetro. Imprima os valores de A e B na função principal.
    Por Luís H.
*/
#include <stdio.h>

void calcularSoma(int *A, int B);
int main()
{
    int A = 10;
    int B = 23;
    
    printf("Valores iniciais:\n");
    printf("A: %d\n", A);
    printf("B: %d\n", B);
    
    calcularSoma(&A, B);
    
    printf("Soma = %d\n", A);
    printf("\nValores apos a soma:\n");
    printf("A: %d\n", A);
    printf("B: %d\n", B);
    
    return 0;
}

void calcularSoma(int *A, int B)
{
    *A += *A + B; 
}
