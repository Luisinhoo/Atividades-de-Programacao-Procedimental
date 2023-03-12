/*
    Atividade 21:  Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
                conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras.

    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float L; //massa em libras
    float K; //massa em quilogramas

    printf("Digite uma quantidade de massa em LIBRAS: ");
    scanf("%f", &L);

    K = L * 0.45;

    printf("Essa quantidade de massa em QUILOGRAMAS eh: %.2f\n", K);
    return 0;
}
