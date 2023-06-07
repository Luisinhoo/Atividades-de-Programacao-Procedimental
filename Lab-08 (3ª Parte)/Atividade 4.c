/*
    Atividade 4: Faça um programa que leia três valores inteiros e chame uma função que
                 receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o
                 menor valor na primeira variável, o segundo menor valor na variável do
                 meio, e o maior valor na última variável. A função deve retornar o valor 1 se
                 os três valores forem iguais e 0 se existirem valores diferentes. Exibir os
                 valores ordenados na tela.
    Por Luís H.
*/
#include <stdio.h>

int ordenarValores(int *D, int *E, int *F);
int main()
{
    int A, B, C;
    int resultado;
    
    printf("Digite um valor inteiro qualquer: ");
    scanf("%d", &A);
    
    printf("Agora digite um outro valor inteiro qualquer: ");
    scanf("%d", &B);
    
    printf("Por fim digite mais um valor inteiro qualquer: ");
    scanf("%d", &C);
    
    resultado = ordenarValores(&A, &B, &C);
    
    printf("Valores ordenados:\n");
    printf("%d\n%d\n%d\n", A, B, C);
    
    if(resultado) 
    {
        printf("Os tres valores sao iguais!\n");
    } 
    else 
    {
        printf("Os tres valores sao diferentes!\n");
    }
    
    return 0;
}

int ordenarValores(int *D, int *E, int *F)
{
    int t;
    
    if (*D > *E) 
    {
        t = *D;
        *D = *E;
        *E = t;
    }
    if (*E > *F) 
    {
        t = *E;
        *E = *F;
        *F = t;
    }
    if (*D > *E) 
    {
        t = *D;
        *D = *E;
        *E = t;
    }
    
    if((*D == *E) && (*E == *F))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
