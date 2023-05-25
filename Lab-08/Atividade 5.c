/*
    Atividade 5: Faça um programa que leia dois variáveis do tipo inteiro (A e B) e duas do
                 tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
                 o programa deve retornar a soma do dobro dos dois números lidos. O dobro
                 de A na própria variável A e o dobro de B na própria variável B.
    Por Luís H.
*/
#include <stdio.h>

void dobrar(int *num);
int main() 
{
    int A, B;
    int *p;
    int *q;
    int soma = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    p = &A;
    q = &B;

    dobrar(p);
    dobrar(q);

    printf("\nO dobro de A eh: %d\n", A);
    printf("O dobro de B eh: %d\n\n", B);

    soma = *p + *q;
    printf("A soma do dobro dos numeros eh: %d\n", soma);

    return 0;
}

void dobrar(int *num)
{
    *num *= 2;
}
