/*
    Atividade 6: Escreva um programa que declare duas variáveis do tipo inteiro e duas do
                 tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
                 o programa deve ler dois números para essas variáveis e os imprimir,
                 realizando as quatro operações básicas de matemática com esses números.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int A, B;
    int *p, *q;
    int op;
        
            
    do 
    {
        printf("ADICAO        (OPCAO 1)\n");
        printf("SUBTRACAO     (OPCAO 2)\n");
        printf("MULTIPLICACAO (OPCAO 3)\n");
        printf("DIVISAO       (OPCAO 4)\n");
        printf("SAIDA         (OPCAO 5)\n\n");
    
        printf("Digite uma opcao: ");
        scanf("%d", &op);
        printf("\n");
        
        if((op >= 1) && (op < 5))
        {
            printf("Digite um valor inteiro qualquer para A: ");
            scanf("%d", &A);
    
            printf("Digite um valor inteiro qualquer para B: ");
            scanf("%d", &B);
            
            p = &A;
            q = &B;
        }
        
        switch(op)
        {
            case 1:
            printf("Soma: %d\n\n", *p + *q);
            break;
            
            case 2:
            printf("Subtracao: %d\n\n", *p - *q);
            break;
            
            case 3:
            printf("Multiplicacao: %d\n\n", *p * *q);
            break;
            
            case 4:
            if(*q == 0)
            {
                printf("Nao existe divisao por zero!\n\n");
                printf("Digite outro valor: ");
                scanf("%d", &*q);
            }
            printf("Divisao: %d\n\n", *p / *q);
            break;
            
            case 5:
            printf("Saindo\n\n");
            break;
            exit(1);
        }
    }while(op != 5);
    
    return 0;
}
