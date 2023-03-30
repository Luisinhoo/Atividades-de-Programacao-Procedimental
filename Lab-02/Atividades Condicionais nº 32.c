/*
  Atividade 32: Escrever um programa que leia o código do produto escolhido do cardápio de uma
                lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
                Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete
                segue o padrão abaixo:
                       Especificação  | Código     | Preço
                      Cachorro Quente | 100        | 1,20
                         Bauru Simples| 101        | 1,30
                        Bauru com Ovo | 102        | 1,50
                            Hambúrguer| 103        | 1,20
                        Cheeseburguer | 104        | 1,70
                                  Suco| 105        | 2,20
                        Refrigerante  | 106        | 1,00
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int cod; //código
    int quantidade;
    float valu; //valor unitário
    float valt; //valor total

    printf("Cardapio\n");
    printf("100 - Cachorro Quente -> R$1,20\n");
    printf("101 - Bauru Simples -> R$1,30\n");
    printf("102 - Bauru com Ovo -> R$1,50\n");
    printf("103 - Hamburguer -> R$1,20\n");
    printf("104 - Cheeseburguer -> R$1,70\n");
    printf("105 - Suco -> R$2,20\n");
    printf("106 - Refrigerante -> R$1,00\n");
    printf("\n");

    printf("Digite o codigo do produto: ");
    scanf("%d", &cod);

    printf("Agora digite a quantidade:\n");
     scanf("%d", &quantidade);

    switch(cod)
    {

        case 100:
                  valu = 1.20 ;
                  break;

        case 101:
                  valu = 1.30;
                  break;

        case 102:
                  valu = 1.50;
                  break;

        case 103:
                  valu = 1.20;
                  break;

        case 104:
                  valu = 1.70;
                  break;

        case 105:
                  valu = 2.20;
                  break;

        case 106:
                  valu = 1.00;
                  break;

        default:
                 printf("Erro no codigo\n");
     }

     valt = valu * quantidade;

     printf("Valor Total => R$ %.2f\n",valt);
     return 0;
}
