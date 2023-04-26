/*
  Atividade 12: Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de
                todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1).
                Se o número lido não for maior do que zero, o programa terminará com a mensagem “Número inválido”.
  Por Luís H.
*/
#include <stdio.h>

int somarAlgarismos(int num, int soma);

int main()
{
    int num; //número
    int soma = 0; //soma dos algarismos
    int resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    resultado = somarAlgarismos(num, soma);

    printf("A soma dos algarismos digitados eh: %d\n", resultado);
    return 0;
}

int somarAlgarismos(int num,int soma)
{
    int A, B, C, D;

    if(num > 0)
    {
        A = (num / 1 % 10);

        B = (num / 10 % 10);

        C = (num / 100 % 10);

        D = (num / 1000 % 10);

        soma = A + B + C + D;
    }
    else
    {
        printf("Numeros invalidos\n");
    }
    return soma;
}
