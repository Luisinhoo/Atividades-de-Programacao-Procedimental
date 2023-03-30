/*
  Atividade 28: Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
                seguintes médias de acordo com um valor numérico digitado pelo usuário:

                      (a) Geométrica:   ³√ x * y * z
                      (b) Ponderada:   [(1 * x)+(2 * y)+(3 * z)] / 6
                      (c) Harmônica:    1 / (1/x + 1/y + 1/z)
                      (d) Aritmética:   (x + y + z) / 3



  POR LUÍS H.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int y;
    int z;
    int media;
    int cal; //calcular

    char GEO;
    char PON;
    char HAR;
    char ARI;

    printf("Medias\n");
    printf("-> (a)Media Geometrica\n");
    printf("-> (b)Media Ponderada\n");
    printf("-> (c)Media Harmonica\n");
    printf("-> (d)Media Aritmetica\n");

    printf("Digite qual calculo de media deve ser feito: ");
    scanf("%d", &cal);

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("Digite um valor para y: ");
    scanf("%d", &y);

    printf("Digite um valor para z: ");
    scanf("%d", &z);

    if((cal = 'GEO') || (cal = 'geo'))
    {
        media = sqrt(x * y * z);
        printf("Media Geometrica eh: %d\n", media);
    }

    else if((cal = 'PON') || (cal = 'pon'))
    {
        media = ((1 * x)+(2 * y)+(3 * z)) / 6;
        printf("Media Ponderada eh: %d\n", media);
    }

    else if((cal = 'HAR') || (cal = 'har'))
    {
        media = 1 / (1/x + 1/y + 1/z);
        printf("Media Harmonica eh: %d\n", media);
    }

    else if((cal = 'ARI') || (cal = 'ari'))
    {
        media = (x + y + z) / 3;
        printf("Media Aritmetica eh: %d\n", media);
    }

    else
    {
        printf("Media invalida\n", media);
    }
    return 0;
}
