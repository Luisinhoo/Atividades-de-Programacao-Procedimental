/*
   Atividade 15: Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é:
                 G = R*180/pi, sendo G o ângulo em graus e R em radianos e pi = 3.141592.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float R; //ângulo em radianos
    float G; //ângulo em graus
    float pi = 3.141592; //pi e seu valor
    
    printf("Digite um angulo em radianos: ");
    scanf("%f", &R);
    
    G = R * 180 / pi;
    
    printf("Angulo em graus: %.1f\n", G);
    return 0;
}
