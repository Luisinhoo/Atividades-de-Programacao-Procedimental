/*
  Atividade 7: Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em
               graus Fahrenheit. A fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,0 / 5,0) + 32,0, sendo F a temperatura
               em Fahrenheit e C a temperatura em Celsius.
  Por Luís H.
*/
#include <stdio.h>

float conversaoEmFahrenheit(float C, float F);

int main()
{
    float C;
    float F;
    printf("Digite uma temperatura em GRAUS CELCIUS: ");
    scanf("%f", &C);

    F = conversaoEmFahrenheit(C, F);

    printf("A temperatura em FAHRENNHEIT eh: %.1f\n", F);
    return 0;
}

float conversaoEmFahrenheit(float C, float F)
{
    F = C * (9.0 / 5.0) + 32.0;
    return F;
}

