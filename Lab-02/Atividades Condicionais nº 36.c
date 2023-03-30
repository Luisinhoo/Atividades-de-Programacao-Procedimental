/*
  Atividade 36:  Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga
                 ao vendedor. Para calcular a comissão, considere a tabela abaixo:
                         Venda mensal   |      Comissão
         Maior ou igual a R$100.000,00  |    R$700,00 + 16% das vendas
Menor que R$100.000,00 e maior ou igual |    R$650,00 + 14% das vendas
a R$80.000,00                           |
Menor que R$80.000,00 e maior ou igual  |    R$600,00 + 14% das vendas
a R$60.000,00                           |
Menor que R$60.000,00 e maior ou igual  |    R$550,00 + 14% das vendas
a R$40.000,00                           |
Menor que R$40.000,00 e maior ou igual  |    R$500,00 + 14% das vendas
a R$20.000,00                           |
                 Menor que R$20.000,00  |    R$400,00 + 14% das vendas
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    float venda;
    float comissao;

    printf("Digite o valor da venda: ");
    scanf("%f", &venda);

    if(venda >= 100.000)
    {
        comissao = 700.00 + 0.16;
        printf("Comissao eh: %.2f\n", comissao);
    }

    else if((venda < 100.000) && (venda >= 80.000))
    {
        comissao = 650.00 + 0.14;
        printf("Comissao eh: %.2f\n", comissao);
    }

    else if((venda < 80.000) && (venda >= 60.000))
    {
        comissao = 600.00 + 0.14;
        printf("Comissao eh: %.2f\n", comissao);
    }

    else if((venda < 60.000) && (venda >= 40.000))
    {
         comissao = 550.00 + 0.14;
         printf("Comissao eh: %.2f\n", comissao);
    }

    else if((venda < 40.000) && (venda >=20.000))
    {
        comissao = 500.00 + 0.14;
        printf("Comissao eh: %.2f\n", comissao);
    }

    else if(venda < 20.000)
    {
        comissao = 400.00 + 0.14;
        printf("Comissao eh: %.2f\n", comissao);
    }
    else
    {
        printf("Venda invalida\n");
    }
    return 0;

}
