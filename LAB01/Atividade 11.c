/*
    Atividade 11: Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
                  (quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e
                  M em m/s.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float M; //velocidade em metros por segundo
    float K; //velocidade em quilômetros por hora
    
    printf("Digite uma velocidade em M/S: ");
    scanf("%f", &M);
    
    K = M * 3.6;
    
    printf("Essa velocidade convertida para KM/H eh: %.2f\n", K);
    return 0;
}
