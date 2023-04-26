/*
  Atividade 10: Faça uma função que receba dois números e retorne qual deles é o maior
  Por Luís H.
*/
#include <stdio.h>

float retorneMaior(float num1, float num2);

int main()
{
    float num1, num2, comparacao;

    printf("Digite um numero qualquer: ");
    scanf("%f", &num1);

    printf("Agora digite outro numero qualquer: ");
    scanf("%f", &num2);

    retorneMaior(num1, num2);

    return 0;
}

float retorneMaior(float num1, float num2)
{
    if(num1 > num2)
    {
        printf("%.1f eh maior que %.1f\n", num1, num2);
    }
    else
    {
        printf("%.1f eh maior que %.1f\n", num2, num1);
    }
    return 1;
}
