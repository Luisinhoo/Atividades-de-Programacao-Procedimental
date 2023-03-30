/*
   Atividade 12: Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
                 inválido”. Se o número for positivo, calcular o logaritmo deste número.
   POR LUÍS H.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num; //número inteiro

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    if(num > 0)
    {
        num = log(num);
        printf("O LOG deste numero eh: %d\n", num);
    }
    else
    {
        printf("Numero invalido\n", num);
    }
    return 0;
}
