/*
     Atividade 43:   Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
				- o total a pagar com desconto de 10%;
				- o valor de cada parcela, no parcelamento de 3% sem juros;
				- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
				- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).
     Por Luís H.
*/
#include <stdio.h>

int main() 
{
    float valT; //valor total
    float des10, valPagar; //desconto de 10% e valor a pagar
    float parcelamento; //parcelamento de 3% sem juros
    float comissao;
    float comissao2;
    
    printf("Qual o valor total: R$");
    scanf("%f", &valT);

    des10 = valT * 0.10;
    valPagar = valT - des10;
    printf("\nTotal a pagar com desconto eh de R$%.2f" , valPagar);
    
    parcelamento = valT / 3;
    printf("\nTotal do parcelamento em 3x sem juros: R$%.2f", parcelamento);
    
    comissao = valPagar * 0.05;
    printf("\nComissao venda a vista: R$%.2f", comissao);
    
    comissao2= valT * 0.05;
    printf("\nComissao venda parcelada: R$%.2f", comissao2);
    printf("\n\n");
    return 0;
}
