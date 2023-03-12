/*
   Atividade 24: Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
                 fórmula de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em
                 acres.
    Por Luís H.
*/
#include <stdio.h>
int main()
{
    float M; //área em metros quadrados
    float A; //área em acres

    printf("Digite uma area em METROS QUADRADOS: ");
    scanf("%f", &M);

    A = M * 0.000247;

    printf("Essa area em ACRES eh: %f\n", A);
    return 0;
}
