/*
  Atividade 21: Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas
                com pontos de exclamação, conforme o exemplo abaixo (para n = 5):
                            !
                            !!
                            !!!
                            !!!!
                            !!!!!
  Por Luís H.
*/
#include <stdio.h>

int exclamacao(int num);

int main()
{
    int num, resultado;

    printf("Digite um valor: ");
    scanf("%d", &num);

    resultado = exclamacao(num);

    return 0;
}

int exclamacao(int num)
{
    int i, j;

    for(i = 1; i <= num; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("!");
        }
        printf("\n");
    }
}
