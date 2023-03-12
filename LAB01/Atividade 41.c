/*
    Atividade 41: Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
                  trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor
                  calculado.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float ht; //horas trabalhadas
    float htm; //horas trabalhadas no mês
    float vpf; //valor a ser pago ao funcionário
    float ad = 0.10; //adicional de 10%

    printf("Digite o valor (em reais) das horas trabalhadas: R$");
    scanf("%f", &ht);

    printf("Agora digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &htm);

    vpf = (ht + ad) * htm;

    printf("O valor a ser pago eh: %.2f\n", vpf);
    return 0;
}
