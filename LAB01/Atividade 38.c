/*
   Atividade 38: Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele
                 recebeu um aumento de 25%.
   Por Luís H.
*/
#include <stdio.h>

int main()
{
    float sal; //salário
    float nvsal; //novo salário
    float aum = 0.25; //aumento

    printf("Digite o SALARIO: R$");
    scanf("%f", &sal);

    nvsal = (sal * aum) + sal;

    printf("O NOVO SALARIO sera de: R$%.2f\n", nvsal);
    return 0;
}
