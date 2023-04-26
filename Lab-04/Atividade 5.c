/*
    Atividade 5: Fa�a uma fun��o e um programa de teste para o c�lculo do volume de uma esfera. Sendo
                 que o raio � passado por par�metro.

    Por Lu�s H.

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
