/* 
   Atividade 17: Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a
                 soma dos N números inteiros existentes entre eles.
   Por Luís H.
*/
#include <stdio.h>

int retornarSoma(int num1, int num2, int N, int soma);

int main()
{
    int N, num1, num2, resultado, soma;

    printf("Digite um numero qualquer: ");
    scanf("%d", &num1);

    printf("Agora digite outro numero qualquer: ");
    scanf("%d", &num2);

    resultado = retornarSoma(num1, num2, soma, N);
    return 0;
}

int retornarSoma(int num1, int num2, int N, int soma)
{
    int i;

    for(i = 1; i < N; i++)
    {
        soma = num1 + num2;
    }
    printf("Soma = %d\n", soma);

    return soma;
}
