/*
    Atividade 5: Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo
                 que o raio é passado por parâmetro.

    Por Luís H.

*/
#include <stdio.h>

int testeCalculaVolume(float R);
int main()
{
    float R; //raio
    float V; //volume

    printf("Digite o raio da esfera: ");
    scanf("%f", &R);

    V = testeCalculaVolume(R);

    printf("Volume da esfera eh: %.2f\n", V);
    return 0;
}

int testeCalculaVolume(float R)
{
    float pi = 3.1415;
    return (4 / 3) * pi * R * R * R;
}
