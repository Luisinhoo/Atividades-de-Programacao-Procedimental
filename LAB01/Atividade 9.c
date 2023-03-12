/*
    Atividade 9: Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula
                 de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float C; //graus Celcius
    float K; //graus Kelvin
    
    printf("Digite uma temperatura em CELCIUS: ");
    scanf("%f", &C);
    
    K = C + 273.15;
    
    printf("Essa temperatura convertida para KELVIN eh: %.2f\n", K);
    
    return 0;
}
