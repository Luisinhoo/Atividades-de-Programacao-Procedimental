/*
  Atividade 6:  Faça um programa que leia 10 inteiros e imprima sua média.
  POR Luís H.
*/
#include <stdio.h>

int main()
{
    int num, media;
    int i;

    for (i = 0; i < 10; i++)
        {
            printf("Digite o %dº numero: ", i + 1);
            scanf("%d", &num);
            media += num / 2;
        }
    printf("Media = %d\n", media);
    return 0;
}
