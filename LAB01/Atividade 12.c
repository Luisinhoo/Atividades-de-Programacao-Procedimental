/* 
    Atividade 12: Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
                  conversão é: K = 1.61*M, sendo K a distância em quilômetros e M em milhas
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float M; //velocidade em milhas
    float K; //velocidade em quilômetros
    
    printf("Digite uma distância em MILHAS: ");
    scanf("%f", &M);
    
    K = 1.61 * M;
    
    printf("Essa velocidade convertida para KM eh: %.2f\n", K);
    return 0;
}
