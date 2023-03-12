/*
   Atividade 27: Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2. A
                 fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em
                 hectares
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float M; //área em metros quadrados
    float H; //área em hectares

    printf("Digite uma area em HECTARES: ");
    scanf("%f", &H);

    M = H * 10000;

    printf("Essa area em METROS QUADRADOS eh: %.2f\n", M);
    return 0;
}
