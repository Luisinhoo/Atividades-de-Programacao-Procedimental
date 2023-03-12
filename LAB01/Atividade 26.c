/*
   Atividade 26:  Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A
                  fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em
                  hectares.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float M; //área em metros quadrados
    float H; //área em hectares

    printf("Digite uma area em METROS QUADRADOS: ");
    scanf("%f", &M);

    H = M * 0.0001;

    printf("Essa area em HECTARES eh: %f\n", H);
    return 0;
}
