/*
    Atividade 36: Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um
                  cilindro circular é calculado por meio da seguinte fórmula: V = pi * raio2 * altura, onde pi =
                  3.141592.
   Por Luís H.
*/
#include <stdio.h>

int main()
{
    float h; //altura
    float R; //raio
    float vl; //volume
    float pi = 3.141592; //pi e seu valor
    float V; //volume

    printf("Digite a ALTURA do cilindro circular: ");
    scanf("%f", &h);

    printf("Agora digite o valor do RAIO do cilindro circular: ");
    scanf("%f", &R);

    V = pi * (R * R) * h;

    printf("O volume deste cilindro circular eh: %.2f\n", V);

    return 0;
}
