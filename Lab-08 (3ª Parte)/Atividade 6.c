/*
    Atividade 6: Implemente uma função que calcule a área da superfície e o volume de uma
                 esfera de raio R. Essa função deve obedecer ao protótipo:
                 
                    void calc_esfera(float R, float *area, float *volume);
                    
                 A área da superfície e o volume são dados, respectivamente, por:
                 
                    A = 4 * pi * R²
                    V = 4/3 * pi * R³
    Por Luís H.
*/
#include <stdio.h>
#define pi 3.14159

void calc_esfera(float R, float *area, float *volume);
int main()
{
    float R, area, volume;
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &R);
    
    calc_esfera(R, &area, &volume);
    
    //≈ -> "valor aproximado"
    printf("\nArea ≈ %.3f unidades quadradas\n", area);
    printf("Volume ≈ %.3f unidades cúbicas\n", volume);
    
    return 0;
}

void calc_esfera(float R, float *area, float *volume)
{
    *area = (4.0 * pi) * (R *R);
    *volume = (4.0/3.0 * pi) * (R * R * R);
}
