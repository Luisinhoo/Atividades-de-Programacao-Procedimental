/*
  Atividade 24: Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
                uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um
                programa em que o usuário entre com o valor e o estado destino do produto e o programa
                retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o
                estado digitado não for válido, mostrar uma mensagem de erro.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int ESTD; //estado destino

    float pf; //preço final do produto
    float valor;
    char MG;
    char SP;
    char RJ;
    char MS;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Agora digite o estado destino do produto: ");
    scanf("%d", &ESTD);

    if((ESTD = 'MG') || (ESTD = 'mg'))
    {
        pf = valor + (valor * 0.07);
        printf("Valor: %.2f\n",pf);
    }

    else if((ESTD = 'SP') || (ESTD = 'sp'))
    {
        pf = valor + (valor * 0.12);
        printf("Valor: %.2f\n",pf);
    }

    else if((ESTD = 'RJ') || (ESTD = 'rj'))
    {
        pf = valor  + (valor * 0.15);
        printf("Valor: %.2f\n",pf);
    }

    else if((ESTD = 'MS') || (ESTD = 'ms'))
    {
        pf = valor + (valor * 0.08);
        printf("Valor: %.2f\n",pf);
    }

    else
    {
        printf("ESTADO INVALIDO\n");
    }
    return 0;
}
