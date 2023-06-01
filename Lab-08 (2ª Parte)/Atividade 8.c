/*
    Atividade 8: Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um
                 programa que leia a variável ‘A’ e calcule e exiba o dobro, o triplo e o
                 quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B
                 deve ser usada para calcular o dobro, C o triplo e D o quádruplo.
    Por Luís h.
*/
#include <stdio.h>

int main() 
{
    int A, *B, **C, ***D;
    
    //Ponteiros apontando para as respectivas variáveis
    B = &A;
    C = &B;
    D = &C;
    
    //Leitura do valor de A
    printf("Digite um valor para A: ");
    scanf("%d", &A);
    
    //Cálcula e exibi o dobro, triplo e quádruplo de A
    printf("O dobro de A eh: %d\n", 2 * *B);
    printf("O triplo de A eh: %d\n", 3 * **C);
    printf("O quadruplo de A eh: %d\n", 4 * ***D);
    
    return 0;
}
