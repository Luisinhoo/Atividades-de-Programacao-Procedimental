/*
 Atividade 40: O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do
               distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica,
               de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.

                         CUSTO DE FÁBRICA | % DO DISTRIBUIDOR  | % DOS IMPOSTOS
                          até R$12.000,00 |        5           |      isento
          entre R$12.000,00 e R$25.000,00 |       10           |        15
                     acima de R$25.000,00 |       15           |        20
 POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    float custof; //custo de fábrica
    float custoc; //custo do consumidor
    float comiss; //comissão
    float imp;  //imposto

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custof);

    if(custof<= 12000)
    {
        comiss = 0.05;
    }
    else if(custof <= 25000)
    {
        comiss = 0.1;
    }
    else
    {
        comiss = 0.15;
    }

    if(custof <= 12000)
    {
        imp = 0;
    }
    else if(custof <= 25000)
    {
        imp = 0.15;
    }
    else
    {
        imp = 0.2;
    }

    custoc = custof * (1 + comiss + imp);

    printf("O custo ao consumidor sera de: R$%.2f\n", custoc);
    return 0;
}
