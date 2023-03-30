/*
    Atividade 6: Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
                 como a diferença existente entre ambos.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    int diferenca;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num1);

    printf("Agora digite outro numero inteiro qualquer: ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        diferenca = (num1 - num2);
        printf("%d eh maior que %d\n", num1, num2);
        printf("A diferenca entre %d e %d eh: %d\n", num1, num2, diferenca);
    }

    else
    {
        diferenca = (num2 - num1);
        printf("%d eh maior que %d\n", num2, num1);
        printf("A diferenca entre %d e %d eh: %d\n", num2, num1, diferenca);
    }
    return 0;
}
