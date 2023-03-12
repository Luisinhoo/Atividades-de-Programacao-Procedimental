/*
	Atividade 6:  Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
		      formula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a
		      temperatura em Celsius.
  	Por Luís H.
*/
#include <stdio.h>

int main()
{
    float C; //temperatura em graus Celcius
    float F; //temperatura em graus Fahrenheit

    printf("Digite um temperatura em GRAUS CELCIUS: ");
    scanf("%f", &C);

    F = C * (9.0/5.0) + 32.0;

    printf("Essa temperatura convertida para FAHRENHEIT eh: %.2f", F);
    return 0;
}
