/*
    Atividade 2: Fa�a uma fun��o que receba a data atual (dia, m�s e ano em inteiro) e exiba-a na tela no
                 formato textual por extenso. Ex.: Data: 18/11/2022, Imprimir: 18 de novembro de 2022.
    Por Lu�s H.

*/
#include <stdio.h>
void porExtenso(int dia, int mes, int ano);
int main()
{
    int dia, mes, ano;
    int resultado;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("\nAgora digite o mes: ");
    scanf("%d", &mes);
    printf("\nPor fim, digite o ano: ");
    scanf("%d", &ano);

    if((dia <= 31) || (dia <= 28))
    {
        if(mes <= 12)
        {
            porExtenso(dia, mes, ano); //fun��o
            printf("A data %d/%d/%d digitada, por extenso fica %s\n", dia, mes, ano, resultado);
        }
        else
        {
            printf("Mes invalido!\n");
        }
    }
    else
    {
        printf("Dia invalido!\n");
    }
    return 0;
}

//fun��o que receba a data atuale exibe na tela no formato textual por extenso.
void porExtenso(int dia, int mes, int ano)
{
    char* c[] = {"Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro","Novembro", "Dezembro"};

    printf("\n%d de %s de %d\n", dia, c[mes - 1], ano);
}
