/*
   Atividade 33: Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    int LQ; //lado de um quadrado
    int ar; //área

    printf("Digite o tamanho do lado de um QUADRADO: ");
    scanf("%d", &LQ);

    ar = LQ * LQ;

    printf("A area eh: %d\n", ar);
    return 0;
}
