/*
  Atividade 35: Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e
                se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em
                anos não bissextos.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    int mes;
    int ano;

    printf("Digite um dia: ");
    scanf("%d", &dia);

    printf("Agora digite um mes: ");
    scanf("%d", &mes);

    printf("Por fim, digite um ano: ");
    scanf("%d", &ano);

    if(ano % 400 == 0)
    {
        if((mes >= 1) && (mes <= 12) && (dia >= 1) && (dia <= 31))
        {
            printf("Data valida\n");
        }
        else
        {
            printf("Data invalida\n");
        }

    }

    else if(ano % 400 != 0)
    {
        if((mes >= 1) && (mes <= 12) && (dia >= 1) && (dia <= 31))
           {
               printf("Data valida\n");
           }
           else
            {
                printf("Data invalida\n");
            }
    }

    else
    {
        printf("Dados invalidos\n");
    }
    return 0;
}
