/*
    Atividade 1: Crie uma fun��o que recebe como par�metro um n�mero inteiro e devolve o seu dobro.
    Por Lu�s H.

*/
#include <stdio.h>

int retornarDobro(int num);
int main()
{
    int num;
    int resultado;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    resultado = retornarDobro(num);
    printf("O dobro de %d eh %d\n", num, resultado);
}
//fun��o que recebe um numero inteiro e retorna o seu dobro
int retornarDobro(int num)
{
    return (num * num);
}
