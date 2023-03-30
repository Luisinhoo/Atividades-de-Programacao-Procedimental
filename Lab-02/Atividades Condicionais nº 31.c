/*
  Atividade 31: Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a
                seguir, verifique e mostra qual a classificação dessa pessoa.

                                                    Peso
                               Altura  | Até 60| Entre 60 e 90 (Inclusive)    | Acima de 90
                         Menor que 1,20|   A   |             D                |     G
                         De 1,20 a 1,70|   B   |             E                |     H
                         Maior que 1,70|   C   |             F                |     I


  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    float altura;
    float peso;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Agora digite o peso: ");
    scanf("%f", &peso);

    if((altura < 1.20) && (peso <= 60))
    {
        printf("A\n");
    }

    else if((altura >= 1.20) && (altura < 1.70) && (peso <= 60))
    {
        printf("B\n");
    }

    else if((altura > 1.70) && (peso <= 60))
    {
        printf("C\n");
    }

    else if((altura < 1.20) && (peso >= 60) && (peso < 90))
    {
        printf("D\n");
    }

    else if((altura >= 1.20) && (altura < 1.70) && (peso >= 60) && (peso < 90))
    {
        printf("E\n");
    }

    else if((altura > 1.70) && (peso >= 60) && (peso < 90))
    {
        printf("F\n");
    }

    else if((altura < 1.20) && (peso >= 90))
    {
        printf("G\n");
    }

    else if((altura >= 1.20) && (altura < 1.70) && (peso >= 90))
    {
        printf("H\n");
    }

    else if ((altura > 1.70) && (peso >= 90))
    {
        printf("I\n");
    }
    return 0;
}
