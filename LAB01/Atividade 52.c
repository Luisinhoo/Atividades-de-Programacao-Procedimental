/*
   Atividade 52: Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
                 proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
                 leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do
                 prêmio com base no valor investido.
    Por Luís H.
*/
#include <stdio.h>

int main()
{

    float ap1; //apostador 1
    float ap2; //apostador 2
    float ap3; //apostador 3
    float premio;
    float p1;
    float p2;
    float p3;
    float apostatotal;

    printf("Digite o valor do premio: ");
    scanf("%f", &premio);

    printf("Digite quanto cada um dos amigos investiram: ");
    scanf("%f %f %f",&ap1, &ap2, &ap3);

    apostatotal = ap1 + ap2 +ap3;
    p1 = ap1 / apostatotal * premio;
    p2 = ap2 / apostatotal * premio;
    p3 = ap3 / apostatotal * premio;

    printf("O apostador 1 recebe: R$%.3f\n", p1);
    printf("O apostador 2 recebe: R$%.3f\n", p2);
    printf("O apostador 3 recebe: R$%.3f\n", p3);
    return 0;
}
