/*
  Atividade 38: Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia,
               Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia
               fornecido é um dia válido: dia > 0, dia <= 28 para o mês de fevereiro (29 se o ano for bissexto),
               dia <= 30 em abril, junho, setembro e novembro, dia <= 31 nos outros meses. Teste a validade do
               mês: mês > 0 e mês < 13. Teste a validade do ano: ano <= ano atual (use uma constante definida
               com o valor igual a 2022). Imprimir: “data válida” ou “data inválida” no final da execução do programa.
  POR LUÍS H.
*/
#include <stdio.h>
const int ANO = 2022; //ANO ATUAL

int main()
{
    int dia;
    int mes;
    int ano;

    printf("Digite o dia de seu nascimento: ");
    scanf("%d", &dia);

    printf("Digite o mes de seu nascimento: ");
    scanf("%d", &mes);

    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &ano);

    if (ano < ANO)
    {
        printf("Ano valido\n");
    }
    else if ((mes >= 1 ) || (mes <= 12))
    {
        printf("Mes valido\n");
    }
    else if (dia >=1 || dia <= 31)
    {
        printf("Dia valido\n");
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if (dia < 30)
        {
            printf("Dia valido\n");
        }
        else
        {
            printf("Data invalida\n");
        }
    }
    else if (mes == 2)
    {
        if ((ano % 400 == 0) && (ano % 400 == 0) || (ano % 100 != 0))
        {
            if (dia < 29)
            {
                printf("Dia valido\n");
            }
            else
            {
                printf("Data invalida\n");
            }
        }
        else
        {
            if (dia < 28)
            {
                printf("Dia valido\n");
            }
            else
            {
                printf("Data invalida\n");
            }
        }
    }
    else
    {
        printf("Data invalida\n");
    }

    return 0;
}
