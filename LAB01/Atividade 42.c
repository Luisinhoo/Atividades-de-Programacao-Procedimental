/*
    Atividade 42: Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se
                  que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7%
                  de imposto sobre o salário-base.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
     float salb; //salário-base
     float salar; //salário a receber

     printf("Digite o valor SALARIO-BASE: R$");
     scanf("%f",&salb);

     salar = salb + (salb * 0.05)/*gratificação de 5% sobre o salário-base.*/ - (salb * 0.07);  //paga 7% de imposto sobre o salário-base.

     printf("O SALARIO A RECEBER eh: R$%.2f\n",salar);
     return 0;
}
