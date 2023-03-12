/*
   Atividade 8: Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula
		de conversão é: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
   Por Luís H.
*/
#include <stdio.h>

int main()
{
    float K; //temperatura em Kelvin
    float C; //temperatura em Celcius

    printf("Digite uma temperatura em KELVIN: ");
    scanf("%f", &K);

    C = K - 273.15;

    printf("Essa temperatura convertida para CELSIUS eh: %.2f", C);
    return 0;
}
