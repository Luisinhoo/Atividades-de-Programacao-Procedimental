/*
  Atividade 15: Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da
                semana correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por diante.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int diaS; //dia da semana

    printf("Digite um numero inteiro entre 1 e 7: ");
    scanf("%d", &diaS);

    switch(diaS)
    {
        case 1:
                        diaS = 1;
                        printf("DOMINGO\n", diaS);
                        break;

        case 2:
                        diaS = 2;
                        printf("SEGUNDA-FEIRA\n", diaS);
                        break;

        case 3:
                        diaS = 3;
                        printf("TERCA-FEIRA\n", diaS);
                        break;

        case 4:
                        diaS = 4;
                        printf("QUARTA-FEIRA\n", diaS);
                        break;

        case 5:
                        diaS = 5;
                        printf("QUINTA-FEIRA\n", diaS);
                        break;

        case 6:
                        diaS = 6;
                        printf("SEXTA-FEIRA\n", diaS);
                        break;

        case 7:
                       diaS = 7;
                       printf("SABADO\n", diaS);
                       break;

        default:
                       printf("INVALIDO\n", diaS);
    }
    return 0;
}
