/*
  Atividade 33: Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule
                e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a
                segunda tabela).

                                    PREÇO ANTIGO | PERCENTUAL DE AUMENTO
                                    até R$ 50    |      5%
                            entre R$ 50 e R$ 100 |     10%
                             acima de R$ 100     |     15%
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    float precoA; //preço antigo
    float precoN; //preço novo

    printf("Digite o preco antigo: ");
    scanf("%f", &precoA);

    if(precoA <= 50)
    {
        precoN = precoA + (precoA * 0.05);
        printf("O novo preco eh: R$%.2f\n", precoN);
    }

    else if((precoA > 50) && (precoA <= 100))
    {
        precoN = precoA + (precoA * 0.10);
        printf("O novo preco eh: R$%.2f\n", precoN);
    }

    else if(precoA > 100)
    {
        precoN = precoA + (precoA * 0.15);
        printf("O novo preco eh: R$%.2f\n", precoN);
    }

    else
    {
        printf("Preco invalido\n");
    }
    return 0;
}
