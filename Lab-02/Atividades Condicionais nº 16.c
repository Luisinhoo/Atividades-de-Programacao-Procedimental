/*
  Atividade 16: Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
                correspondente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int mes; //os meses correspondentes de 1 a 12

    printf("Digite um numero inteiro de 1 a 12: ");
    scanf("%d", &mes);

    switch(mes)
    {
        case 1:
                 mes = 1;
                 printf("JANEIRO\n", mes);
                 break;

        case 2:
                 mes = 2;
                 printf("FEVEREIRO\n", mes);
                 break;

        case 3:
                 mes = 3;
                 printf("MARCO\n", mes);
                 break;

        case 4:
                 mes = 4;
                 printf("ABRIL\n", mes);
                 break;

        case 5:
                 mes = 5;
                 printf("MAIO\n", mes);
                 break;

        case 6:
                 mes = 6;
                 printf("JUNHO\n", mes);
                 break;

        case 7:
                 mes = 7;
                 printf("JULHO\n", mes);
                 break;

        case 8:
                 mes = 8;
                 printf("AGOSTO\n", mes);
                 break;

        case 9:
                 mes = 9;
                 printf("SETEMBRO\n", mes);
                 break;

        case 10:
                 mes = 10;
                 printf("OUTUBRO\n", mes);
                 break;

        case 11:
                 mes = 11;
                 printf("NOVEMBRO\n", mes);
                 break;

        case 12:
                 mes = 12;
                 printf("DEZEMBRO\n", mes);
                 break;

        default:
                 printf("NUMERO INVALIDO");
    }
    return 0;
}
