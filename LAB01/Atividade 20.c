/*
   Atividade 20: Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de
                 conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float K; //massa em quilogramas
    float L; //massa em libras

    printf("Digitem uma quantidade de MASSA EM QUILOGRAMAS: ");
    scanf("%f", &K);

    L = K / 0.45;

    printf("Essa quantidade de massa em LIBRAS eh: %.2f\n", L);
    return 0;
}
