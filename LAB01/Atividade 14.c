/*
    Atividade 14: Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é:
    R = G*pi/180, sendo G o ângulo em graus e R em radianos e pi = 3.141592.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float G; //ângulo em graus
    float R; //ângulo em radianos
    float pi = 3.141592;  // pi e seu valor
    
    printf("Digite um angulo em graus: ");
    scanf("%f", &G);
    
    R = G * pi / 180;
    
    printf("Angulo em radianos: %.4f\n", R);
    return 0;
}
