/*
   Atividade 19: Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m³. A
                 fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros
                 cúbicos.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float L; //litros
    float M; //metros cúbicos

    printf("Digite uma quantidade de LITROS: ");
    scanf("%f", &L);

    M = L  / 1000;

    printf("Isso em METROS CUBICOS eh: %.2f\n", M);
    return 0;
}
