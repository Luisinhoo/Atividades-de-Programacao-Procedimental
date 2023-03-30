/*
    Atividade 1: Faça um programa que receba dois números e mostre qual deles é o maior.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite um numero qualquer: ");
    scanf("%d", &num1);

    printf("Agora digite outro numero qualquer: ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("\n%d eh maior que %d\n", num1, num2);
    }
    else if(num2 > num1)
    {
        printf("\n%d eh maior que %d\n", num2, num1);
    }
    else
    {
        printf("\nNumeros invalidos!\n");
    }
    return 0;
}
