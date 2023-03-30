/*
  Atividade 30: Faça um programa que receba três números e mostre-os em ordem crescente.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf("Digite um numero qualquer: ");
    scanf("%d", &num1);

    printf("Digite outro numero qualquer: ");
    scanf("%d", &num2);

    printf("Por fim, digite mais numero qualquer: ");
    scanf("%d", &num3);

    if((num1 < num2) && (num2 < num3) && (num1 < num3))
    {
        printf("%d %d %d\n", num1, num2, num3);
    }

    else if((num1 < num2) && (num2 > num3) && (num1 < num3))
    {
        printf("%d %d %d\n", num1, num3, num2);
    }

    else if((num2 < num1) && (num2 < num3) && (num1 > num3))
    {
        printf("%d %d %d\n", num2, num3, num1);
    }

    else if((num2 < num1) && (num2 < num3) && (num1 < num3))
    {
        printf("%d %d %d\n", num2, num1, num3);
    }

    else if((num3 < num1) && (num3 < num2) && (num1 < num2))
    {
        printf("%d %d %d\n", num3, num1, num2);
    }

    else if((num3 < num1) && (num3 < num2) && (num1 < num2))
    {
        printf("%d %d %d\n", num3, num2, num1);
    }

    else
    {
        printf("Numeros invalidos\n");
    }
    return 0;
}
