/*
   Atividade 7: Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A
		fórmula de conversão é: C = 5.0*(F- 32.0)/9.0, sendo C a temperatura em Celsius e F a
		temperatura em Fahrenheit.
   Por Luís H.
*/
#include <stdio.h>

int main()
{
    float F; //temperatura em Fahrenheit
    float C; //temperatura em Celcius

    printf("Digite uma temperatura em FAHRENHEIT: ");
    scanf("%f", &F);

    C = 5.0 * (F - 32.0) / 9.0;

    printf("Essa temperatura convertida para CELSIUS eh: %.2f", C);
    return 0;
}
