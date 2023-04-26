/*
 Atividade 9: Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do
              cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: 𝑉 =
              pi ∗ 𝑟𝑎𝑖𝑜² ∗ 𝑎𝑙𝑡𝑢𝑟𝑎, onde pi = 3.141592.
 Por Luís H.
*/
#include <stdio.h>

float volumeCilindro(float altura, float raio);

int main()
{
    float altura, raio, V;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Agora digite o raio do cilindro: ");
    scanf("%f", &raio);

    V = volumeCilindro(altura, raio);

    printf("O volume do cilindro eh: %.2f\n", V);
    return 0;
}

float volumeCilindro(float altura, float raio)
{
    float V;
    float pi = 3.141592;

    V = pi * (raio * raio) * altura;
}
