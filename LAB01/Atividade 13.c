/*
    Atividade 13: Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
                  conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float M; //velocidade em milhas
    float K; //velocidade em quilômetros
    
    printf("Digite uma distância em KM: ");
    scanf("%f", &K);
    
    M = K / 1.61;
    
    printf("Essa velocidade convertida para MILHAS eh: %.2f", M);
    return 0;
}
