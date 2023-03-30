/*
  Atividade 19:  Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5,
                 mas, não simultaneamente pelos dois.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int num; //número

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    if(num % 3 == 0)
    {
        printf("%d eh divisivel por 3\n", num);
    }

    else if(num % 5 == 0)
    {
        printf("%d eh divisivel por 5\n", num);
    }

    else if ((num % 3 != 0) && (num % 5 != 0))
    {
        printf("%d nao eh divisivel por 3 e nem por 5\n", num);
    }

    return 0;

}
