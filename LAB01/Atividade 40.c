/*
   Atividade 40: Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o
                 número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
                 sabendo-se que são descontados 8% para imposto de renda.
   Por Luís H.
*/
#include <stdio.h>

int main()
{
    int DT; //dias trabalhados

    float qntl; //quantia líquida
    float IMPR = 0.92; //imposto de renda (100% - 8% = 92%)

    printf("Digite a quantidade de DIAS trabalhados: ");
    scanf("%d", &DT);

    qntl = (30 * DT) * IMPR;

    printf("A quantia a ser paga eh de: R$%.2f\n", qntl);
    return 0;
}
